/*
 * Framework per il CLIENT del sistema cyber-fisico cloud based in sviluppo
 *
 *
 *  Andrea Di Marco, 2022
 * Realatore: Prof. Enrico Tronci
 */
 
//gcc -o test db-substitute-fast.c -lm
#ifndef __DB_SUBSTITUTE_FAST
#define __DB_SUBSTITUTE_FAST

    // LIBRERIE
#include <stdio.h>
#include <stdlib.h>

#include <string.h>
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
 * CLEAR BUFFER
 *
 * Fills the buffer with all zeroes.
 */
void clear_buffer(float* buffer, int BUFFER_SIZE)
{
	for(int i = 0; i < BUFFER_SIZE; i++)
    	buffer[i] = 0.0;

} /* clear buffer */



/**
 * ACCESS TABLE
 *
 */
float access_table(float* table, int n_features, int row, int feature)
{
	return table[ (row*n_features) + feature ];
} /* access table */



/**
 * WRITE ON TABLE
 *
 */
void write_on_table(float* table, int n_features, int row, int feature, float value)
{
	table[ (row*n_features) + feature ] = value;
} /* write in table */



/**
 *	ADD ROW
 *
 */
void* add_row(float** table, int* rows, int n_features)
{

	if ( *table == NULL )
	{
		printf("Invalid  argument.\n");
		exit(1);
	}

		// initialize
	int    n_rows = (*rows) + 1;
	int    n = (n_rows*n_features) + n_features;
	*table = realloc(*table, n*sizeof(float));
	*rows = n_rows;
	if ( table == NULL )
	{
		printf("Error expanding table.\n");
		exit(1);
	}
	
} /* add row */



/**
 *	PRINT TABLE
 *
 */
void print_table(float* table, int n_rows, int n_features)
{
	for (int row = 0; row < n_rows; row++)
	{
		for (int feature = 0; feature < n_features; feature++)
		{
			printf(" %.2f |", access_table(table, n_features, row, feature) );
		}
		printf("\n");
	}
	printf("\n");
} /* print table */



/**
 * CLEAR STRING
 *
 * Fills the buffer with all terminating characters.
 */
void clear_string(char* buffer, int BUFFER_SIZE)
{
	for(int i = 0; i < BUFFER_SIZE; i++)
    	buffer[i] = '\0';

} /* clear string */



/**
 * FROM ARGS TO BUFFER
 *
 * Takes a float array and converts it into a single string.
 */
void from_args_to_buffer(float* args, int ARGS_SIZE, char* buffer, int BUFFER_SIZE)
{
		// variables
	int ARG_LEN = 10+1+1;
	char arg2str[ARG_LEN];
	
		// to be on the safe side
	clear_string(arg2str, ARG_LEN);
	clear_string(buffer, BUFFER_SIZE);
	
		// do magic
	for(int arg = 0; arg < ARGS_SIZE-1; arg++)
	{		// convert arg to string
    	my_ftoa(args[arg], arg2str, 0);
    		// append  arg to buffer
    	strcat(buffer, arg2str);
    		// insert separation character
    	strcat(buffer, " ");
    }	// convert last arg to string
    my_ftoa(args[ARGS_SIZE-1], arg2str, 0);
    	// append last arg to buffer
    strcat(buffer, arg2str);
    	// insert termination character
    strcat(buffer, "\0");

} /* from args to buffer */



/**
 * FROM BUFFER TO ARGS
 *
 * Takes a string and unpacks it into an array of arguments.
 */
void from_buffer_to_args(float* args, int ARGS_SIZE, char* buffer)
{		// variables
	int ARG_LEN = 10+1+1;
	char* arg_str;
	float arg_f = 0.0;
	int i = 0;
	
		// to be on the safe side
	clear_buffer(args, ARGS_SIZE);
	
	// unpack buffer into different arguments
	arg_str = strtok(buffer, " ");
	while ( arg_str != NULL && i < ARGS_SIZE )
	{
			// cast to float
		arg_f = my_atof(arg_str);
			// insert argument into array
		args[i] = arg_f;
			// get next word
		arg_str = strtok(NULL, " ");
			// update argument index
		i++;
	}
} /* from buffer to args */



