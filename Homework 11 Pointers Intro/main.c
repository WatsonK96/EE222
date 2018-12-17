/*-----------------------------------------------------------------
| File: file_name.c                                                 |
| Description: description of what file is going to do              |
| Author: Kyle Watson kpw44@nau.edu                                 |
 ------------------------------------------------------------------*/
#include <stdio.h>
#include "pointers.h"

int main() 
{

	int a, b, c;

	char string1[] = "Pointers rock,";
	char string2[] = "once you get the hang of it!"; 
	
	char* str_ptr1 = string1;
	char* str_ptr2 = string2; 

	a = 1; 
	b = 2;
	c = 3; 

	
	printf( "The length of the string is: %d\n", string_length(string1) );

	// Concatinating 
	printf( "The first string is: %s\nand the second is: %s\n", string1, string2 ); 
	printf( "The string after concatinating is: %s\n", string_concat( string1, string2 ));


	// reordering
	printf( "The values before reordering are: a: %d, b: %d"
									  " c: %d\n", a, b, c ); 
	reorder(&a, &b, &c );
	printf( "The valuse after reordering are: a: %d, b: %d" 
									  " c: %d\n", a, b, c ); 
	return 0;
}
