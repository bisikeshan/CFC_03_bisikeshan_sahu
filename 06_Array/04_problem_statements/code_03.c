/* S.G.M.P 
 * @file: code_03.c
 * 3. Stock Price Analysis
 * Problem Statement:
 * A stock market analyst wants to track stock prices for 10 days. Write a program that:	
 * Stores daily closing stock prices in a 1D array.
 * Finds and displays the highest and lowest prices.
 * Computes the average stock price over the period.
 * Determines the best day to sell and buy the stock for maximum profit.
 * Real-Life Application:
 * Helps investors and traders analyze stock trends.
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 25-03-2025 5:15 PM 
 */

#include <stdio.h>

int main()
{    
	// initializer list initialization
	float stockprices[10]; // varaible to store stock prices for 10 days
	float highestprices,lowestprices,sum,average;
	float bestday_sell,bestday_buy;
	int days,days_buy,days_sell; 
	float max_profit; 

    // prompt user to enter stock prices
    printf("Enter stock closing prices for 10 days: \n"); 

    
    // input for user
	for(int le = 0 ; le < 10; le++)
	{    
	    printf("DAY %d\n",le + 1); 
        scanf("%f",&stockprices[le]);
        sum += stockprices[le];  
	}


	// loop for higest lowest calculation and find best day to sell or buy

	highestprices = lowestprices = stockprices[0]; 

	for(int le = 1; le < 10; le++)
	{    

		if(stockprices[le] > highestprices)
		{
			 highestprices = stockprices[le];
		}

		if(stockprices[le] < lowestprices)
		{
			 lowestprices = stockprices[le];
		}
	}

    printf("Highest price: = %.2f\n",highestprices); 
    printf("Lowest price : = %.2f\n",lowestprices); 


    average = sum / 10; 

    printf("average: %.2f\n",average); 
    

   // code for best day to buy or sell 
    printf("  Day %d is best to buy and price of stock is %.2f\n",days_sell,highestprices); 
    printf("  Day %d is best to sell and price of stock is %.2f\n",days_buy,lowestprices); 

    max_profit = highestprices - lowestprices; 
    printf(" maximum profit: %.2f rs",max_profit);


   return(0);      

}