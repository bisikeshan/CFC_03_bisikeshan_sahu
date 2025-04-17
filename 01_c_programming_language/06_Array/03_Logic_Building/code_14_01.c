/* S.G.M.P 
 * @file: code_14_01.c
 * @brief: find the difference between maximum and minimum in an array 
 * @author: biskeshan sahu (bisikeshan567@gmail.com )
 * @date: 10-03-2025 3:12 PM 
 */
  
  // Headers
#include <stdio.h>

// Entry point function 
int main()
{
	// declare an array to store 6 numbers
	int numbers[6];
	int max,min; // variable to store max and min values
	int le; // loop variable

	// prompt use to enter 6 numbers
	printf("Enter 6 numbers: \n");

	// loop to take input from the user

	for( le = 0; le < 6; le++)
	{
		scanf("%d",&numbers[le]);
	}

	// assume first element as max and min 
	max = min = numbers[0];

	// loop to find min and max value

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

	// return 0 to indicate successful excecution 
   
    return 0;  
}
