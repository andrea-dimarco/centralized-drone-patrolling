/*
	Libreria per il DB del progetto
	Contiene le funzioni da dover chiamare separatamente da un'altro file
	Aiutatemi
 
 
    Andrea Di Marco, 2022
*/
	// TERMINALE
//gcc -o DB-api-exec DB-api.c -lm -I/usr/include/postgresql -lpq -std=c99



    // LIBRERIE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <libpq-fe.h>
#include <math.h>



    // FUNZIONI
/**
 REVERSE
 
 Inverte una stringa di lunghezza len
*/
void reverse(char* str, int len)
{
    int i = 0, j = len - 1, temp;
    while (i < j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
} /* reverse */



/**
 ITOA
 
 Converte un intero (base 10) in stringa.
 
 ritorna il numero di caratteri della stringa
*/
int my_itoa(int x, char str[], int d)
{

	if (x == 0)
	{
		str[0] = '0';
		str[1] = '\0';
		return 1;
	}
    int i = 0;
    while (x) {
        str[i++] = (x % 10) + '0';
        x = x / 10;
    }
 
    // If number of digits required is more, then
    // add 0s at the beginning
    while (i < d)
        str[i++] = '0';
 
    reverse(str, i);
    str[i] = '\0';
    return i;
} /* integer to string */



/**
 FTOA
 
 Converte un float (base 10) in stringa.
 
 maggiori dettagli su:
 https://www.geeksforgeeks.org/convert-floating-point-number-string/
*/
void my_ftoa(float n, char* res, int afterpoint)
{
    // Extract integer part
    int ipart = (int)n;
 
    // Extract floating part
    float fpart = n - (float)ipart;
 
    // convert integer part to string
    int i = my_itoa(ipart, res, 0);
 
    // check for display option after point
    if (afterpoint != 0) {
        res[i] = '.'; // add dot
 
        // Get the value of fraction part upto given no.
        // of points after dot. The third parameter
        // is needed to handle cases like 233.007
        fpart = fpart * pow(10, afterpoint);
 
        my_itoa((int)fpart, res + i + 1, afterpoint);
    }
} /* float to string */



/**
 ATOF
 
 Converte una stringa in float con accuratezza di 6 cifre dopo la virgola.
 
 Usando double invece che float si può incrementare la precisione, maggiori dettagli su:
 https://stackoverflow.com/questions/36018074/c-string-to-float-conversion
 */
float my_atof(char *string)
{
    float result= 0.0;
    int len = strlen(string);
    int dotPosition = 0;

    for (int i = 0; i < len; i++)
    {
        if (string[i] == '.')
        {
          dotPosition = len - i  - 1;
        }
        else
        {
          result = result * 10.0 + (string[i]-'0');
        }
      }

      while (dotPosition--)
      {
        result /= 10.0;
      }

    return result;
} /* string to float */



/**
 ATOI
 
 Converte una stringa in intero.
 
 maggiori dettagli su:
 https://www.geeksforgeeks.org/c-program-to-write-your-own-atoi/
 */
int my_atoi(char *str)
{
    // Initialize result
    int res = 0;
  
    // Iterate through all characters
    // of input string and update result
    // take ASCII character of corresponding digit and
    // subtract the code from '0' to get numerical
    // value and multiply res by 10 to shuffle
    // digits left to update running total
    for (int i = 0; str[i] != '\0'; ++i)
        res = res * 10 + str[i] - '0';
  
    // return result.
    return res;
} /* string to integer */



/**
	RESET STRING
	
	pulisce la stringa
*/
void reset_string(char* str, int len)
{
	for (int i = 0; i < len; i++)
		str[i] = '\0';
		
} /* reset string */



/**
	DO EXIT
	
	Chiude la connessione con il DB e termina il programma
*/
void do_exit(PGconn *conn) {

	PQfinish(conn);
	exit(1);
} /* do exit */



/**
 CONNECT
 
 Si connette al nostro caro database, dronepositions
 Con le mie credenziali
*/
PGconn* connect_to_DB() {

	PGconn *conn = PQconnectdb("user=parallels dbname=dronepositions password=6500");
	
	if (PQstatus(conn) == CONNECTION_BAD)
	{
		fprintf(stderr, "Connection to database failed: %s\n", PQerrorMessage(conn));
		do_exit(conn);
	}
	int ver = PQserverVersion(conn); // versione del DB
	
	return conn;
} /* connect */



/**
 SETUP
 
 Imposta il database per potergi giocare
 Ritorna 0 se l'operazione è avvenuta correttamente
*/
int db_setup() {
	
		// variabili
    int rows = 0; // righe risultato
    PGresult *res; // risultato query
    PGconn *conn; // connessione
    
    
    	// connetto
    conn = connect_to_DB();
 	
 		// eseguo query
 	res = PQexec(conn, "DELETE FROM History;");
 	
 	res = PQexec(conn, "DELETE FROM Drone;");
 	
 	res = PQexec(conn, "DELETE FROM Area;");
	
	
		// pulisco
	PQclear(res);
	
 	
 		// chiudo connessione
 	PQfinish(conn);   

	return 0;
} /* DB setup */



/**
 CREATE DRONE
 
 Inserts a basic drone (just the id) in the DB
*/
int create_drone(int drone_id) {
	
		// variabili
    int rows = 0; // righe risultato
    PGresult *res; // risultato query
    PGconn *conn; // connessione
    int Q_LEN = 150; // lunghezza massima carattery query
    char query[150] = "INSERT INTO Drone (id) VALUES ( ";
    int NUM_LEN = 10;
    char snum[NUM_LEN]; // numero convertito a stringa
    int ACCURACY = 5; // quante cifre dopo la virgola devono essere portate a stringa
    
    
    	// compongo query
    /*
    	INSERT INTO Drone (id)
		VALUES (:drone_id);
    */
    reset_string(snum, NUM_LEN);
    my_itoa(drone_id, snum, 0); // converto a stringa
    strcat(query, snum); // aggiungo "drone_id" alla query
    strcat(query, " );");
    
    	// connetto
    conn = connect_to_DB();
 	
 		// eseguo query
 	res = PQexec(conn, query);
	rows = PQntuples(res);
	
	
		// pulisco
	PQclear(res);
	
 	
 		// chiudo connessione
 	PQfinish(conn);

		// fine
	return 0;
} /* create drone */



/**
 CREATE AREA
 
 Inserts an area in the DB
*/
int create_area(int area_id, float low_x, float up_x, float low_y, float up_y, float low_z, float up_z) {
	
		// Area Constraints Check
	// inserisci trigger...
	
		// Area_Bounds
	if ( (low_x >= up_x) ||  (low_y >= up_y) || (low_z >= up_z) )
	{
		return 1;
	}
	
		// Area_Overlaps
	int isError = 0;
	
	// do magic...
	
	if ( isError == 1 )
	{
		return 1;
	}
	
		// variabili
    int rows = 0; // righe risultato
    PGresult *res; // risultato query
    PGconn *conn; // connessione
    int Q_LEN = 150; // lunghezza massima carattery query
    char query[150] = "INSERT INTO Area ( id, low_x, up_x, low_y, up_y, low_z, up_z ) VALUES ( ";
    int NUM_LEN = 10;
    char snum[NUM_LEN]; // numero convertito a stringa
    int ACCURACY = 5; // quante cifre dopo la virgola devono essere portate a stringa
    
    
    	// compongo query
    /*
    	INSERT INTO Area ( id, low_x, up_x, low_y, up_y, low_z, up_z )
		VALUES ( :id, :low_x, :up_x, :low_y, :up_y, :low_z, :up_z );
    */
    reset_string(snum, NUM_LEN);
    my_itoa(area_id, snum, 0); // converto a stringa
    strcat(query, snum); // aggiungo "area_id" alla query
    strcat(query, ", ");
    
    my_ftoa(low_x, snum, ACCURACY); // converto a stringa
    strcat(query, snum); // aggiungo "low_x" alla query
    strcat(query, ", ");
    
    my_ftoa(up_x, snum, ACCURACY); // converto a stringa
    strcat(query, snum); // aggiungo "up_x" alla query
    strcat(query, ", ");
    
    my_ftoa(low_y, snum, ACCURACY); // converto a stringa
    strcat(query, snum); // aggiungo "low_y" alla query
    strcat(query, ", ");
    
    my_ftoa(up_y, snum, ACCURACY); // converto a stringa
    strcat(query, snum); // aggiungo "up_y" alla query
    strcat(query, ", ");
    
    my_ftoa(low_z, snum, ACCURACY); // converto a stringa
    strcat(query, snum); // aggiungo "low_z" alla query
    strcat(query, ", ");
    
    my_ftoa(up_z, snum, ACCURACY); // converto a stringa
    strcat(query, snum); // aggiungo "up_z" alla query
    
    strcat(query, " );");
    
    
    	// connetto
    conn = connect_to_DB();
 	
 		// eseguo query
 	res = PQexec(conn, query);
	rows = PQntuples(res);
	
	
		// pulisco
	PQclear(res);
	
 	
 		// chiudo connessione
 	PQfinish(conn);   
    
    
    	// fine
    return 0;
} /* create area */



/**
 HAS AREA BEEN VISITED
 
 Returns 1 if the area has been visited (by any drone) durig the last time span
*/
int has_area_been_visited(int area_id, float time_span) {
	
		// variabili
	float max_time = 0.0;
    int rows = 0; // righe risultato
    PGresult *res; // risultato query
    PGconn *conn; // connessione
    int Q_LEN = 1000; // lunghezza massima carattery query
    char query[1000] = "SELECT max(time) FROM History;";
    int NUM_LEN = 100;
    char snum[NUM_LEN]; // numero convertito a stringa
    int ACCURACY = 5; // quante cifre dopo la virgola devono essere portate a stringa
    

    	// compongo query
    // QUERY 1
    /* 
    		SELECT max(time)
    		FROM History;
    */
    	// connetto
    conn = connect_to_DB();
 	
 		// eseguo query
	res = PQexec(conn, query);
	rows = PQntuples(res); // number of rows found
    if (PQresultStatus(res) != PGRES_TUPLES_OK)
	{
		printf("No data retrieved\n");
		PQclear(res); // pulisci buffer
		return -1;
	} else {
		/*	// display
		for (int i = 0; i < rows; i++)
							//PQgetvalue(tabella, riga, colonna)
			printf("max_time = %s\n", PQgetvalue(res, i, 0); */
		
		
			// estraggo soluzione
		max_time = my_atof(PQgetvalue(res, 0, 0));
	}
    

    // QUERY 2
    /*    		
			SELECT *
			FROM History h, Area a
			WHERE a.id = :area_id
				AND h.time >= (  max_time - :time_span )
				AND h.pos_x >= a.low_x AND h.pos_x <= a.up_x
				AND h.pos_y >= a.low_y AND h.pos_y <= a.up_y
				AND h.pos_z >= a.low_z AND h.pos_z <= a.up_z
				AND h.drone_id > 0;

    */
    reset_string(query, Q_LEN);
    strcat(query, "SELECT * FROM History h, Area a WHERE a.id = ");
    reset_string(snum, NUM_LEN);
    my_itoa(area_id, snum, 0); // converto a stringa
    strcat(query, snum); // aggiungo "area_id" alla query
    strcat(query, " AND h.time >= ");
    
    my_ftoa( time_span, snum, ACCURACY); // converto a stringa
    strcat(query, snum); // aggiungo "(  max_time - :time_span )" alla query
    strcat(query, " AND h.pos_x >= a.low_x AND h.pos_x <= a.up_x AND h.pos_y >= a.low_y AND h.pos_y <= a.up_y AND h.pos_z >= a.low_z AND h.pos_z <= a.up_z AND h.drone_id > 0;");
    
 	
 		// eseguo query
	res = PQexec(conn, query);
	rows = PQntuples(res); // number of rows found
	
		// pulisco
	PQclear(res);
	
    	// chiudo la connessione
	PQfinish(conn);

		// fine
	if ( rows == 0 )
	{	// there is no drone that has been in the area in the last time span
		return 0;
	} else if ( rows > 0 ) {
		// there is at least a drone that has been in the area in the last time span
		return 1;
	}
} /* has area beeen visited */



/**
 UPDATE DRONE POS
 Agggiorna la posizione del drone
 
 Ritorna 0 se l'operazione è avvenuta correttamente
 
 */
int update_drone_pos(int drone_id, float time, float pos_x, float pos_y, float pos_z) {
    
    	// variabili
    int rows = 0; // righe risultato
    PGresult *res; // risultato query
    PGconn *conn; // connessione
    int Q_LEN = 150; // lunghezza massima carattery query
    char query[150] = "INSERT INTO History (drone_id, time, pos_x, pos_y, pos_z) VALUES ( ";
    int NUM_LEN = 32;
    char snum[NUM_LEN]; // numero convertito a stringa
    int ACCURACY = 5; // quante cifre dopo la virgola devono essere portate a stringa
    
    
    	// compongo query
    /*
    	INSERT INTO History (drone_id, time, pos_x, pos_y, pos_z)
		VALUES (:drone_id, :time, :pos_x, :pos_y, :pos_z);
    */
    reset_string(snum, NUM_LEN);
    my_itoa(drone_id, snum, 0); // converto a stringa
    strcat(query, snum); // aggiungo "drone_id" alla query
    strcat(query, ", ");
    my_ftoa(time, snum, ACCURACY); // converto a stringa
    strcat(query, snum); // aggiungo "time" alla query
    strcat(query, ", ");
    my_ftoa(pos_x, snum, ACCURACY); // converto a stringa
    strcat(query, snum); // aggiungo "pos_x" alla query
    strcat(query, ", ");
    my_ftoa(pos_y, snum, ACCURACY); // converto a stringa
    strcat(query, snum); // aggiungo "pos_y" alla query
    strcat(query, ", ");
    my_ftoa(pos_z, snum, ACCURACY); // converto a stringa
    strcat(query, snum); // aggiungo "pos_z" alla query
    strcat(query, " );");
    
    
    	// connetto
    conn = connect_to_DB();
 	
 		// eseguo query
 	res = PQexec(conn, query);
	rows = PQntuples(res);
	
	
		// pulisco
	PQclear(res);
	
 	
 		// chiudo connessione
 	PQfinish(conn);   
    
    
    	// fine
    return 0;
} /* update drone pos */



/**
 FLUSH HISTORY
 Resetta la cronologia delle posizioni dei droni
 
 Ritorna 0 se l'operazione è avvenuta correttamente
 
 */
int flush_history() {
    
    	// variabili
    int rows = 0; // righe risultato
    PGresult *res; // risultato query
    PGconn *conn; // connessione
    int Q_LEN = 150; // lunghezza massima carattery query
    char query[]  = "DELETE FROM History";// WHERE time <> 0";
    //char query2[] = "DELETE FROM History WHERE time <> ( SELECT max(time) FROM History )";
    
    
    	// connetto
    conn = connect_to_DB();
 	
 		// eseguo query
 	res = PQexec(conn, query);
	rows = PQntuples(res);
	
	
		// pulisco
	PQclear(res);
	
 	
 		// chiudo connessione
 	PQfinish(conn);  
    
    return 0;
} /* flush history */



/**
 GET DRONE POS
 Ritorna la posizione corrente del drone.
 
 In caso di errore ritorna NULL
 */
void get_drone_pos(int drone_id, float* pos) {
    
    	// variabili
    int rows = 0; // righe risultato
    PGresult *res; // risultato query
    PGconn *conn; // connessione
    int Q_LEN = 150; // lunghezza massima carattery query
    char query[150] = "SELECT pos_x, pos_y, pos_z FROM History WHERE drone_id = ";
    int NUM_LEN = 32;
    char snum[NUM_LEN]; // numero convertito a stringa
    
    
    	// compongo query
    /*
    	SELECT pos_x, pos_y, pos_z
		FROM History
		WHERE drone_id = 1
		AND time = 
			( SELECT max(time) FROM History )
    */
    //reset_string(query, Q_LEN);
    reset_string(snum, NUM_LEN);
    //strcpy(query, "SELECT pos_x, pos_y, pos_z FROM History WHERE drone = ");
    my_itoa(drone_id, snum, 0); // converto a stringa
    strcat(query, snum); // aggiungo "drone_id" alla query
    strcat(query, " AND time = ( SELECT max(time) FROM History );");
   
    	
    	// connetto
    conn = connect_to_DB();
    
    
    	// eseguo query
	res = PQexec(conn, query);
	rows = PQntuples(res);
	if (PQresultStatus(res) != PGRES_TUPLES_OK)
	{
		printf("No data retrieved\n");
		PQclear(res); // pulisci buffer
		pos[0] = -1.0;
	} else {		
			// estraggo soluzione
			   		   //PQgetvalue(tabella, riga, colonna)
		pos[0] = my_atof(PQgetvalue(res, 0, 0));
		pos[1] = my_atof(PQgetvalue(res, 0, 1));
		pos[2] = my_atof(PQgetvalue(res, 0, 2));
	}
	
		// pulisco
	PQclear(res);
	
    
    	// chiudo la connessione
	PQfinish(conn);
} /* get drone pos */



/**
 HAS DRONE BEEN IN AREA
 
 Checks whether the specific drone has been in the specific area durind the given time span
*/
int has_drone_been_in_area(int drone_id, int area_id, float time_span) {
	
	
		// variabili
	float max_time = 0.0;
    int rows = 0; // righe risultato
    PGresult *res; // risultato query
    PGconn *conn; // connessione
    int Q_LEN = 1000; // lunghezza massima carattery query
    char query[1000] = "SELECT max(time) FROM History;";
    int NUM_LEN = 32;
    char snum[NUM_LEN]; // numero convertito a stringa
    int ACCURACY = 5; // quante cifre dopo la virgola devono essere portate a stringa
   
    	// compongo query
    // QUERY 1
    /* 
    		SELECT max(time)
    		FROM History;
    */
    	// connetto
    conn = connect_to_DB();
 	
 		// eseguo query
	res = PQexec(conn, query);
	rows = PQntuples(res); // number of rows found
    if (PQresultStatus(res) != PGRES_TUPLES_OK)
	{
		printf("No data retrieved\n");
		PQclear(res); // pulisci buffer
		return -1;
	} else {		
			// estraggo soluzione
		max_time = my_atof(PQgetvalue(res, 0, 0));
	}
	
    
    
    // QUERY 2
    /*    		
			SELECT *
			FROM History h, Area a
			WHERE a.id = :area_id
				AND h.drone_id = :drone_id
				AND h.time >= :time_span
				AND h.pos_x >= a.low_x AND h.pos_x <= a.up_x
				AND h.pos_y >= a.low_y AND h.pos_y <= a.up_y
				AND h.pos_z >= a.low_z AND h.pos_z <= a.up_z;
    */
    reset_string(snum, NUM_LEN);
    reset_string(query, Q_LEN);
    strcat(query, "SELECT * FROM History h, Area a WHERE a.id = ");
    
    my_itoa(area_id, snum, 0); // converto a stringa
    strcat(query, snum); // aggiungo "area_id" alla query
    strcat(query, " AND h.drone_id = ");
    
    reset_string(snum, NUM_LEN);
    my_itoa(drone_id, snum, 0); // converto a stringa
    strcat(query, snum); // aggiungo "drone_id" alla query
    strcat(query, " AND h.time >= ");
    
    reset_string(snum, NUM_LEN);
    my_ftoa(time_span, snum, ACCURACY); // converto a stringa
    strcat(query, snum); // aggiungo ":time_span" alla query
    
    strcat(query, " AND h.pos_x >= a.low_x AND h.pos_x <= a.up_x AND h.pos_y >= a.low_y AND h.pos_y <= a.up_y AND h.pos_z >= a.low_z AND h.pos_z <= a.up_z;");
 	
 	
 		// eseguo query
	res = PQexec(conn, query);
	rows = PQntuples(res); // number of rows found

		// pulisco
	PQclear(res);
	
    	// chiudo la connessione
	PQfinish(conn);
	
	if ( rows == 0 )
	{	// the drone has NOT been in the area in the last time span
		return 0;
	} else if ( rows > 0 ) {
		// the drone HAS been in the area in the last time span
		return 1;
	}
} /* has drone been in area */


/**
 HAS AREA BEEN VISITED
 
 Returns 1 if the area has been visited (by any drone) durig the last time span
*/
int how_many_drones_in_area(int area_id, float time_span) {
	
		// variabili
	float max_time = 0.0;
    int rows = 0; // righe risultato
    PGresult *res; // risultato query
    PGconn *conn; // connessione
    int Q_LEN = 1000; // lunghezza massima carattery query
    char query[1000] = "SELECT max(time) FROM History;";
    int NUM_LEN = 100;
    char snum[NUM_LEN]; // numero convertito a stringa
    int ACCURACY = 5; // quante cifre dopo la virgola devono essere portate a stringa
    

    	// compongo query
    // QUERY 1
    /* 
    		SELECT max(time)
    		FROM History;
    */
    	// connetto
    conn = connect_to_DB();
 	
 		// eseguo query
	res = PQexec(conn, query);
	rows = PQntuples(res); // number of rows found
    if (PQresultStatus(res) != PGRES_TUPLES_OK)
	{
		printf("No data retrieved\n");
		PQclear(res); // pulisci buffer
		return -1;
	} else {
		/*	// display
		for (int i = 0; i < rows; i++)
							//PQgetvalue(tabella, riga, colonna)
			printf("max_time = %s\n", PQgetvalue(res, i, 0); */
		
		
			// estraggo soluzione
		max_time = my_atof(PQgetvalue(res, 0, 0));
	}
    

    // QUERY 2
    /*    		
			SELECT h.drone_id
			FROM History h, Area a
			WHERE a.id = :area_id
				AND h.time >= ( :time_span )
				AND h.pos_x >= a.low_x AND h.pos_x <= a.up_x
				AND h.pos_y >= a.low_y AND h.pos_y <= a.up_y
				AND h.pos_z >= a.low_z AND h.pos_z <= a.up_z
				AND h.drone_id > 0
			GROUP BY h.drone_id;

    */
    reset_string(query, Q_LEN);
    strcat(query, "SELECT h.drone_id FROM History h, Area a WHERE a.id = ");
    reset_string(snum, NUM_LEN);
    my_itoa(area_id, snum, 0); // converto a stringa
    strcat(query, snum); // aggiungo "area_id" alla query
    strcat(query, " AND h.time >= ");
    
    my_ftoa(time_span, snum, ACCURACY); // converto a stringa
    strcat(query, snum); // aggiungo "( :time_span )" alla query
    strcat(query, " AND h.pos_x >= a.low_x AND h.pos_x <= a.up_x AND h.pos_y >= a.low_y AND h.pos_y <= a.up_y AND h.pos_z >= a.low_z AND h.pos_z <= a.up_z AND h.drone_id > 0 GROUP BY h.drone_id;");
    
 	
 		// eseguo query
	res = PQexec(conn, query);
	rows = PQntuples(res); // number of rows found
	
		// pulisco
	PQclear(res);
	
    	// chiudo la connessione
	PQfinish(conn);

	return rows;
} /* how many drones in area */



/**
	MAIN
	
	just for testing purposes, do not call this function
*/
//
int main_test() {
//int main() {
	
	// testing here

	return 0;
} /* main */
