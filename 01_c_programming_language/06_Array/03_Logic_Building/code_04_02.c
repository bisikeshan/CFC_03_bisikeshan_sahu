
/* 
  * S.G.M.P 
  * @file: code_04_02.c
  * @brief: store and display prices of 10 products 
  * @author: bisikeshan sahu (bisikeshan567@gmail.com)
  * @date: 06-03-2025 12:44 PM 

 */ 

#include <stdio.h>

int main()
{
  // declare an array to store 10 prices of products
  float prices[10]; 
  // loop variable
  int le = 0; 

  // prompt user to enter prices of 10 products
  printf("Enter 10 product prices: \n"); 

  // loop to take input from the user
  for(le = 0; le < 10; le++)
  {
     scanf("%f",&prices[le]); 
  }

  // display the product prices
  printf("product prices:\n");

  // loop to print all product prices: 
  for(le = 0; le < 10 ; le++)
  {
     printf("%.2f\n",prices[le]);
  }

  // return 0 to indicate successful excecution 
  return 0; 
}

