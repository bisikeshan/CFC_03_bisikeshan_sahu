// Headers
#include <stdio.h>

/* 1️. Check if a store is open or closed based on the time
A store operates between 9 AM and 9 PM.
Given a time (in 24-hour format), determine if the store is open or closed.
*/

// Entry point function 

int main(void)
{
	 int unit = 350; 

	 if(unit <= 100)
	 {
	 	 unit = 5 * unit; 
	 	 printf("your totoal amount is: %d rs \n",unit);
	 }
	 else if(unit >= 100 && unit <= 300)
	 {
	 	unit = 8 * unit; 
	 	printf("your total amount is : %d rs\n",unit);
	 }
	 else{

	 	unit = 10 * unit; 
	 	printf("your total bill amount is: %d rs \n",unit);
	 }

	 return 0; 
}