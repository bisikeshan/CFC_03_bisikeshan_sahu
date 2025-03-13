/* S.G.M.P 
 * @file: code_22_02.c
 * @brief: store and display employee salaries
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 13-03-2025 5:32 PM 
 */

// Headers
#include <stdio.h>

// Entry point function 
int main()
{
	 float salaries[5]; // declare an array to store salaries of 5  employee
	 int le; // loop variable 

	 // prompt user to enter salaries
	 printf("Enter salaries of 5 employees: \n"); 

	 // loop to take input from the user

	 for(le = 0; le < 5; le++)
	 {
	 	scanf("%f",&salaries[le]); 
	 }

	 // display the salaries
	 printf("salaries of employees: \n"); 

	 // loop to print all salaries

	 for(le = 0; le < 5; le++)
	 {
	 	printf("%.2f\n",salaries[le]); 
	 }

	 // return 0 to indicate successful excecution 

	 return 0; 
}