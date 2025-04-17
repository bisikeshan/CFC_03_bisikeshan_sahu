// Header 
#include <stdio.h>

/* This programs checks if a given number is positive, negative or zero.
   It prints the appropriate message based on the value of the number
  */

int main(void)
{
	 int num = -5; 

	 if( num > 0)
	 {
	 	printf(" The number is positive.\n");
	 }

	 else if(num < 0)
	 {
	 	printf("The number is negative.\n");
	 }
	 else
	 {
	 	printf("The number is zero.\n");
	 }
	 return 0; 
}