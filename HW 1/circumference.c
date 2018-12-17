/*
File: circumference.c
Description: Finds the circumference given the diameter
Author: Kyle Watson kpw44@nau.edu
*/

# include <stdio.h>
# define PI 3.141592

float find_circum(float diameter);

int main()
{
  float diameter;
  printf("Enter diameter: ");
  scanf("%f", &diameter);

  printf("Circumference is: %f\n", find_circum(diameter));
  return 0; 
}

/*
Function: input/output
Description: takes the diameter and multiplies it by PI to get the circumference. 
*/
float find_circum(float diameter)
{
  return PI * diameter;
}