/**
 * DATABASE MOCKUP
 *
 * Writes to the tables as the DB would save the entries.
 * There are 2 tables, HISTORY and AREAS
 */
void db_mockup(float* args, int ARGS_SIZE) {
			
		// variables
	float					   output[ARGS_SIZE];
	float					   tmp_array[ARGS_SIZE];
	int						   flag = 0;
	int                        counter = 0;
	int                        line_counter = 0;
	float                      drone_id = 0;
	float                      area_id = 0;
	float                      time_span = 0.0;
	float                      time = 0.0;
	float                      pos_x = 0.0;
	float                      pos_y = 0.0;
	float                      pos_z = 0.0;
	float                      low_x = 0.0;
	float                      up_x = 0.0;
	float                      low_y = 0.0;
	float                      up_y = 0.0;
	float                      low_z = 0.0;
	float                      up_z = 0.0;
	int						   N_AREAS = 8;
	int						   drone_already_visited[N_AREAS];
	
		
    	// constants
    int						   STRING_SIZE = 1024;
    char					   string[STRING_SIZE];
	
		// database
	int          n_features_areas = 7; // | area_id | low_x | up_x | low_y | up_y | low_z | up_z |
	static int   n_rows_areas;
	int          n_features_history = 5; // | drone_id | time | pos_x | pos_y | pos_z |
	static int   n_rows_history;
	static float *AREAS;
	static float *HISTORY;
	static int   init_done = 0;
	
	
	if (init_done == 1)
    {
    	//init_done++;
    	//printf("AREAS (rows: %d, columns: %d):\n", n_rows_areas, n_features_areas);
    	//print_table(AREAS, n_rows_areas, n_features_areas);
    	//printf("HISTORY (rows: %d, columns: %d):\n", n_rows_history, n_features_history);
    	//print_table(HISTORY, n_rows_history, n_features_history);
    }
    if (init_done == 0)
	{
		n_rows_areas = 0;
		n_rows_history = 0;
		AREAS = (float*)malloc(n_rows_areas*sizeof(float));
		HISTORY = (float*)malloc(n_rows_history*sizeof(float));
		if (AREAS == NULL || HISTORY == NULL)
		{
			printf("Arrays not allocated\n");
			exit(1);
		}
		init_done = 1;
	}
    
        // write message
    // understand what the system wants
    /*
     * 00 = setup DB
     * 01 = update drone position
     * 02 = get drone position (unused)
     * 03 = flush history
     * 04 = create drone
     * 05 = create area
     * 06 = has area been visited (deprecated)
     * 07 = has drone been in area (deprecated)
     * 08 = turn off
     * 09 = how many drones are in the area
     * 10 = disconnect
     */
    flag = (int)args[0];
    clear_string(string, STRING_SIZE);
    for (int i = 0; i < N_AREAS; i++)
    	drone_already_visited[i] = 0;
    switch (flag)
    {
    	case 0: // setup DB
    		if (init_done == 0)
			{
				n_rows_areas = 0;
				n_rows_history = 0;
				AREAS = (float*)malloc(n_rows_areas*sizeof(float));
				HISTORY = (float*)malloc(n_rows_history*sizeof(float));
				if (AREAS == NULL || HISTORY == NULL)
				{
					printf("Arrays not allocated\n");
					exit(1);
				}
				init_done = 1;
			}
    		
    	break;
    	
    	case 1: // update drone position
    		// upack args
    		drone_id = args[1];
    		time     = args[2];
			pos_x    = args[3];
			pos_y    = args[4];
			pos_z    = args[5];
    		
			// expand table
			add_row(&HISTORY, &n_rows_history, n_features_history);
    		// write area
    		write_on_table(HISTORY, n_features_history, n_rows_history-1, 0, drone_id);
    		write_on_table(HISTORY, n_features_history, n_rows_history-1, 1, time);
    		write_on_table(HISTORY, n_features_history, n_rows_history-1, 2, pos_x);
    		write_on_table(HISTORY, n_features_history, n_rows_history-1, 3, pos_y);
    		write_on_table(HISTORY, n_features_history, n_rows_history-1, 4, pos_z);
    		
    		// write output
    		clear_buffer(output, ARGS_SIZE);
    		output[0] = 0.0;
    	break;
    	
    	case 3: // flush history
    		// reset tables
    		
    		
    	break;
    	
    	case 5: // create area
    		// upack args
    		area_id = args[1];
    		low_x   = args[2];
			up_x    = args[3];
			low_y   = args[4];
			up_y    = args[5];
			low_z   = args[6];
			up_z    = args[7];
    		
    		// expand table
			add_row(&AREAS, &n_rows_areas, n_features_areas);
    		// write area
    		write_on_table(AREAS, n_features_areas, n_rows_areas-1, 0, area_id);
    		write_on_table(AREAS, n_features_areas, n_rows_areas-1, 1, low_x);
    		write_on_table(AREAS, n_features_areas, n_rows_areas-1, 2, up_x);
    		write_on_table(AREAS, n_features_areas, n_rows_areas-1, 3, low_y);
    		write_on_table(AREAS, n_features_areas, n_rows_areas-1, 4, up_y);
    		write_on_table(AREAS, n_features_areas, n_rows_areas-1, 5, low_z);
    		write_on_table(AREAS, n_features_areas, n_rows_areas-1, 6, up_z);
    		
    		// write output
    		clear_buffer(output, ARGS_SIZE);
    		output[0] = 0.0;
    	break;
    	
    	case 9: // how many drones are in the area
    		// upack args
    		area_id = args[1];
    		time_span = args[2];
    		
    		// get area coordinates
    		for (int row = 0; row < n_rows_areas; row++)
    		{
    			if ( access_table(AREAS, n_features_areas, row, 0) == area_id )
    			{
    				low_x = access_table(AREAS, n_features_areas, row, 1);
    				up_x  = access_table(AREAS, n_features_areas, row, 2);
    				low_y = access_table(AREAS, n_features_areas, row, 3);
    				up_y  = access_table(AREAS, n_features_areas, row, 4);
    				low_z = access_table(AREAS, n_features_areas, row, 5);
    				up_z  = access_table(AREAS, n_features_areas, row, 6);
    				break;
    			}
    		}
    		
    		// line by line check how many drones are in it
    		counter = 0;
    		clear_buffer(tmp_array, ARGS_SIZE);
    		clear_string(string, STRING_SIZE);
    		for (int i = 0; i < N_AREAS; i++)
    			drone_already_visited[i] = 0;
    			// read line by line
    		for (int row = 0; row < n_rows_history; row++) 
    		{	
					// get values
				// drone_id time pos_x pos_y pos_z
				drone_id = access_table(HISTORY, n_features_history, row, 0);
				time     = access_table(HISTORY, n_features_history, row, 1);;
				pos_x    = access_table(HISTORY, n_features_history, row, 2);;
				pos_y    = access_table(HISTORY, n_features_history, row, 3);;
				pos_z    = access_table(HISTORY, n_features_history, row, 4);;
				
					// compare it with the arguments
				if ( (time >= time_span)
						&& (pos_x > low_x) && (pos_x < up_x)
						&& (pos_y > low_y) && (pos_y < up_y)
						&& (pos_z > low_z) && (pos_z < up_z)
						&& (drone_already_visited[(int)drone_id] == 0) )
				{
					counter++; 
					drone_already_visited[(int)drone_id] = 1;
					//printf("Drone %d found in area %d\n", drone_id, area_id);
				}
		}
  
    	// write output
    	clear_buffer(output, ARGS_SIZE);
   		output[0] = (float)counter;
    	break;
    	
    	case 10: // disconnect
    	
    		// clear memory
    		free(AREAS);
    		free(HISTORY);
    	
    		// write output
    		clear_buffer(output, ARGS_SIZE);
    		output[0] = 0.0;
    		
    	break;
    	
    	default: // unecessary actions
    		// flag = { 2, 3, 4, 6, 7, 8 }
    		clear_buffer(output, ARGS_SIZE);
    		for (int i = 0; i < ARGS_SIZE; i++)
				output[i] = 0.0;
    }
    
    // return answer
    	// clear the buffer
    clear_buffer(args, ARGS_SIZE);
		// write output in args array
	for (int i = 0; i < ARGS_SIZE; i++)
		args[i] = output[i];
} /* db mockup */



