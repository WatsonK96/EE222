/*-----------------------------------------------------------------
| File: stat_lib.c                                                  |
| Description: This is where all of the functions are being held.   |
| this is where all of the logic is being held.                     |
| Author: Kyle Watson kpw44@nau.edu                                 |
 ------------------------------------------------------------------*/
#include <math.h>

/*
Input: integer array, and the size of array
Output: maximum integer inside the array 
Description: This will find the maximum integer in the array
*/
int max( int max[], int size)
{
  int index; 
  int temp_max = max[0];
  for( index = 0; index < size; index++)
  {
   if( temp_max < max[index])
   {
     temp_max = max[ index ];
   }
 
  }
 return temp_max;
}

/*
Input: integer array, and the size of array
Output: minimum integer inside the array 
Description: This will find the minimum integer in the array
*/
int min( int min[], int size)
{
  int index;
  int temp_min = min[0];
  for( index = 0; index < size; index++)
  {
   if( temp_min > min[index])
   {
     temp_min = min[ index ];
   }
  }
 return temp_min;
}

/*
Input: integer array, and the size of array
Output: finds the mean integer of the array 
Description: This will find the mean integer in the array
*/
int mean( int mean[], int size)
{
  int index;
  int sum = 0; 
  for( index = 0; index < size; index++)
  {
    sum += mean[index]; 
  }
  return sum / size; 
}

/*
Input: sorted integer array, and the size of array
Output: finds the median of the array as a integer 
Description: This will find the median integer in the array
*/
int median( int median[], int size)
{
  int median_num; 
  int middle;
  middle = size / 2; 
  if( size % 2 == 0 )
  {
    median_num = (median[ middle]  + median[ middle - 1]) / 2;
   
  } 
  else 
  {
    median_num = median[middle]; 
  }
 return median_num; 
  
}


/*
Input:  integer array, and the size of array
Output: finds the variance of the array 
Description: This will find the variance integer in the array
*/
int variance( int variance[], int size)
{
	int index; 
   int sum = 0; 
   int var; 

   int mean( int variance[], int size);

   var = mean( variance, size );
   for(index = 0; index < size; index++)
   {
      sum += (variance[index] - var) *(variance[index] - var);
   }

   return sum / (size - 1 );
}
// sum += (x[k] - average) * (x[k] - averge);
// return sum/(size - 1);

/*
Input:  integer array, and the size of array
Output: finds the standard deviation of the array 
Description: This will find the standard deviation in the array
*/
int std_deviation( int std_deviation[], int size)
{
 int var= 0; 
 int std_dev =0;
 var = sqrt(variance(std_deviation, size));
 return var; 
  
}

