/* S.G.M.P 
 * @file: code_16_03.c
 * @brief: store montly expenses and calculate total and average
 * @author: biskeshan sahu (bisikeshan567@gmail.com)
 * @date: 12-03-2025 9:11 am
 */

// Headers
#include <stdio.h>

// Entry point function 
int main()
{
	float expenses[12]; // declare an variable to store monthly expenses
	float total = 0; // variable to store total expenses
	int le; // loop variable

	// prompt use to Enter numbers:
	printf("Enter monthly expenses for a year: \n");

	// loop to take input fromt the user
	 
	for(le = 0; le < 12; le++)
	{
		scanf("%f",&expenses[le]);
	}

	// loop to calculate total expenses

	for(le = 0; le < 12; le++)
	{
		total += expenses[le];
	}

	// display total and average expenses

	printf("total expenses: %.2f\n",total);
	printf("average monthly expenses: %.2f\n",total/12);

	// return 0 to indicate successful excecution 
	return 0; 
}