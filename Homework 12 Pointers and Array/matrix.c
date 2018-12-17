/*-----------------------------------------------------------------
| File: matrix.c                                                    |
| Description: This file holds all of the pointer methods that main |
| calls.                                                            |
| Author: Kyle Watson kpw44@nau.edu                                 |
 ------------------------------------------------------------------*/
#include "matrix.h"


float* matrix_multiplication(float* left, float* right, int row, int shared, int col)
{
    float* result_matrix = (float*) malloc(sizeof(float) * (row * col));
    int current_row, current_col, current_shared;
    float answer; 

    for(current_row = 0; current_row < row; current_row++)
    {
        for(current_col = 0; current_col < col; current_col++)
        {
            answer = 0; 
            for (current_shared = 0; current_shared < shared; current_shared++)
            {
                answer += *( left + shared * current_row + current_shared) * *(right + col * current_shared + current_col );
            }
          *(result_matrix + col * current_row + current_col) = answer;
        }
    }
    printf("\n");
    return result_matrix;
}
