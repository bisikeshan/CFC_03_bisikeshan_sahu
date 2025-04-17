/* S.G.M.P 
 * @file: code_16_01.c
 * @brief: store monthly expenses and calculate total and average 
 * @author: bisikeshan sahu ( bisikeshan567@gmail.com )
 * @date: 12-03-2025 8:44 am
 */

// Headers
#include <stdio.h>

// Entry point function 
int main()
{
    float expenses[12];// declare an array to store 12 expenses
    float  total = 0; // variable to store total expenses
    int le; // loop variable 

    // prompt user to enter monthy expenses
    printf("Enter montly expenses for a year:\n");

    // loop to take input from the user
    for(le = 0; le < 12; le++)
    {
    	 scanf("%f",&expenses[le]);
    }

    // loop to calculate total expenses

    for(le = 0; le < 12; le++)
    {
    	 total += expenses[le];
    }

    // display total and average expenses
    printf("Total expenses: %.2f\n",total);
    printf("Average monthly expenses: %.2f\n",total/12);

    // return 0 to indicate successful excecution 

    return 0; 
}
