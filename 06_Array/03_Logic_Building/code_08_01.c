// Headers
#include <stdio.h>

// Entry point function 
int main()
{
	// declare an array to store 8 numbers
	int numbers[8];

	// variable to store largest numbers
	int largest; 

	// loop variable
	int le; 

	// prompt user to enter 8 numbers
	printf("Enter 8 numbers:\n");

	// loop to take input from the user
	for( le = 0; le < 8; le++)
	{
		scanf("%d",&numbers[le]);
	}

	// Assume first element as the largest number
	largest = numbers[0];

	// loop to find the largest number

	for( le = 1; le < 8; le++)
	{
		if(numbers[le] > largest)
		{
			largest = numbers[le];
		}
	}

	// display the largest number
	printf("Largest number: %d\n",largest);


	// return 0 to indicate succesful excecution 
	return 0; 
}