/**
 * SETUP DB
 *
 * Connects to the server and it prompts it to setup the DB for the simulation.
 * This message has flag: 0
 */
float setup_db()
{
    	// variables
    int                 BUFFER_SIZE = 8;
    float               buffer[BUFFER_SIZE];
        
        // MESSAGE
    // clear buffer
    clear_buffer(buffer, BUFFER_SIZE);
    
    // write message
    	// query flag
    buffer[0] = 0.0;
    
    	// send to server
    db_mockup(buffer, BUFFER_SIZE);
    
    	// end
    return buffer[0];
    
} /* setup db */ 



/**
 * UPDATE DRONE POSITION
 *
 * Updates the Hiistory table with the position {pos_x, pos_y, pos_z} and time {time} for the drone {drone_id}
 * This message has flag: 1
 */
float update_drone_pos(int drone_id, float time, float pos_x, float pos_y,float pos_z)
{	
    	// variables
    int                 BUFFER_SIZE = 8;
    float               buffer[BUFFER_SIZE];
    

        // MESSAGE
    // clear the buffer
    clear_buffer(buffer, BUFFER_SIZE);
    
    // write message
    	// query flag
    buffer[0] = 1.0;
    	
    	// put arguments inside the buffer
    buffer[1] = (float)drone_id;
    buffer[2] = time;
    buffer[3] = pos_x;
    buffer[4] = pos_y;
    buffer[5] = pos_z;
    
    	// send
    db_mockup(buffer, BUFFER_SIZE);
    
    	// end
    return buffer[0];
    
} /* update drone position */



