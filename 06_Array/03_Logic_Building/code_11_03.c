/* S.G.M.P
 * @file: code_11_03.c
 * @brief: find the smallest number in an array
 * @author: bisikeshan sahu ( bisikeshan567@gmail.com )
 * @date: 10-03-2025 10:44am
 */
// Headers
#include <stdio.h>

// Entry pointf function 
int main()
{   
	// declare an array to store 6 numbers
	int numbers[6];
	// decalre a variable to store smallest number
	int smallest; 
	int le; // loop variable 

	// prompt user to enter 6 numbers
	printf("Enter numbers: \n");

	// loop to take input from the user
	for( le = 0; le < 6; le++)
	{
		scanf("%d",&numbers[le]);
	}

	// assume first element as the smallest 
	smallest = numbers[0]; 

	// loop to find the smallest number
	for( le = 0; le < 6; le++)
	{
		if(numbers[le] < smallest)
		{
			smallest = numbers[le];
		}
	}

	// print smallest number
	printf("smallest number: %d \n",smallest);

	// return 0 to indicate successful excecution 
	return 0; 
}