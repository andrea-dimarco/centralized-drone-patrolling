/*
 * Framework per il CLIENT del sistema cyber-fisico cloud based in sviluppo
 *
 *
 *  Andrea Di Marco, 2022
 * Realatore: Prof. Enrico Tronci
 */
 
//gcc -o client client.socket.c -lm
#ifndef __CLIENT_SOCKET
#define __CLIENT_SOCKET

    // LIBRERIE
#include <stdio.h>
#include <stdlib.h>

#include <unistd.h>
#include <arpa/inet.h>

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
 * SEND 2 SERVER
 *
 * Establishes a connection to the server, then send it the message inside the buffer and returns the answer from the server.
 */
void send2server(float* args, int ARGS_SIZE) {
			
		// static variables
	static int                 server_sock;
    static struct sockaddr_in  server_addr;
    static socklen_t           addr_size;
    
    static short 			   connection_online = 0;
	
    	// constants
    char*               	   server_ip = "127.0.0.1";
    int                	       server_port = 5566;
    int						   BUFFER_SIZE = 1024;
    char					   buffer[BUFFER_SIZE];
    

        // setup socket
    if ( connection_online == 0 )
    {
		server_sock = socket(AF_INET, SOCK_STREAM, 0);
		
		if (server_sock < 0)
		{
		    perror("[-]Socket error");
		    exit(1);
		}
		
		    // initialize
		memset(&server_addr, '\0', sizeof(server_addr));
		server_addr.sin_family = AF_INET;
		server_addr.sin_port = server_port;
		server_addr.sin_addr.s_addr = inet_addr(server_ip);
	}
		// connnection to server
	if ( connection_online == 0 )
    {	
		connect(server_sock, (struct sockaddr*)&server_addr, sizeof(server_addr));
		
		connection_online = 1;
    }
    
    
        // write message
    from_args_to_buffer(args, ARGS_SIZE, buffer, BUFFER_SIZE);
    
    	// send
    send(server_sock, buffer, BUFFER_SIZE, 0);
    
    // receive answer
    	// clear the buffer
    clear_string(buffer, BUFFER_SIZE);
		// receive
	recv(server_sock, buffer, BUFFER_SIZE, 0);
		// translate
	from_buffer_to_args(args, ARGS_SIZE, buffer);
} /* send to server */



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
    send2server(buffer, BUFFER_SIZE);
    
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
    send2server(buffer, BUFFER_SIZE);
    
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
    send2server(buffer, BUFFER_SIZE);
    
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
    send2server(buffer, BUFFER_SIZE);
    
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
    send2server(buffer, BUFFER_SIZE);
    
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
    send2server(buffer, BUFFER_SIZE);
    
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
    send2server(buffer, BUFFER_SIZE);
    
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
    send2server(buffer, BUFFER_SIZE);
    
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
    send2server(buffer, BUFFER_SIZE);
    
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
    send2server(buffer, BUFFER_SIZE);
    
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
    send2server(buffer, BUFFER_SIZE);
    
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
    send2server(buffer, BUFFER_SIZE);
    
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
    send2server(buffer, BUFFER_SIZE);
    
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
    
    // write message
    float msg = 69.0;
    
    args[0] = msg;
    args[1] = msg;
    args[2] = msg;
    args[3] = msg;
    args[4] = msg;
    args[5] = msg;
    args[6] = msg;
    args[7] = msg;
	
	send2server(args, ARGS_SIZE);
	printf("Server said: %f %f %f %f %f %f %f %f\n", args[0], args[1], args[2], args[3], args[4], args[5], args[6], args[7]);
	
	return 0;
}*/ /* mainn */