/**
 * GET DRONE POSITION 01
 *
 * This function asks for the {x} component of the most recent drone position.
 * I had to make three separare functions because the interface with Modelica won't allow me to pass an array as an output.
 * This message has flag: 02
 */
float get_drone_pos_1(int drone_id)
{   
    	// variabili
    int                 BUFFER_SIZE = 8;
    float               buffer[BUFFER_SIZE];
    
        // MESSAGE
    // clear the buffer
    clear_buffer(buffer, BUFFER_SIZE);
    
    // write message
    	// query flag
    buffer[0] = 2.0;
    	
    	// put arguments inside the buffer
    buffer[1] = (float)drone_id;
    
    	// send
    db_mockup(buffer, BUFFER_SIZE);
    
    	// end
    return buffer[0];
    
} /* get drone position 01 */



/**
 * GET DRONE POSITION 02
 *
 * This function asks for the {y} component of the most recent drone position.
 * I had to make three separare functions because the interface with Modelica won't allow me to pass an array as an output.
 * This message has flag: 02
 */
float get_drone_pos_2(int drone_id)
{   
    	// variabili
    int                 BUFFER_SIZE = 8;
    float               buffer[BUFFER_SIZE];
    
        // MESSAGE
    // clear the buffer
    clear_buffer(buffer, BUFFER_SIZE);
    
    // write message
    	// query flag
    buffer[0] = 2.0;
    	
    	// put arguments inside the buffer
    buffer[1] = (float)drone_id;
    
    	// send
    db_mockup(buffer, BUFFER_SIZE);
    
    	// end
    return buffer[1];
    
} /* get drone position 02 */



