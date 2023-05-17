/*
 Framework per il SERVER del sistema cyber-fisico cloud based in sviluppo
 
 
    Andrea Di Marco, 2022
*/


    // LIBRERIE
#include <stdio.h>
#include <stdlib.h>

#include <string.h>

#include <unistd.h>
#include <arpa/inet.h>

#include "DB-api.h"

//gcc -o server server-socket.c DB-api.c -lm -I/usr/include/postgresql -lpq -std=c99



    // FUNZIONI
/**
 * CLEAR BUFFER
 *
 * Resetta il buffer
*/
void clear_buffer(float* buffer, int BUFFER_SIZE)
{
	for(int i = 0; i < BUFFER_SIZE; i++)
    {
    	buffer[i] = 0.0;
    }
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
 *COMPUTE ANSWER TO CLIENT
 *
 * Calcola ed elabora la risposta da mandare al client
 */
void compute_answer_to_client(float* buffer, int BUFFER_SIZE)
{
        // leggo messaggio del client
    // variabili
    int     flag = (int)buffer[0];
    int     drone_id = (int)buffer[1];
    float   time = buffer[2];
    float   pos_x = buffer[3];
    float   pos_y = buffer[4];
    float   pos_z = buffer[5];
    int     ans_int = 0;
    float   new_pos[3] = {0.0, 0.0, 0.0};
    
    float low_x = buffer[2];
    float up_x = buffer[3];
    float low_y = buffer[4];
    float up_y = buffer[5];
    float low_z = buffer[6];
    float up_z = buffer[7];
    int area_id = (int)buffer[3];

		// for debugging reasons
    //printf("Received message with flag: [%d]\n", flag);
    
    // scelgo la risposta appropriata
    switch(flag)
    {
    
    	case 0:
		// setup database
			
				// computo risposta
			ans_int = db_setup();
			
				// pulisco buffer
			clear_buffer(buffer, BUFFER_SIZE);
			
				// scrivo messaggio
			buffer[0] = (float)ans_int;
			
		break;
		
    	
		case 1:
		// update drone position
			
				// computo risposta
			ans_int = update_drone_pos(drone_id, time, pos_x, pos_y, pos_z);
			
				// pulisco buffer
			clear_buffer(buffer, BUFFER_SIZE);
			
				// scrivo messaggio
			buffer[0] = (float)ans_int;
			
		break;
		
		
		case 2:
		// get drone position
		
				// computo risposta
			get_drone_pos(drone_id, new_pos);
			
				// pulisco buffer
			clear_buffer(buffer, BUFFER_SIZE);
			
				// scrivo messaggio
			buffer[0] = new_pos[0];
			buffer[1] = new_pos[1];
			buffer[2] = new_pos[2];
			
		break;
		
		
		case 3:
		// flush history
		
				// computo risposta
			ans_int = flush_history();
			
				// pulisco buffer
			clear_buffer(buffer, BUFFER_SIZE);
			
				// scrivo messaggio
			buffer[0] = (float)ans_int;
			
		break;
		
		
		case 4:
		// create drone
			
				// computo risposta
			ans_int = create_drone(drone_id);
			
				// pulisco buffer
			clear_buffer(buffer, BUFFER_SIZE);
			
				// scrivo messaggio
			buffer[0] = (float)ans_int;
			
		break;
		
		
		case 5:
		// create area
			
				// computo risposta
			ans_int = create_area(drone_id, low_x, up_x, low_y, up_y, low_z, up_z);
			
				// pulisco buffer
			clear_buffer(buffer, BUFFER_SIZE);
			
				// scrivo messaggio
			buffer[0] = (float)ans_int;
			
		break;
		
		
		case 6:
		// has area been visited
			
				// computo risposta
			ans_int = has_area_been_visited(drone_id, time);
			
				// pulisco buffer
			clear_buffer(buffer, BUFFER_SIZE);
			
				// scrivo messaggio
			buffer[0] = (float)ans_int;
			
		break;
		
		
		case 7:
		// has drone been in area
			
				// computo risposta
			ans_int = has_drone_been_in_area(drone_id, area_id, time);
			
				// pulisco buffer
			clear_buffer(buffer, BUFFER_SIZE);
			
				// scrivo messaggio
			buffer[0] = (float)ans_int;
			
		break;
		
		case 9:
		// How many drones have been in the area
		
			// computo risposta
			ans_int = how_many_drones_in_area(drone_id, time);
			
				// pulisco buffer
			clear_buffer(buffer, BUFFER_SIZE);
			
				// scrivo messaggio
			buffer[0] = (float)ans_int;
		break;
		
		
		default: // flag sbagliata
			
				// pulisco buffer
			clear_buffer(buffer, BUFFER_SIZE);
			
				// scrivo messaggio
			for (int i = 0; i < BUFFER_SIZE; i++)
				buffer[i] = -1.0; // comunico errore
	} 
} /* compute answer to client */



/**
 MAIN
 
 Attende richieste dal client, le elabora e invia una risposta.
 
 maggiori dettagli su:
 https://www.youtube.com/watch?v=io2G2yW1Qk8
 */
int main() {
        // constants
    char*  server_ip = "127.0.0.1";
    int    server_port = 5566;
    
    	// variables
    int                server_sock;
    int                client_sock;
    struct sockaddr_in server_addr;
    struct sockaddr_in client_addr;
    socklen_t          addr_size;
    int n;
    
    int    BUFFER_SIZE = 1024;
    char buffer[BUFFER_SIZE];
	
	int ARGS_SIZE = 8;
	float args[ARGS_SIZE];
	
	float last_flag = -1.0;
    
        // server
    server_sock = socket(AF_INET, SOCK_STREAM, 0);
    
    if (server_sock < 0)
    {
        perror("[-]Socket error");
        exit(1);
    }
    printf("[+]TCP server socket created.\n");
    
        // inizializzo
    memset(&server_addr, '\0', sizeof(server_addr));
    server_addr.sin_family = AF_INET;
    server_addr.sin_port = server_port;
    server_addr.sin_addr.s_addr = inet_addr(server_ip);
    
        // collego
    n = bind(server_sock, (struct sockaddr*)&server_addr, sizeof(server_addr));
    
    if (n < 0)
    {
        perror("[-]Bind error");
        exit(1);
    }
    printf("[+]Bind to the port number: %d\n", server_port);
    
        // attendo richieste
    listen(server_sock, 5); // '5' è il numero di volte che ascolta una risposta, listen '5' times
    printf("Server is listening...\n");
    
        // accetta connessioni
    while(1)
    {
        addr_size = sizeof(client_addr);
        client_sock = accept(server_sock, (struct sockaddr*)&client_addr, &addr_size);
        
            // se arrivo qui, il client è stato accettato
        printf("[+]Client connected.\n");
        
        while (1)
        {		// LEGGO DAL CLIENT (sempre lo stesso)
		    // pulisco buffer
		    clear_string(buffer, BUFFER_SIZE);
		    clear_buffer(args, ARGS_SIZE);
		    
		    // receive message
		    recv(client_sock, buffer, BUFFER_SIZE, 0);
		    
		    // read message
		    from_buffer_to_args(args, ARGS_SIZE, buffer);
		    	// special flag
			if ( args[0] == 8.0 )
		    {		// close connection
		    	close(client_sock);
		    	printf("[+]Client disconnected.\n");
		    	break;
		    }
		    if (last_flag == args[0] && last_flag == 0) 
		    {		// close connection
		    	last_flag = -1.0;
		    	close(client_sock);
		    	printf("[+]Client disconnected.\n");
		    	break;
		    }
		    last_flag = args[0];
		        // RISPONDO AL CLIENT
		    // compute answer
		    compute_answer_to_client(args, ARGS_SIZE);
		    
		    // clear buffer
		    clear_string(buffer, BUFFER_SIZE);
		    
		    // write onto buffer
		    from_args_to_buffer(args, ARGS_SIZE, buffer, BUFFER_SIZE);
		    
		    // invio
		    send(client_sock, buffer, BUFFER_SIZE, 0);
        }
        
        	// close all
        if ( args[0] == 8.0 )
		{		// close connection
	    	close(client_sock);
	    	printf("[+]Client disconnected.\n");
	    	break;
		}
    }
    
    close(server_sock);
    printf("[+]TCP server socket has been closed.\n\n");
    return 0;
} /* main */
