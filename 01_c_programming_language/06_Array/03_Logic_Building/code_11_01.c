/* 
 * S.G.M.P
 * @file: code_11_01.c
 * @brief: Find the smallest number in an array
 * @author: bisikeshan sahu ( bisikeshan567@gmail.com)
 * @date: 10-03-2025 10:25 am

 */

// Headers
#include <stdio.h>

// Entry point function 
int main()
{    
	 // declare an array to store 5 numbers
	 int numbers[6];
   
     // variable to store the smallest number
	 int smallest; 

	 // loop variable 
	 int le; 

	 // prompt user to enter 6 numbers
	 printf("Enter 6 numbers: \n");

	 // loop to take input from the user

	 for( le = 0; le < 6; le++)
	 {
	 	 scanf("%d",&numbers[le]);
	 }

	 // assume first element as the smallest

	 smallest = numbers[0];

	 // loop to find the smallest numbers

	 for(le = 1; le < 6; le++)
	 {
	 	 if(numbers[le] < smallest)
	 	 {
	 	 	 smallest = numbers[le];
	 	 }
	 }

	 // Display the smallest number
	 printf("smallest number: %d\n",smallest);

	 // return 0 indicate successful indication 

	 return 0; 


}