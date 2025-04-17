/* 
  * S.G.M.P 
  * @file: code_05_03.c
  * @brief: store and display rainfall data  
  * @author: bisikeshan sahu (bisikeshan567@gmail.com)
  * @date: 06-03-2025 5:28 PM 

 */ 

// Headers
#include <stdio.h>

// Entry point function 
int main()
{    
    // declare an array to store rainfall for 7 days
    float rainfall[7]; 

    // loop variable 
    int le; 

    // prompt user to enter rainfall data for a week 

    printf("Enter rainfall data for 7 days:\n"); 

    // loop to take input from the user

    for(le = 0; le < 7; le++)
    {
       scanf("%f",&rainfall[le]);
    }

    // display recorded rainfall data
    printf("rainfall data :\n"); 

    // loop to print all rainfall values
    for(le = 0; le < 7; le++)
    {
       printf("%.2f mm\n",rainfall[le]);
    }

    // Return 0 to indicate successful excecution 

    return (0);


}