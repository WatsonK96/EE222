/*
File: interpolation.c
Description: Taking two sets of coordinates in, with a x value on the slope to find the y value.   
Author: Kyle Watson kpw44@nau.edu
*/

# include <stdio.h>

int main()
{
  float x1, x2, y1, y2, x, y, slope;
  
  // have you user input the values for the coordinates and store them in the variables 
  printf("Please enter the coordinates you would like in the form x1 y1 x2 y2 x:\n");
  scanf("%f %f %f %f %f", &x1, &y1, &x2, &y2, &x);

  //finds the slope 
  slope = (y2 - y1) / (x2 - x1); 
  
  // gets the coordinate value for y and displays it to the users. 
  y = slope *( x - x1) + y1;
  printf("The value for y is : %4.2f\n", y);
  return 0; 
}


