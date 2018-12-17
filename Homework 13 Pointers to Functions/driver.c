/*-----------------------------------------------------------------
| File: driver.c                                                    |
| Description: This is the main driver for the homework assignment  |
| this also holds all of the functions, and prototypes              |
| Author: Kyle Watson kpw44@nau.edu                                 |
 ------------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>

// Function prototypes 
float add(float first, float second);
float sub(float first, float second);
float mul(float first, float second);
float divide(float first, float second);

// main/driver class
int main(int argc, char *args[])
{
	 // this will be hold the values that you are getting from the command line 
    float one, two;

    //  this is a variable that will move along the array 
    int index = 0; 

    // creating the array
    float(*op_array[])(float,float) = {add, sub, mul, divide, NULL};
	
	 // gets the values from the command line 
    sscanf(args[1], "%f", &one);
    sscanf(args[2], "%f", &two);

	 // checks to see if the pointer is equal to null
    while(*(op_array + index) != NULL)
    {

	  // this prints out the values of each of the functions 
     printf("Result: %5.2f\n", (*(op_array + index))(one, two) );
     
     // increment the index to move to the next function
	  index++;
    }
	
	 // return success
    return 0;
}


/*
Input: two floating numbers 
Output: a floating result
*/
float add(float first, float second)
{
    return first + second; 
}
/*
Input: two floating numbers 
Output: a floating result
*/
float sub(float first, float second)
{
    return first - second; 
}
/*
Input: two floating numbers 
Output: a floating result
*/
float mul(float first, float second)
{
    return first * second;
}
/*
Input: two floating numbers 
Output: a floating result
*/
float divide(float first, float second)
{
	// checks to see if the number you are dividing by is zero 
	if( second != 0 )
	{
    return first / second; 
	}
 	
	// return 0 since you can't divide by 0
	return 0;
}
