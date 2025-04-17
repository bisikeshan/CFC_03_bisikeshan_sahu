/* S.G.M.P
 * @file: code_13_03.c
 * @brief: find product of all element in an array 
 * @author: biskeshan sahu (biskeshan567@gmail.com)
 * @date: 10-03-2025 1:24 PM 
 */

// Headers
#include <stdio.h>

// Entry point function 
int main()
{
   // declare an array to store 5 numbers
   int numbers[5];

   // declare a variable to store product of all elements in an array
   int product = 1; 

   int le; // loop variable 

   // prompt user to take input from the user
   printf("Enter 5 numbers: \n");

   // loop for take input from the user
   for(le = 0; le < 5; le++)
   {
   	 scanf("%d",&numbers[le]);
   } 

   // loop for calculate product of all numbers in an array

   for(le = 0; le < 5; le++)
   {
   	 product *= numbers[le];
   }

   // display output
   printf("product is: %d\n",product);

   // return 0 to indicate successful excecution 

   return 0; 
}