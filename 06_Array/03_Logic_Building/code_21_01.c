/* S.G.M.P 
 * @file: code_21_01.c
 * @brief: check if an array is palindromic
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 13-03-2025 4:54 PM 
 */

// Headers
#include <stdio.h>

// Entry point function 
int main()
{
	 int numbers[5]; // declare an array to store 5 numbers
	 int le, flag = 1; // loop variable and flat to track palindrom status

	 // prompt user to enter 5 numbers;
	 printf("Enter 5 numbers: \n");  
	 for(le = 0; le < 5; le++)
	 {
	 	scanf("%d",&numbers[le]); 
	 }

	 // check if the array is palindromic
	 for(le = 0; le < 5/2; le++)
	 {
	 	 if(numbers[le] != numbers[4-le])
	 	 {
	 	 	 flag = 0; 
	 	 	 break; 
	 	 }
	 }

	 // display result 
	 if(flag)
	 {
	 	 printf("The array is palindromic.\n"); 
	 }
	 else
	 {
	 	 printf("The array is not pallindromic.\n"); 
	 }

	 // return 0 to indicate successful excecution 

	 return 0; 

}