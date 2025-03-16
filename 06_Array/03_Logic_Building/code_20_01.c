/* S.G.M.P 
 * @file: code_20_01.c
 * @brief: find the median of an array
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 16-03-2025 4:35 PM 
 */

// Headers
#include <stdio.h>

//Entry point function 
int main()
{
	int numbers[7]; // declare an array to store 7 numbers
	int le, temp; // loop variable and temp variable for sorting 

	// prompt user to enter 7 numbers
	printf("Enter 7 numbers:\n"); 

	for(le = 0; le < 7; le++)
	{
		scanf("%d",&numbers[le]);
	}

	// Bubble sort to sort the array

	for(le = 0; le < 6; le++)
	{
		for(int lf = 0; lf < 6 - le; lf++)
		{
			 if(numbers[lf] > numbers[lf + 1])
			 {
			 	 temp = numbers[lf]; 
			 	 numbers[lf] = numbers[lf + 1]; 
			 	 numbers[lf+1] = temp; 
			 }
		}
	}

	// Display the median 

	printf("Median: %d\n",numbers[3]); // middle element in sorted array

	// return 0 to indicate successful excecution 

	return 0; 
}