/**
 * GET DRONE POSITION 03
 *
 * This function asks for the {z} component of the most recent drone position.
 * I had to make three separare functions because the interface with Modelica won't allow me to pass an array as an output.
 * This message has flag: 02
 */
float get_drone_pos_3(int drone_id)
{   
    	// variabili
    int                 BUFFER_SIZE = 8;
    float               buffer[BUFFER_SIZE];
    
        // MESSAGE
    // clear the buffer
    clear_buffer(buffer, BUFFER_SIZE);
    
    // write message
    	// query flag
    buffer[0] = 2.0;
    	
    	// put arguments inside the buffer
    buffer[1] = (float)drone_id;
    
    	// send
    db_mockup(buffer, BUFFER_SIZE);
    
    	// end
    return buffer[2];
    
} /* get drone position 03 */



/**
 * FLUSH HISTORY	
 *
 * Deletes all the entries in the History table of the DB
 * This message has flag: 03
 */
float flush_history()
{
    	// variables
    int                 BUFFER_SIZE = 8;
    float               buffer[BUFFER_SIZE];
    
        // MESSAGE
    // clear the buffer
    clear_buffer(buffer, BUFFER_SIZE);
    
    // write message
    	// query flag
    buffer[0] = 3.0;
    
    	// send
    db_mockup(buffer, BUFFER_SIZE);
    
    	// end
    return buffer[0];
    
} /* flush history */ 



/**
 * CREATE DRONE
 *
 * Inserts the drone {drone_id} in the table Drone of the DB
 * This message has flag: 04
 */
float create_drone(int drone_id)
{    
    	// variables
    int                 BUFFER_SIZE = 8;
    float               buffer[BUFFER_SIZE];
    
        // MESSAGE
    // clear buffer
    clear_buffer(buffer, BUFFER_SIZE);
    
    // write message
    	// query flag
    buffer[0] = 4.0;
    	
    	// insert arguments in buffer
    buffer[1] = (float)drone_id;
    
    	// send
    db_mockup(buffer, BUFFER_SIZE);
    
    	// end
    return buffer[0];
    
} /* create drone */ 



/**
 * CREATE AREA
 *
 * Inserts a new enntry in the table Area of the DB
 * This message has flag: 05
 */
float create_area(int id, float low_x, float up_x, float low_y, float up_y, float low_z, float up_z)
{    
    	// variables
    int                 BUFFER_SIZE = 8;
    float               buffer[BUFFER_SIZE];
    
        // MESSAGE
    // clear buffer
    clear_buffer(buffer, BUFFER_SIZE);
    
    // write message
    	// query flag
    buffer[0] = 5.0;
    	
    	// insert arguments in buffer
    buffer[1] = (float)id;
    buffer[2] = low_x;
    buffer[3] = up_x;
    buffer[4] = low_y;
    buffer[5] = up_y;
    buffer[6] = low_z;
    buffer[7] = up_z;
    
    	// send
    db_mockup(buffer, BUFFER_SIZE);
    
    	// end
    return buffer[0];
    
} /* create area */ 



/**
 * HAS AREA BEEN VISITED
 *
 * Return 1.0 if the area {id} has been visited since {time_span}.
 * Return 0.0 otherwise.
 * This message has flag: 06
 */
float has_area_been_visited(int id, float time_span)
{    
    	// variables
    int                 BUFFER_SIZE = 8;
    float               buffer[BUFFER_SIZE];
 	
    	// MESSAGE
    // clear buffer
    clear_buffer(buffer, BUFFER_SIZE);
    
    // write message
    	// query flag
    buffer[0] = 6.0;
    	
    	// insert arguments in buffer
    buffer[1] = (float)id;
    buffer[2] = time_span;
    
    	// send 
    db_mockup(buffer, BUFFER_SIZE);
    
    	// end
    return buffer[0];
    
} /* has area been visited */ 



/**
 * HAS DRONE BEEN IN AREA
 *
 * Returns 1.0 if the drone {drone_id} has visited area {area_id} since {time_span} from the beginning of the simulation
 * This message has flag: 07
 */
