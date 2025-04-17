/* S.G.M.P 
 * @file: code_22_01.c
 * @brief: find the highest and lower temperatures
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 15-03-2025 3:56 PM 
 */

// Headers
#include <stdio.h>

// Entry point function 
int main()
{
	 float temperatures[7]; 
	 // declare an array to store 7 temperature

	 float highest,lowest; 
	 // variables to store highest and lowest temperature

	 int le; // loop variable

	 // promt user to take input from the user
	 printf("Enter temperatures: \n"); 

	 // loop to take input from the user

	 for(le = 0; le < 7; le++)
	 {
	 	 scanf("%f",&temperatures[le]); 
	 }

	 // initialize highest and lowest with first element
	 highest = lowest = temperatures[0]; 

	 // loop to find highest and lowest temperaturs

	 for(le = 1; le <7; le++)
	 {
	 	if(temperatures[le] > highest)
	 	{
	 		highest = temperatures[le]; 
	 	}

	 	if(temperatures[le] < lowest)
	 	{
	 		lowest = temperatures[le]; 
	 	}
	 }

	 // display the higest and lowest temperatures

	 printf("Highest Temperature: %.2f\n",highest); 
	 printf("lowest Temperature: %.2f\n",lowest); 

	 // Return 0 to indicate successful excecution 

	 return 0; 
}