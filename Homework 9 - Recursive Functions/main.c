/*-----------------------------------------------------------------
| File: main.c                                                      |
| Description: This is the main driver that will be run the program |
| Author: Kyle Watson kpw44@nau.edu                                 |
 ------------------------------------------------------------------*/
#include <stdio.h>
#include "fibonacci.h"

int main() 
{
	int num;
	printf("Please give an number: ");
	scanf("%d", &num); 
	printf("The number after going through fibonacci sequence is: %d\n",
                                                              fibonacci( num ));
 return 0;
}

