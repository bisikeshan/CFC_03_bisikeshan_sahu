/* S.G.M.P 
 * @file: code_06.c
 * @brief: 
 * Online Shopping Cart System
 * Problem Statement:
 * An e-commerce website needs a system to calculate the total cost of a customer's shopping cart. Write a program that:
 * Stores the prices of N items in a 1D array.
 * Computes the total bill amount.
 * Adds a 5% discount if the total exceeds a certain amount.
 * Identifies the most and least expensive items.
 * Real-Life Application:
 * Used in e-commerce platforms like Amazon, Flipkart, and Shopify.
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 27-03-2025 11:57PM 
 */

#include <stdio.h>

float prices[10]; // stores prices of 10 items
float total,highest_prices,lowest_prices,discount;

int main()
{
	printf("if amount greater than 500 than 5 %% discount applied\n"); 
    printf("Enter prices of 10 items: \n");

    for(int le = 0; le < 10; le++)
    {
       scanf("%f",&prices[le]);
       total += prices[le]; 
    }

    printf("total bill amount: %.2f rs\n",total); 

    highest_prices = lowest_prices = prices[0]; 

    for(int le = 1; le < 10; le++)
    {
    	if(prices[le] > highest_prices)
    	{
    		highest_prices = prices[le]; 
    	}

    	if(prices[le] < lowest_prices)
    	{
    		lowest_prices = prices[le]; 
    	}
    }

    // discount if amount is greater than 500 than 5% discount applied 

    // Discounted price = Original price - (Original price × discount / 100)

    float discount_price;

    if(total > 500)
    {

     discount_price = total - (total * 5 / 100);
     printf("5%% discount applied, amount to pay: %.2f rs\n",discount_price);  
    }

    printf("Highest item price: %.2f rs\n",highest_prices); 
    printf("least item price: %.2f rs\n",lowest_prices); 


	return 0; 
}