/* 
  * S.G.M.P 
  * @file: code_03_01.c
  * @brief: store monthly bills and calculate total 
  * @author: bisikeshan sahu (bisikeshan567@gmail.com)
  * @date: 06-03-2025 12:37 PM 

 */
// Headers
#include <stdio.h>

int main()
{
	// Declare an array to store 12 months electricity bills
	float bill[12]; 

	// variable to store total bill amount
	float total = 0; 

	int le = 0; 
	// loop variable 

	printf("Enter monthly electricity bill for a year:\n"); 

	// loop to take input from the user

	for(le = 0; le < 12; le++)
	{
		scanf("%f",&bill[le]);
	}

	// loop to calculate total bill amount

	for(le = 0; le<12; le++)
	{
		total += bill[le]; 
	}

	//display the total electricity bill for the year

	printf("Total electricity Bill for the year: %.2f\n",total);

	// Return 0 to indicate successful excecution 

	return (0);

}
