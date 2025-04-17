/* S.G.M.P 
 * @file: code_17_01.c
 * @brief: find the second largest number in an array
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 13-03-2025 11:02 am
 */

// Headers
#include <stdio.h>

// Entry point function 
int main()
{
	int numbers[8]; // declare an array to store 8 numbers
	int largest,second_largest; // variable to store largest and second largest numbers
	int le; // loop variable 

	// prompt user to enter 8 numbers
	printf("Enter 8 numbers:\n"); 

	// loop to take input from the user

	for(le = 0; le < 8; le++)
	{
		scanf("%d",&numbers[le]); 
	}

	// initialize largest and second largest 

	if(numbers[0] > numbers[1])
	{
		largest = numbers[0]; 
		second_largest = numbers[1];
	}
	else
	{
		largest = numbers[1]; 
		second_largest = numbers[0]; 
	}

	// loop to find second largest numbers
	for(le = 2; le < 8; le++)
	{ if( numbers[le] > largest)
	{
		second_largest = largest; 
		largest = numbers[le]; 
	}
	else if(numbers[le] > second_largest && numbers[le] != largest)
	{
		second_largest = numbers[le]; 
	}
	}

	// display second largest number
	printf("second largest number: %d\n",second_largest); 

	// return 0 to indicate successful excecution 
	return 0; 
}