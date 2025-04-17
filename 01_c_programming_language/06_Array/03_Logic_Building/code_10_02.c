// Headers
#include <stdio.h>

// Entry point function 
int main()
{
	 // declare two arrays
	 int source[5],destination[5];

	 int le; // loop variable 

	 // prompt user to enter 5 numbers for source array

	 printf("Enter 5 numbers:\n");

	 // loop to take input from the user 

	 for(le = 0; le < 5; le++)
	 {
	 	 scanf("%d",&source[le]);
	 }

	 // loop to copy elements from source to destination 

	 for(le = 0; le < 5; le++)
	 {
	 	 destination[le] = source[le];
	 }

	 // Display copied elements 

	 printf("copied numbers in desitnation array: \n");

	 // loop to print the destination array

	 for( le = 0; le < 5; le++)
	 {
	 	 printf("%d",destination[le]);
	 }

	 // return 0 to indicate successful excecution 

	 return (0);

}