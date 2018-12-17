/*-----------------------------------------------------------------
| File: guessing.c                                                  |
| Description: asks user if a number is greater than the number     |
| shown if it is recalculates a new number and repeats. Prints out  |
| correct number when you can't guess any more                      |
| Author: Kyle Watson kpw44@nau.edu                                 |
 ------------------------------------------------------------------*/
#include <stdio.h>
#define MAX 1000

int main() 
{
  // The highest value it can be
  int high = MAX;     

  // The value that they are going to be telling if it is higher or lower
  int middle;

  // The lowest point it can be.         
  int min = 1;   

  // Index is what is number of moves it takes to get to the correct number        
  int index = 1;     
  
  // The char character that will provide yes or no answer  
  char answer;         
 
  // loop until min and high are the same value
  while( min != high )
  {
    // This finds the middle by adding (high + min) then divide it by 2. 
    middle = ( high + min ) / 2;
   
    // gets input from the user and stores it in answer
    printf( "%d Is your number greater than %d? (y/n)?", index, middle );
    scanf("%c", &answer);
    getchar();
   
    // check to see if 
    if( answer == 'y') 
    {
     min = middle + 1; 
    } // end of answer being y
    else if( answer == 'n')
    {
      high = middle; 
    } // end of answer being n
  index++; 
  } // end of while loop
 
 // print out the value when it is found 
 printf("Your number is: %d\n", min);

 return 0;
} // end of program
