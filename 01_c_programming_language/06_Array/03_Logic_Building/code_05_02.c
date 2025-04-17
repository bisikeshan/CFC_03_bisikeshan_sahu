/* 
  * S.G.M.P 
  * @file: code_05_02.c
  * @brief: store and display weekly rainfall data  
  * @author: bisikeshan sahu (bisikeshan567@gmail.com)
  * @date: 06-03-2025 5:11 PM 

 */ 

// Headers
#include <stdio.h>

// Entry point functions
int main()
{  
    // declare an array to store rainfall for 7 days
    float rainfall[7]; 

    // loop variable 
    int le = 0; 

    // prompt user to enter rainfall data for a week 
    printf("Enter rainfall data for 7 days\n");

    // loop to take input from the user
    for(le = 0; le < 7; le++)
    {
        scanf("%f",rainfall[le]); 
    }

    // display the recorded rainfall data
    printf("Rainfall data: \n");

    // loop to print all rainfall values 

    for(le = 0; le < 7; le++)
    {
       printf("%.2f mm\n",rainfall[le]); 
    }

    // return 0 to indicate successful excecution 

    return 0; 
}