#ifndef MATRIX_H
#define MATRIX_H

/*-----------------------------------------------------------------
| File: matrix.h                                                    |
| Description: This file is used to hold all of the function        |
| prototypes so I can use them in my main class file.               |
| Author: Kyle Watson kpw44@nau.edu                                 |
 ------------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>

//--------function prototypes--------
float* matrix_multiplication( float* left, float* right, int row, int shared, int columns);

#endif   //MATRIX_H
