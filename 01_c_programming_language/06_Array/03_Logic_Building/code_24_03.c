/* S.G.M.P 
 * @file: code_24_03.c
 * @brief: store and find the most expensive product
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 15-03-2025 4:56 PM 
 */

// Headers
#include <stdio.h>

// Entry point function 
int main()
{
	 float price[6]; // declare an array to store 6 prices: 
	 float max_price; // variable to store maximum price: 

	 int le; // loop variable 

	 // prompt user to take input from the user
     printf("Enter prices of 6 product:\n"); 

     // loop to take input from the user

     for(le= 0; le < 6; le++)
     {
     	 scanf("%f",&price[le]); 
     }

     // Assume the first product as the most expensive 

     max_price = price[0]; 

     // loop to find the most expensive product 

     for(le= 1; le < 6; le++)
     {
     	 if(price[le] > max_price)
     	 {
     	 	 max_price = price[le]; 
     	 }
     }

     // display the most expensive product price

     printf("Most expensive product price: %.2f\n",max_price); 

     // return 0 to indicate successful excecution 

     return 0; 
}