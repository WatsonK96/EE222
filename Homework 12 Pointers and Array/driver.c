/*------------------------------------------------------------------
| File: driver.c                                                    |
| Description: This is the main driver for the homework assignment  |
| Author: Kyle Watson kpw44@nau.edu                                 |
 ------------------------------------------------------------------*/
#include "matrix.h"
#define LEFT {{1,2,3},{4,5,6}}
#define RIGHT {{7,8,9,10},{11,12,13,14},{15,16,17,18}}
#define ROW 2
#define COL 4
#define SHARED 3
int main()
{
	// int variables 
   //int row = 2; 
   //int col = 4;
   //int shared = 3; 
   int col_index, row_index, index = 0;

	// float arrays  
   float left[2][3] = LEFT;
   float right[3][4] = RIGHT;

	// float pointers 
   float* left_ptr = &left[0][0];
   float* right_ptr = &right[0][0];
   float* result_matrix;
	
   // setting result from matrix_multipication 
   result_matrix = matrix_multiplication(left_ptr, right_ptr, ROW, SHARED, COL);

	// printing the values 
   for (row_index=  0; row_index < ROW; row_index++ )
   {
       printf("\n");
       printf("------------------------------------------------------\n");
       
       for (col_index = 0; col_index < COL; col_index++ )
       {
			 
			if( *(result_matrix + (4 * row_index + col_index)) < 100 )
			{
           	printf(" %3.1f|  \t", *(result_matrix + (4 * row_index + col_index))); 
			}
			else 
			{
				printf("%3.1f|  \t", index, *(result_matrix + (4 * row_index + col_index)));
			}  
			
			index++;         
       }
      
   }
	printf("\n");
	printf("------------------------------------------------------\n");
}
