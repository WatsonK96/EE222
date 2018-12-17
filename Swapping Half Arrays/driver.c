/*-----------------------------------------------------------------
| File: driver.c                                                    |
| Description: This file holds the driver and where all of the      |
| 					functions are called.                                |
| Author: Kyle Watson kpw44@nau.edu                                 |
 ------------------------------------------------------------------*/

#include "swaphalf.h"


int main(int argc, char const *argv[])
{
	 // creates the string that holds whatever and creates its pointers 
    char str1[] = "whatever";
    char *str1_ptr = str1;

	 // creates the string that holds EE222 and creates its pointers 
    char str2[] = "EE222";
    char *str2_ptr = str2;

    printf("Normal String: %s\n", str1);

    swap_half(str1_ptr);
	
    printf("Swaped String: %s\n\n", str1);

    printf("Normal String: %s\n", str2);

    swap_half(str2_ptr);

    printf("Swaped String: %s\n", str2);

    return 0;
}
