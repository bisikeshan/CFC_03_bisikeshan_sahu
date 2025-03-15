/* S.G.M.P 
 * @file: code_24_01.c
 * @brief: store and find the most expensive product
 * @author: bisikeshan sahu (biskeshan567@gmail.com)
 * @date: 15-03-2025 4:48 PM 
 */

// Headers
#include <stdio.h>

// Entry point function 
int main()
{
	float prices[6]; // declare an array to store 6 product prices
	float max_price; // variable to store maximum price
	int le; // loop variable

	// prompt user to enter product prices
	printf("Enter prices of 6 products: \n"); 

	// loop to take input from the user

	for(le = 0; le < 6; le++)
	{
		scanf("%f",&prices[le]);
	}

	// Assumse the first product as the most expensive
	max_price = prices[0]; 

	// loop to find the most expensive product 

	for(le= 1; le < 6; le++)
	{
		 if(prices[le] > max_price)
		 {
		 	 max_price = prices[le]; 
		 }
	}

	// display the most expensive product price

	printf("Most expensive product price: %.2f\n",max_price); 

	// return 0 to indicate successful excecution 

	return 0; 
 }
