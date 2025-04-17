/* S.G.M.P 
 * @file: code_08.c
 * @brief:8. Cinema Ticket Sales Analysis 
 * Problem Statement:
 * A cinema tracks the number of tickets sold for 7 days. Write a program that:
 * Stores daily ticket sales in a 1D array.
 * Finds and displays the day with maximum and minimum sales.
 * Computes the average daily ticket sales.
 * Identifies the days when ticket sales were below average.
 * Real-Life Application:
 * Used in movie theaters to analyze sales trends
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 27-03-2025 12:20PM
 */

#include <stdio.h>

int no_oftickets[7]; // declare a variable to store no of tickets sale for 7 days
int maximum_sales,minimum_sales,average_sales,average,total; 

int main()
{
	printf("Enter number of ticket sold for 7 days: \n"); 

	for(int le = 0; le < 7; le++)
	{
		scanf("%d",&no_oftickets[le]); 
		total += no_oftickets[le]; 
	}

	maximum_sales = minimum_sales = no_oftickets[0]; 

	for(int le = 1; le < 7; le++)
	{
		if(no_oftickets[le] > maximum_sales)
		{
			maximum_sales = no_oftickets[le]; 
		}

		if(no_oftickets[le] < minimum_sales)
		{
			minimum_sales = no_oftickets[le]; 
		}
	}

	printf("maximum ticket sales: %d\n",maximum_sales); 
	printf("minimum ticket sales: %d\n",minimum_sales); 

    average = total / 7; 

    printf("average daily ticket sales: %d\n ",average); 

    return 0; 
}