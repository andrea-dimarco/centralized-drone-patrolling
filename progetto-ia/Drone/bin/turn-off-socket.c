/*
 Framework per il CLIENT del sistema cyber-fisico cloud based in sviluppo
 

    Andrea Di Marco, 2022
 */

#ifndef __TURN_OFF
#define __TURN_OFF


    // LIBRERIE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>


/**
	CLEAR BUFFER
	
	Resetta il buffer
*/
static void clear_buffer_8(float* buffer, int BUFFER_SIZE)
{
	for(int i = 0; i < BUFFER_SIZE; i++)
    {
    	buffer[i] = 0.0;
    }
} /* clear buffer */


/**
	COMPUTE MESSAGE TO SERVER
	
	Formatta l'input affinché possa essere inviato al server
*/
void compute_msg_8_to_server(float* buffer, int BUFFER_SIZE)
{
	// pulisco buffer
    clear_buffer_8(buffer, BUFFER_SIZE);
    
    // scrivo messaggio
    	// flag operazione
    buffer[0] = 8.0;
    
} /* compute message to server */



/**
 MAIN
 
 Si connette al server e chiama la funzione ask_to_server per inviargli un messaggio ed attendere la risposta
 
 maggiori dettagli su:
 https://www.youtube.com/watch?v=io2G2yW1Qk8
 */
float turn_off()
{
    
    	// variabili
    int                 BUFFER_SIZE = 8;
    char*               server_ip = "127.0.0.1";
    int                 server_port = 5566;
    
    int                 server_sock;
    struct sockaddr_in  server_addr;
    socklen_t           addr_size;
    
    float               buffer[BUFFER_SIZE];
    int                 n;
    

        // server
    server_sock = socket(AF_INET, SOCK_STREAM, 0);
    
    if (server_sock < 0)
    {
        perror("[-]Socket error");
        return 1.0;
    }
    
        // inizializzo
    memset(&server_addr, '\0', sizeof(server_addr));
    server_addr.sin_family = AF_INET;
    server_addr.sin_port = server_port;
    server_addr.sin_addr.s_addr = inet_addr(server_ip);
    
        // connetto al server
    connect(server_sock, (struct sockaddr*)&server_addr, sizeof(server_addr));
    
        // scrivo messaggio
    compute_msg_8_to_server(buffer, BUFFER_SIZE);
    
    	// invio
    send(server_sock, buffer, sizeof(buffer), 0);
    
    	// fine
    return 0.0;
    
} /* update drone position */ 

#endif
