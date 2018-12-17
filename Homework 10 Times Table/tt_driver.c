#include <stdio.h>
#include <stdlib.h>
#include "tt.h"

int main( int argc, const char *argv[] )
{
	int tt[ 10 ][ 10 ];
	int first, second; 
	
	tt_init( tt );
	printf( "\ntt initialized ...\n\n" );

	//printf("tt: %d\n", *(*tt + 10));
	printf( "" );

	tt_print( tt );
	printf( "\n" );

	// take user input
	printf( "Please enter the product, e.g. 5 * 6: " );
	scanf( "%d * %d", &first, &second ); 
	printf("%d * %d = %d\n\n", first, second, tt_result( tt, first, second ));

	return EXIT_SUCCESS;
}
