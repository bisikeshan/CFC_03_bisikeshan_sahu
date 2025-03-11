/* S.G.M.P 
 * @file: code_14_03.c
 * @brief: find the difference between max and min numbers
 * @author: biskeshan sahu (bisikeshan567@gmail.com)
 * @date: 11-03-2025 2:56 PM 
 */

// Headers
#include <stdio.h>

// Entry point function 
int main()
{   
	// declare an array to store 6 numbers
	int numbers[6];

	// variable to store max and min values
	int max,min; 
	int le;  // loop variable

	// prompt user to enter 6 numbers
	printf("Enter 6 numbers: \n");

	// loop to take input from the user
	for(le = 0; le < 6; le++)
	{
		scanf("%d",&numbers[le]);
	}

	// Assume the first element as max and min 
	max = min = numbers[0];

	// loop to find max and min values
	for(le = 1; le < 6; le++)
	{
		if(numbers[le] > max)
		{
			max = numbers[le];
		}

		if(numbers[le] < max)
	    {
	    	min = numbers[le];
	    }
	}

	// display difference between max and min values

	printf("Difference between max and min %d\n",max-min);

	// return 0 to indicate successful excecution 
	return 0; 
 }