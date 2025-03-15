/* S.G.M.P 
 * @file: code_25_01.c
 * @brief: store and find the oldest person's age
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 15-03-2025 5:28 PM 
 */

// Headers
#include <stdio.h>

// Entry point function 
int main()
{
	int ages[8]; 
	// declare an array to store ages of 8 people
	int oldest; // variable to store the oldest age
	int le; // loop variable

	// prompt user to enter ages
	printf("Enter ages of 8 people: \n"); 

	// loop to take input from the user

	for(le = 0; le < 8; le++)
	{
		 scanf("%d",&ages[le]); 
	}

	// Assume the first person's age as the oldest 
	oldest = ages[0]; 

	// loop to find the oldest age
	for(le = 1; le < 8 ; le++)
	{
		if(ages[le] > oldest)
		{
			oldest = ages[le];
		}
	}

	// Display the oldest age
	printf("oldest person's age: %d\n",oldest); 

	// return 0 to indicate successful excecution 

	return 0; 
}