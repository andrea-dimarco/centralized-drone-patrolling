/*
 * Framework per il CLIENT del sistema cyber-fisico cloud based in sviluppo
 *
 *
 *  Andrea Di Marco, 2022
 * Realatore: Prof. Enrico Tronci
 */
 
//gcc -o test db-substitute.c -lm
#ifndef __DB_SUBSTITUTE_EXPLAINABLE
#define __DB_SUBSTITUTE_EXPLAINABLE

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
 * Writes to the files as the DB would save the entries.
 * There are 2 files, DB_HISTORY.txt and DB_AREA.txt
 */
void db_mockup(float* args, int ARGS_SIZE) {
			
		// variables
	float					   output[ARGS_SIZE];
	float					   tmp_array[ARGS_SIZE];
	int						   flag = 0;
	int                        counter = 0;
	int                        line_counter = 0;
	FILE*					   history_file;
	FILE*					   area_file;
	int                        drone_id = 0;
	int                        area_id = 0;
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
    char*					   history_file_name = "DB_HISTORY.txt";
	char*					   area_file_name = "DB_AREA.txt";
    
    
    
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
    		// reset files
    		history_file = fopen(history_file_name, "w");
    		fprintf(history_file, "drone_id time pos_x pos_y pos_z\n");
    		fclose(history_file);
    		
    		area_file = fopen(area_file_name, "w");
    		fprintf(area_file, "area_id low_x up_x low_y up_y low_z up_z\n");
    		fclose(area_file);
    		
    		// write output
    		clear_buffer(output, ARGS_SIZE);
    		output[0] = 0.0;
    	break;
    	
    	case 1: // update drone position
    		// upack args
    		drone_id = (int)args[1];
    		time    = args[2];
			pos_x   = args[3];
			pos_y   = args[4];
			pos_z   = args[5];
    		
    		// open file
    		history_file = fopen(history_file_name, "a");
    		if (history_file == NULL)
    		{
    			perror("Unable to open AREA file.\n");
    			exit(1);
    		}
    		// write area
    		fprintf(history_file, "%d %f %f %f %f\n", drone_id, time, pos_x, pos_y, pos_z);
    		// close file
    		fclose(history_file);
    		
    		// write output
    		clear_buffer(output, ARGS_SIZE);
    		output[0] = 0.0;
    	break;
    	
    	case 3: // flush history
    		// reset file
    		history_file = fopen(history_file_name, "w");
    		fprintf(history_file, "drone_id time pos_x pos_y pos_z\n");
    		fclose(history_file);
    		
    		// write output
    		clear_buffer(output, ARGS_SIZE);
    		output[0] = 0.0;
    	break;
    	
    	case 5: // create area
    		// upack args
    		area_id = (int)args[1];
    		low_x   = args[2];
			up_x    = args[3];
			low_y   = args[4];
			up_y    = args[5];
			low_z   = args[6];
			up_z    = args[7];
    		
    		// open file
    		area_file = fopen(area_file_name, "a");
    		if (area_file == NULL)
    		{
    			perror("Unable to open AREA file.\n");
    			exit(1);
    		}
    		// write area
    		fprintf(area_file, "%d %f %f %f %f %f %f\n", area_id, low_x, up_x, low_y, up_y, low_z, up_z);
    		// close file
    		fclose(area_file);
    		
    		// write output
    		clear_buffer(output, ARGS_SIZE);
    		output[0] = 0.0;
    	break;
    	
    	case 9: // how many drones are in the area
    		// upack args
    		area_id = (int)args[1];
    		time_span = args[2];
    		
    		// get area coordinates
    		area_file = fopen(area_file_name, "r");
    		if (area_file == NULL)
    		{
    			perror("Unable to open AREA file.\n");
    			exit(1);
    		}
    		line_counter = 0;
    		clear_buffer(tmp_array, ARGS_SIZE);
    			// read line by line
    		while( fgets(string, STRING_SIZE, area_file) )
    		{
				if( line_counter > 0)
				{		// read the line
					from_buffer_to_args(tmp_array, ARGS_SIZE, string);
						// compare it with the arguments
					if ( (int)tmp_array[0] == area_id ) // we found the area of interest, in the AREA file
					{		// assign
						// area_id low_x up_x low_y up_y low_z up_z
						low_x = tmp_array[1];
						up_x  = tmp_array[2];
						low_y = tmp_array[3];
						up_y  = tmp_array[4];
						low_z = tmp_array[5];
						up_z  = tmp_array[6];
						break; // no need to keep on reading the AREA file
					}
				} else { // header line
					// skip it
					line_counter++;
				}
				clear_string(string, STRING_SIZE);
			}
    		fclose(area_file);
    		
    		// line by line check how many drones are in it
			history_file = fopen(history_file_name, "r");
    		if (history_file == NULL)
    		{
    			perror("Unable to open HISTORY file.\n");
    			exit(1);
    		}
    		line_counter = 0;
    		counter = 0;
    		clear_buffer(tmp_array, ARGS_SIZE);
    		clear_string(string, STRING_SIZE);
    		for (int i = 0; i < N_AREAS; i++)
    			drone_already_visited[i] = 0;
    			// read line by line
    		while( fgets(string, STRING_SIZE, history_file) )
    		{
				if( line_counter > 0)
				{		// read the line
					from_buffer_to_args(tmp_array, ARGS_SIZE, string);
					
						// get values
					// drone_id time pos_x pos_y pos_z
					drone_id = (int)tmp_array[0];
					time = tmp_array[1];
					pos_x = tmp_array[2];
					pos_y = tmp_array[3];
					pos_z = tmp_array[4];
					
						// compare it with the arguments
					if ( (time >= time_span)
							&& (pos_x > low_x) && (pos_x < up_x)
							&& (pos_y > low_y) && (pos_y < up_y)
							&& (pos_z > low_z) && (pos_z < up_z)
							&& (drone_already_visited[drone_id] == 0) )
					{
						counter++; 
						drone_already_visited[drone_id] = 1;
						//printf("Drone %d found in area %d\n", drone_id, area_id);
					}
				} else { // header line
					// skip it
					line_counter++;
				}
				clear_buffer(tmp_array, ARGS_SIZE);
				clear_string(string, STRING_SIZE);
			}
    		fclose(area_file);
  
    		// write output
    		clear_buffer(output, ARGS_SIZE);
    		output[0] = (float)counter;
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
     // 6 = has area been visited (deprecated)
     // 7 = has drone been in area (deprecated)
     // 8 = turn off
     // 9 = how many drones are in the area
    
    // write message
    args[0] = 9.0;
    args[1] = 4.0;
    args[2] = 0.0;
    args[3] = 0.0;
    args[4] = 0.0;
    args[5] = 0.0;
    args[6] = 0.0;
    args[7] = 0.0;
	
	db_mockup(args, ARGS_SIZE);
	printf("Server said: %f\n", args[0]);
	
	return 0;
}*/ /* main */
