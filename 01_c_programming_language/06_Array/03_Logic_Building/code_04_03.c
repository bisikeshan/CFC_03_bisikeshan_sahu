
/* 
  * S.G.M.P 
  * @file: code_04_03.c
  * @brief: store and display prices of 10 products  
  * @author: bisikeshan sahu (bisikeshan567@gmail.com)
  * @date: 06-03-2025 12:56 PM 

 */

 // Headers
 #include <stdio.h>

 // Entry point function 
 int main()
 { 
    // declare an array to store 10 product prices
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
    
    // loop to print all product prices
    for(le = 0; le < 10; le++)
    {
       printf("%.2f\n",prices[le]); 
    }

    // return 0 to indicate successful excecution 
    
    return 0; 
 } 