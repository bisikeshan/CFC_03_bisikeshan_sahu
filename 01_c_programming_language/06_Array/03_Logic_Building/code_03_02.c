
/* 
  * S.G.M.P 
  * @file: code_03_02.c
  * @brief: store monthly bills and calculate total 
  * @author: bisikeshan sahu (bisikeshan567@gmail.com)
  * @date: 06-03-2025 12:43 PM 

 */ 
// Header
#include <stdio.h>

// electricity bills 

int main()
{     
	// declare an array to store 12 months
	 float bill[12]; 

	 // variable to store total bill amount
	 float total = 0; 

	 // loop variable 
	 int le = 0; 

	 // prompt use to enter monthly electricity bills
	 printf("Enter monthly electricity bills for a year:\n"); 

	 // loop to take input from the user

	 for(le = 0; le < 12; le++)
	 {
	 	scanf("%f",&bill[le]);
	 }

	 // loop to calculate total bill amount

	 for(le = 0; le < 12; le++)
	 {
	 	total += bill[le];
	 }

	 // display the total electricity for the year 

	 printf("Total electricity bill for the year: %.2f\n",total); 

    
     // return 0 to indicate successful excecution 
     return 0; 

}