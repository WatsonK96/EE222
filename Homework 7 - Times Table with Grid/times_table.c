/*-----------------------------------------------------------------
| File: times_table.c                                             |
| Description: This is file is going to make a times table        |
| using two for loops and using a function to make the -'s for the|
| table.This will also write to a file and display the table there|
| Author: Kyle Watson kpw44@nau.edu                               |
 ------------------------------------------------------------------*/
#include <stdio.h>
#define FILENAME "Times_table.txt";

// declaring the function that we will be using in the 
void fprint_line(FILE* stream, int length);

int main() 
{
 int row;                  // this is the index for the number of rows that will be used. 
 int column;               // this is the index for the number of columns that will be used. 
 int max_row = 10;         // the maximum number of rows that there will be. 
 int max_column = 10;      // the maximum number of columns that there will be. 
 int length_dashes = 41;   // the number of dashes that are needed to have for every value. 
 int answer;               // this is the answer that you will get by multiplying the row and columns 
 FILE *Times;              // the file pointer
  
 // Times will be used to make Times_table.txt and write to it. 
 Times = fopen( "Times_table.txt", "w");
  
 // check to see if you can open the file
 // File does not open 
 if( Times == NULL )
 {
   printf( "ERROR: Unable to open file.\n" );
 }
 else // File does open 
 {
   // creates the rows for the table 
	for( row = 1; row <= max_row; row++ )
	{
      // print the dashes inbetween each line 
		fprint_line( Times, length_dashes );
      fprint_line( stdout, length_dashes );
    // creates the columns for the table 
    for( column = 1; column <= max_column; column++ )
	 {
      // gets answer by multiplying row by column
		answer = row * column;

      // prints out the answer 
      fprintf( stdout,"|%3d", answer );
		fprintf( Times, "|%3d", answer );
   
      // checks to see if the column index is equal to the max_column
      if( column == max_column)
      {  
         // print the last | to close out the column/row
	  		fprintf(Times, "|");
     		fprintf(stdout, "|");
  
         // print a new line to drop down to the next 
     		fprintf( stdout, "\n" );
     		fprintf( Times, "\n" );
      } // end of if statement 
	 }   // end of column's for loop
	}    // end of row's for loop
  }     // end of else the file is able to open

 // prints out the lines at the bottom of the times table
 fprint_line( Times, length_dashes );
 fprint_line( stdout, length_dashes );

 return 0;
}

/*
Function: input:
                a pointer to a file 
                a length as an integer.
Description: loops through the index's and prints a '-' until index is equal to length
*/
void fprint_line(FILE* stream, int length)
{
  int index; // index to be moved through
  
  // loop through the loop and print - every time 
  for(index= 0; index < length; index++)
  {
   fprintf(stream, "-");
  }
   // creates a new line so don't have to do this in my main code 
   fprintf( stream, "\n" );
 
}
