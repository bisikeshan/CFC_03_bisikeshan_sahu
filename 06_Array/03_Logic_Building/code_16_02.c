/* S.G.M.P 
 * @file: code_16_02.c
 * @brief: store monthly expenses and calculate total and average 
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 12-03-2025 8:57 am
 */

// Headers
#include <stdio.h>

// Entry point function 
int main()
{   
	// declare an variable to store 12 expenses
	float expenses[12];
	float total = 0;  // variable to store total of 12 expenses 
	int le; // loop variable

	// prompt use to enter monthly expenses
	printf("Enter monthly expenses: \n"); 

	// loop to take input from the use
	for(le = 0; le < 12; le++)
	{
		scanf("%f",&expenses[le]);
	}

	// loop to calculate expenses
	for(le = 0; le < 12; le++)
	{
		total += expenses[le];
	}

	// display total and average expenses
	printf("total expenses: %.2f\n",total);
	printf("Average monthly expenses: %.2f\n",total/12);

	// return 0 to indicate successful excecution 
	return 0; 
}