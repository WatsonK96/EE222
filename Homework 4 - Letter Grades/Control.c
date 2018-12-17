/*-----------------------------------------------------------------
| File: Control.c                                                   |
| Description: Takes in input from user (characters) and if correct |
| input type display a message. If incorrect print error message    |
| and asks to enter character again with valid input displayed for  |
| them.                                                             |
| Author: Kyle Watson kpw44@nau.edu                                 |
 ------------------------------------------------------------------*/

# include <stdio.h>
# include <stdbool.h>

int main()
{
  bool invalid = false; // will return true if you did not enter a correct char 
  bool q_found = false; // returns true if q was found and will quite
  char grade;          // the char that you entered to check

  // run until q is found 
  while (!q_found) 
  {
   // gives you prompt to enter the next value if entered a correct character
   if(!invalid)
   {
   	printf("Please enter a character:\n");
   	scanf("%c", &grade);
      // gets just the first char from the keyboard and ignores extras
      getchar();
   }
   //Checks to see if the letter entered 
   switch(grade)
   {
    case 'A':
     printf("Very Good!\n");
     break;

    case 'B':
     printf("Good!\n");
     break;

    case 'C':
     printf("Okay!\n");
     break;

    case'D':
    case'F': 
      printf("Doomed!\n");
      break;
    case'q': // exits the program.
      q_found = true; 
      break;
    default: //invalid char entered
      printf("You entered an incorrect letter.\n");
      printf("Please enter either 'A', 'B', 'C', 'D', 'F' or 'q':\n");
      scanf("%c", &grade);
      getchar();
      invalid = true;
      break;
   } // end of switch statement
  }  // end of while loop
  
  return 0; 
}

