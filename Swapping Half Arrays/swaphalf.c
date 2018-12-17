/*-----------------------------------------------------------------
| File: swaphalf.c                                                  |
| Description: This file holds all of the methods that main calls.  |
| Author: Kyle Watson kpw44@nau.edu                                 |
 ------------------------------------------------------------------*/

#include "swaphalf.h"

/* 
Input: pointer to a string 
Output: none
*/
void swap_half(char* string)
{
   // variables and variable declarations 
	int str_length, index, mid, right_index, left_index; 
	char letter;  

   str_length = 0; 
   index = 0;
	left_index = 0;

   while( *(string + index) != '\0' )
	{
	   str_length++;
		index++; 
	}

//-----------------------------------------------------------------------	  
// The following code checks to see if the length is odd or even 

	 mid = str_length / 2;
   

	if( str_length % 2 != 0 )
	{
		right_index = mid + 1;
	}
 	else 
	{
		right_index = mid;
	}
	// swaps the values until you hit the midle of the string 
	while( left_index < mid)
	{
		letter = *(string + left_index);

		*(string + left_index) = *(string + right_index);

		*(string + right_index) = letter; 

		left_index++, right_index++;
	}
}



