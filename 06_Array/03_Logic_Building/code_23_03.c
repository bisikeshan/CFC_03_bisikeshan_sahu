/* S.G.M.P 
 * @file: code_23_03.c
 * @brief: find the highest and lowest temperatures
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 15-03-2025 4:40 PM 
 */

// Headers
#include <stdio.h>

// Entry point function 
int main()
{
	 float temperatures[7];
	 // declare an array to store 7 temperatures

	 float highest,lowest; 
    // variables to store highest and lowest temperatures

	 int le; // loop variable

	 // prompt user  to enter temperature: 
	 printf("Enter Temperature for 7 days:\n"); 

	 // loop to take input from the user

	 for(le = 0; le < 7; le++)
	 {
	 	 scanf("%f",&temperatures[le]); 
	 }

	 // initialize highest and lowest with first element
	 highest = lowest = temperatures[0]; 

	 // loop to find the highest and lowest temperatures
    
     for(le= 1; le < 7; le++)
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

     // display the highest and lowest temperatures
     printf("Highest Temperature: %.2f\n",highest); 
     printf("lowest Temperature: %.2f\n",lowest); 

     // return 0 to indicate successful excecution 

     return 0; 
}