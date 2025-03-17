/* S.G.M.P 
 * @file: code_27_01.c
 * @brief: calculate the average speed of a vehicle over a week 
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 17-03-2025 7:30 am 
 */
#include <stdio.h>

int main()
{
	float speeds[7]; // declare an array to store speed readings for 7 days
	float total = 0, average; // variables to store total and average spped
	int le; // loop variable


	// prompt user to enter speed readings
	printf("Enter the speed of the vehicle (in km/h) for 7 days:\n"); 

	// loop to take input from the user
	for(le = 0; le < 7; le++)
	{
		scanf("%f",&speeds[le]);
		total += speeds[le]; // Add each speed to total 
	}

	// Calculate the average speed
	average = total/ 7; 

	// Display the averge speed

	printf("Average speed of the vehicle: %.2f km/h\n",average); 

	// return 0 to indicate successful excecution 

	return 0; 
}