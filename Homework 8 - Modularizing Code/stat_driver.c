/*-----------------------------------------------------------------
| File: stat_driver.c                                               |
| Description: This runs the main program and calls the functions   |
| from stat_lib.c and stat_lib.h.                                   |
| Author: Kyle Watson kpw44@nau.edu                                 |
 ------------------------------------------------------------------*/
#include <stdio.h>
#include "stat_lib.h"
#define FILENAME "hw8.txt"

int main() 
{
   
  FILE* in_file;   // creates the file you will be using 
  in_file= fopen(FILENAME, "r"); // this opens the file and lets you read it 
  if( in_file == NULL) // check to see if file is null 
  {
    printf("ERROR: unable to open the file.\n");
  }
  else // something is in this file 
  {
    int file_array[50];              // creates an new array with 50 elements
    int value = 0;                   // Value is the number that is in the file
    int size = 0;                    // size is the number of elements in he file
    int index = 0;                   // for setting the array index to the value  
    fscanf(in_file, "%d", &value);
    
    while(!feof (in_file))           // Go until you get to the end of file 
    {
      file_array[index] = value;     // get the index to put the value in
      fscanf(in_file, "%d", &value); // scans the file to get the next value
      size++, index++; // increment the size and index for later use 
    }
  
  // Uses all of the functions from stat_lib.c/h
  printf("Maxium int is: %d\n", max( file_array, size));
  printf("Minimum int is: %d\n", min( file_array, size));
  printf("Mean int is: %d\n", mean( file_array, size));
  printf("Median int is: %d\n", median( file_array, size));
  printf("Variance is: %d\n", variance( file_array, size));
  printf("Standard Deviations is: %d\n", std_deviation( file_array,size));
  }
  
  fclose(in_file); // close the file 
  return 0;
}
