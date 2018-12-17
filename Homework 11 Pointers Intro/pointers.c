/*-----------------------------------------------------------------
| File: pointers.c                                                  |
| Description: This file holds all of the pointer methods that main |
| calls. 
| Author: Kyle Watson kpw44@nau.edu                                 |
 ------------------------------------------------------------------*/
#include "pointers.h"

void reorder( int* a, int* b, int* c )
{
	int temp; 

	if( *a < *b )
	{
		temp = *a; 
		*a = *b;
		*b = temp;
	}

	if( *a < *c )
	{
		temp = *a; 
		*a = *c;
		*c = temp;
	}

	if( *b < *c )
	{
		temp = *b; 
		*b = *c;
		*c = temp;
	}
}

int string_length(char* string_ptr)
{
    int length = 0;
    //Finds Length of a string
    while(*(string_ptr + length))
	{
		length++;
	}

    return length;
}

char* string_concat(char* first_string, char* second_string)
{
    int index_one=0,index_two=0;

    // Allocate memory for char pointer for string array
    char* str3_ptr = (char*) malloc( sizeof(char) *(string_length(first_string)
                                                        + string_length(second_string)));

    // Add first string to new string
    while(*(first_string+index_one))
    {
        *( str3_ptr+index_one ) = *( first_string+index_one );
        index_one++;
    }

    // Add second string to thrid string
    while(*(second_string+index_two))
    {
        *(str3_ptr+index_one) = *(second_string+index_two);
        index_one++, index_two++;
    }

    // Add null terminator to end of the thrid string
    *(str3_ptr+index_one) = '\0';

    return str3_ptr;
}

