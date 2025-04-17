/* S.G.M.P 
 * @file: code_26_01.c
 * @brief: calculate the percentage of pass and fail students
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 16-03-2025 5:12 PM
 */

// Headers
#include <stdio.h>

// Entry point function 
int main()
{
	int marks[10]; // declare an array to store marks of 10 students
	int pass = 0,fail = 0; // variable to store pass and fail counts
	int le; // loop variable

	// prompt user to enter marks
	printf("Enter marks of 10 students: \n"); 

	// loop to take input from the user
	for(le = 0; le < 10; le++)
	{
		 scanf("%d",&marks[le]); 
	}

	// loop to count pass and fail students 

	for(le = 0; le < 10; le++)
	{
		 if(marks[le] >= 40 )
		 {
		 	 pass++; 
		 }
		 else{
		 	 fail++; 
		 }
	}

	// calculate and display pass and fail percentages 

	printf("Pass percentage: %.2f %%\n",(pass/10.0)*100); 
	printf("fail percentage: %.2f %%\n",(fail/10.0)*100); 

	// return 0 to indicate successful excecution 

	return (0);


}