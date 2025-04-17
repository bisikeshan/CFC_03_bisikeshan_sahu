// Headers
#include <stdio.h>

// Entry point function 
int main()
{    
	 // declare an array to store 10 numbers 
	 int numbers[10];
	 int sum = 0; // declare a variable to store sum of 10 numbers
	 int le = 0; // loop variable 

	 // prompt user to enter 10 numbers

	 printf("Enter 10  number: \n");

	 // loop to take input from the user

	 for(le = 0; le < 10; le++)
	 {
	 	scanf("%d",&numbers[le]);
	 }

	 // loop to calculate sum of 10 numbers

	 for(le = 0; le < 10; le++)
	 {
	 	sum += numbers[le];
	 }

	 // display output

	 printf(" sum of number: %d\n",num);

	 // return 0 to indicate succesful excecution 
	 return 0; 

}