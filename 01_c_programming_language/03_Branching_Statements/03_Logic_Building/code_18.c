// Header
#include <stdio.h>

/* This program checks if a given number is divisible by both 3 and 5.
   If the number is divisible by both, It prints a message 
   */

int main(void)
{
	 int num = 120; 

	 if( num % 3 == 0 && num % 5 == 0)
	 {
	 	printf(" The number is divisible by both 3 and 5.\n");
	 }
	 else
	 {
	 	printf(" The number is not divisible by both 3 and 5.\n");
	 }

	 return 0; 
}