float has_drone_been_in_area(int drone_id, int area_id, float time_span)
{   
    	// variables
	int                 BUFFER_SIZE = 8;
    float               buffer[BUFFER_SIZE];
    
		// MESSAGE
    // clear buffer
    clear_buffer(buffer, BUFFER_SIZE);
    
    // write msg
    	// function's flag
    buffer[0] = 7.0;
    	
    	// insert arguments in buffer
    buffer[1] = (float)drone_id;	//
    buffer[2] = time_span;			// order differs for aesthetic reasons
    buffer[3] = (float)area_id;		//
    
    	// send to server
    db_mockup(buffer, BUFFER_SIZE);
    
    	// end
    return buffer[0];
    
} /* has drone been in area */



/**
 * TURN OFF
 *
 * Tells the server to shut down
 * This message has flag: 08
 */
float turn_off()
{
    	// variabili
    int                 BUFFER_SIZE = 8;
    float               buffer[BUFFER_SIZE];
    
		// MESSAGE
    // pulisco buffer
    clear_buffer(buffer, BUFFER_SIZE);
    
    // write message
    	// query flag
    buffer[0] = 8.0;
    
    	// send
    db_mockup(buffer, BUFFER_SIZE);
    
    	// fine
    return 0.0;
    
} /* turn off */ 



/**
 * HOW MANY DRONES IN AREA
 *
 * Returns the Integer number of drone that have visited the area {area_id} since {time_span}.
 * This message has flag: 09
 */
float how_many_drones_in_area(int area_id, float time_span)
{    
    	// variables
    int                 BUFFER_SIZE = 8;
    float               buffer[BUFFER_SIZE];
 	
    	// MESSAGE
    // clear buffer
    clear_buffer(buffer, BUFFER_SIZE);
    
    // write message
    	// query flag
    buffer[0] = 9.0;
    	
    	// insert arguments in buffer
    buffer[1] = (float)area_id;
    buffer[2] = time_span;
    
    	// send 
    db_mockup(buffer, BUFFER_SIZE);
    
    	// end
    return (int)buffer[0];
    
} /* how many drones in area */ 



/**
 * DISCONNECT FROM DB
 * 
 * Disconnects the client from the server.
 * This message has flag: 10
 */
float disconnect_from_db()
{
    	// variables
    int                 BUFFER_SIZE = 8;
    float               buffer[BUFFER_SIZE];
        
        // MESSAGE
    // clear buffer
    clear_buffer(buffer, BUFFER_SIZE);
    
    // write message
    	// query flag
    buffer[0] = 10.0;
    
    	// send to server
    db_mockup(buffer, BUFFER_SIZE);
    
    	// end
    return buffer[0];
    
} /* disconnect from DB */ 

#endif


/**
 * MAIN
 *
 */
 /*
int main()
{
		// variables 
	int                 ARGS_SIZE = 8;
    float               args[ARGS_SIZE];
    
    int					BUFFER_SIZE = 1024;
    char				buffer[BUFFER_SIZE];
    
		// MESSAGE
    // clear buffer
    clear_buffer(args, ARGS_SIZE);
    clear_string(buffer, BUFFER_SIZE);
    
    // FLAGS
     // 0 = setup DB
     // 1 = update drone position
     // 2 = get drone position (unused)
     // 3 = flush history
     // 4 = create drone
     // 5 = create area
     // 7 = has drone been in area (deprecated)
     // 8 = turn off
     // 9 = how many drones are in the area
     
     for (int trial = 0; trial < 200; trial ++)
     {
		for (int i = 0; i < 10; i++)
		{
			args[0] = (float)i;
			args[1] = (float)i;
			args[2] = (float)i;
			args[3] = (float)i;
			args[4] = (float)i;
			args[5] = (float)i;
			args[6] = (float)i;
			args[7] = (float)i;
			
			db_mockup(args, ARGS_SIZE);
		}
	}
    
	return 0;
}*/ /* main */
