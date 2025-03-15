/* S.G.M.P 
 * @file: code_24_01.c
 * @brief: store and find the most expensive product
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 15-03-2025 5:05 PM 
 */

// Headers
#include <stdio.h>

// Entry point function 
int main()
{
	 float prices[6]; // declare an array to store 6 prices
	 float max_price; // variable to store maximum price 
     int le; // loop variable 

     // promt user to enter product prices: 
     printf("Enter prices of 6 product: \n"); 

     // loop to take input fromt the user
     for(le = 0; le < 6; le++)
     {
     	scanf("%f",&prices[le]); 
     }

     // Assume the first product as the most expensive 
     max_price = prices[0]; 

     // loop to find the most expensive product

     for(le = 1; le < 6; le++)
     {
     	 if(prices[le] > max_price)
     	 {
     	 	 max_price = prices[le]; 
     	 }
     }

     // Display the most expensive product price
     printf("Most expensive product price: %.2f\n",max_price); 

     // Return 0 to indicate successful excecution 

     return (0);
}