#ifndef POITNER_H
#define POINTER_H

/*-----------------------------------------------------------------
| File: pointers.h                                                  |
| Description: This file is used to hold all of the function        |
| prototypes so I can use them in my main class file.               |
| Author: Kyle Watson kpw44@nau.edu                                 |
 ------------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>

//--------function prototypes--------
void reorder( int* a, int* b, int* c );
int string_length(char* string_ptr);
char* string_concat(char* first_string, char* second_string);

#endif   //POINTER_H
