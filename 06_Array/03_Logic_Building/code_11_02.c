/* S.G.M.P
 * @file: code_11_02.c
 * @brief: find the smallest number in an array
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 10-03-2025 10:31 am
 */

// Headers
#include <stdio.h>

// Entry point function 
int main()
{
	// declare an array to store 6 numbers
	int numbers[6]; 
	// variable to store smallest numbers
	int smallest; 
	int le; // loop variable

	// prompt user to take input from the user
	printf("Enter numbers: \n");

	// loop to take input from the user 
	for(le = 0; le < 6; le++)
	{
		scanf("%d",&numbers[le]);
	}

	// assume first element as the smallest number
	smallest = numbers[0];

	// loop to find the smallest numbers
	for(le = 1; le < 6; le++)
	{
		if(numbers[le] < smallest)
		{
			smallest = numbers[le];
		}
	}

	// print the smallest number
	printf("smallest numbers is: %d \n",smallest);

	// return 0 to indicate successful excecution 
	return 0; 

}