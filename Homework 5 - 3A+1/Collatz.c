/*-----------------------------------------------------------------
| File: Collatz.c                                                   |
| Description: takes a number and see's if the number is even or    |
| odd. If even divide by 2 else complete the formula.               |
| Author: Kyle Watson kpw44@nau.edu                                 |
 ------------------------------------------------------------------*/

#include <stdio.h>
#define MAX 30

int main()
{
  int run;  // the index that will be incrementing 
  int a;    // the value to work with so you are not using the index 
  int count = 0; // counter for how many times it has run
  for(run = 1; run <= MAX; run++)
  {
    a = run;
    // loop while a is not 1
    while( a != 1)
    {
      // check to see if a is even 
      if( a % 2 == 0)
      {
         a /= 2;
      }
      else  // odd so do the math
      {
       a = (3 * a + 1);
      }
      // increment the number of times you have gone through 
      count ++;
    }
   // print out the value and how many times it took to get to 1. 
   printf("%d - %d\n",run, count);
 
   // sett count equal to zero for the index of loop
   count = 0;
  }

  return 0; 
}
