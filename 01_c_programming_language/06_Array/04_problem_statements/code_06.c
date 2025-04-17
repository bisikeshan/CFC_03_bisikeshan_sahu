/* S.G.M.P 
 * @file: code_05.c
 * @breif: 6. Fuel Consumption Monitoring
 * Problem Statement:
 * A transport company tracks the daily fuel consumption (in liters) of a truck for a month. Write a program that:
 * Stores daily fuel usage in a 1D array.
 * Computes and displays the total fuel consumption.
 * Finds the day with the highest and lowest fuel usage.
 * Calculates the average daily fuel consumption.
 * Real-Life Application:
 * Used in fleet management systems to optimize fuel usa
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 27-03-2025 11:39 PM 
 */

#include <stdio.h>

float fuel_consumption[30]; // declare a variable to store fuel consumptions of truck for a 30 days
float total,average,highest_fuelusage,lowest_fuelusage;
int days;   

int main()
{
	// prompt user to enter 30 days fuel consumption data
	printf("Enter fuel consumptions for 30 days: \n"); 

	for(int le = 0; le < 30; le++)
    {
      days = le + 1;
     printf("Days: %d\n",days); 
	 scanf("%f",&fuel_consumption[le]); 
	 total += fuel_consumption[le]; 
	}

	printf("Total fuel consumptions: %.2f litre\n",total); 
	
	highest_fuelusage = lowest_fuelusage = fuel_consumption[0]; 

	for(int le = 1; le < 30; le++)
	{
	   if(fuel_consumption[le] > highest_fuelusage)
	   {
	   	   highest_fuelusage = fuel_consumption[le]; 
	   }

	   if(fuel_consumption[le] < lowest_fuelusage)
	   {
	   	   lowest_fuelusage = fuel_consumption[le]; 
	   }
	}

	printf("highest fuel consumptions : %.2f litre\n",highest_fuelusage); 
	printf("lowest fuel consumptions: %2.f litre\n",lowest_fuelusage); 

	average = total / 30; 
	printf("average fuel consumptions: %.2f litre\n",average); 

	return 0; 
}  