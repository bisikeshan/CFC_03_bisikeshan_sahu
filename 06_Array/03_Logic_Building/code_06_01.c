// Headers
#include <stdio.h>

// Entry point function 
int main()
{
	// declare an array to store 10 numbers
	int numbers[10];
	int sum = 0; // variable to store the sum

	int le; // loop variable

	// prompt user to enter 10 numbers
	printf("Enter 10 numbers:\n"); 

	// loop to take input from the user
	for(le = 0; le < 10; le++)
	{
		scanf("%d",&numbers[le]);
	}

	// loop to calculate the sum of numbers

	for(le = 0; le < 10; le++)
	{
		sum += numbers[le];
	}

	// display the sum of numbers
	printf("sum of numbers: %d\n",sum); 

	// return 0 to indicate successful excecution 

	return (0);
}