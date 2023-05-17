/*
    Andrea Di Marco, 2022
*/

//gcc -o DB-api DB-api.c

    // LIBRERIE
#pragma once    

#include <stdio.h>
#include <stdlib.h>
#include <string.h>



    // FUNZIONI
int db_setup();
int update_drone_pos(int drone_id, float time, float pos_x, float pos_y, float pos_z);
int flush_history();
void get_drone_pos(int drone_id, float* pos);
int create_drone(int drone_id);
int create_area(int area_id, float low_x, float up_x, float low_y, float up_y, float low_z, float up_z);
int has_area_been_visited(int area_id, float time_span);
int has_drone_been_in_area(int drone_id, int area_id, float time_span);
int how_many_drones_in_area(int area_id, float time_span);

	// UTILITIES
void reverse(char* str, int len);
int my_itoa(int x, char str[], int d);
void my_ftoa(float n, char* res, int afterpoint);
float my_atof(char *string);
int my_atoi(char *str);
