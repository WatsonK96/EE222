/*-----------------------------------------------------------------
| File: tt.c                                                        |
| Description: this is where all of your functions are going to be  |
| held. It will hold the tt_init, tt_print, and tt_result           |
| Author: Kyle Watson kpw44@nau.edu                                 |
 ------------------------------------------------------------------*/
#include "tt.h"
/*
Input: integer 2D array 
Description: This will make the array for the times table 
*/
void tt_init( int tt[10][10] )
{
	int index, innerIndex;
	int maxIndex = 10;
	for( index = 0; index < maxIndex; index++ )
	{
		for( innerIndex = 0; innerIndex < maxIndex; innerIndex++ )
		{
			tt[index][innerIndex] = ( index + 1 )*( innerIndex + 1 );
		}
	}
}
/*
Input: integer 2D array 
Description: This is what will output the times table 
*/
void tt_print( int tt[10][10] )
{
	int index, innerIndex;
	int maxIndex = 10;
	for( index = 0;  index < maxIndex; index++ )
	{
		printf("---------------------------------------------------\n");
		for( innerIndex = 0; innerIndex < maxIndex; innerIndex++ )
		{
			printf( "|%4d", tt[index][innerIndex] );
		}
		printf( "|\n" );
	}
	printf( "---------------------------------------------------\n" );
}
/*
Input: integer 2D array, integer first numer, and integer second number
Description: This is where it will take the two numbers and figure out their sum
of the times table. 
*/
int tt_result( int tt[10][10], int first, int second )
{
	first --; 
	second--; 
	return tt[first][second];
}
