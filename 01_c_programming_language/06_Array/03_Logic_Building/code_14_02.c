/* S.G.M.P
 * @file: code_14_02.c
 * @brief: find the difference between max and min 
 * @author: biskeshan sahu (bisikeshan567@gmail.com)
 * @date: 11-03-2025 2:00 PM
 */

// Headers
#include <stdio.h>

// Entry point function 
int main()
{ 
	   // declare an array to store 6 numbers
	   int numbers[6];
	   int max,min; // variables to store max and min values
	   int le; // loop variable

	   // prompt user to take input from the user
	   printf("Enter 6 numbers:\n");

	   // loop to take input from the user
	   for(le = 0; le < 6; le++)
	   {
	   	 scanf("%d",&numbers[le]);
	   }

	   // Assume first element as max and min 

	   max = min = numbers[0];

	   // loop to find max and min values

	   for(le = 1; le < 6; le++)
	   {
	   	 if(numbers[le] > max)
	   	 {
	   	 	 max = numbers[le];
	   	 }

	   	 if(numbers[le] < min )
	   	 {
             min = numbers[le];
	   	 }
	   }

	   // display difference between max and min values

	   printf("Difference between max and min %d\n",max-min);

	   // Return 0 to indicate successful excecution 

	   return(0);
 }