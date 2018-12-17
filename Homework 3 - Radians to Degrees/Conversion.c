/*-----------------------------------------------------------------
| File: conversion.c                                                |
| Description: Converts the given radian value from user to degrees |
| Author: Kyle Watson kpw44@nau.edu                                 |
 ------------------------------------------------------------------*/

# include <stdio.h>
# include <stdbool.h>
# define PI 3.141592

int main()
{
  float radians;
  int degrees; 
  bool first_time = true; 

  // loop while radians is less than 0 and greater than 2 * PI 
  do 
   {
    if( first_time ) 
    {
      // Ask for a radian 
      printf("Enter radian: ");
  	   scanf("%f", &radians);
      first_time = false; 
    }    

    // ask for them for radians again with the specific instructions 
  	 else
    {
      printf("Enter radian between 0 and 2* PI: ");
  	   scanf("%f", &radians);
    }
   // Checks to only allow radians to be from 0 to 6.28. 
   }while( radians < 0 || radians > (2 * PI ));

  // Calculate the degrees from radians 
  degrees = radians * (180/PI);
  
  // Print out the value of the radian and degrees. 
  printf("%1.2f radians is %d degrees.\n", radians, degrees);
  return 0; 
}

