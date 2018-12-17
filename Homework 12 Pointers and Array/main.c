/*-----------------------------------------------------------------
| File: main.c                                                      |
| Description: This is the main driver for the homework assignment  |
| Author: Kyle Watson kpw44@nau.edu                                 |
 ------------------------------------------------------------------*/
#include "matrix.h"


int main()
{
    int row = 2; 
    int col = 4;
    int shared = 3; 
    int col_index, row_index; 
    float left_matrix[2][3] = {{1,2,3},{4,5,6}};
    float right_matrix[3][4] = {{7,8,9,10},{11,12,13,14},{15,16,17,18}};


    float* left = *left_matrix;
    float* right = *right_matrix;
    float* result_matrix;

    result_matrix = matrix_multiplication(left, right, row, shared, row);

    for (row_index=  0; row_index < row; row_index++ )
    {
        for (col_index = 0; col_index < col; ++col_index )
        {
            printf("%f  ", *(result_matrix + (4 + row_index * col_index)));
        }
    }
}