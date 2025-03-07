/* 
  * S.G.M.P 
  * @file: code_04_01.c
  * @brief: store and display prices of 10 products
  * @author: Bisikeshan sahu (bisikeshan567@gmail.com)
  * @date: 06-03-2025

  */
// Headers
#include <stdio.h>

// Entry point function 
int main()
{  
	// declare an array to store 10 product prices
	float prices[10];

	int le; 
	// loop variable

	// prompt user to enter prices fo 10 products 
	printf("Enter 10 product prices \n");  

    // loop to take input from the user
    for(le = 0; le < 10; le++)
    {
     scanf("%f",&prices[le]); 
    }

    // display 10 prices which store in price[10] array

    printf("product price: \n");

    for(le = 0; le < 10; le++)
    {
    	printf("%.2f\n",prices[le]); 

    }
	return 0; 
}