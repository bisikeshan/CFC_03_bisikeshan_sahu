
/* 
  * S.G.M.P 
  * @file: code_03_03.c
  * @brief: store monthly bills and calculate total 
  * @author: bisikeshan sahu (bisikeshan567@gmail.com)
  * @date: 06-03-2025 12:43 PM 

 */ 
// Headers
#include <stdio.h>

// Entry point function 
int main()
{   
	// declare an array to store 12 months electricity bill 
    float bill[12];

    // variable to store total electricity bill 
    float total = 0; 

    // loop variable 
    int le = 0; 

    // user input 
    printf("Enter monthly electricity bill for the year\n");

    // loop for take 12 months electricity from ther user
    for(le = 0; le < 12; le++)
    {
    	scanf("%f",&bill[le]);
    }

    // loop to calculate  total electricity bill 

    for(le = 0; le < 12; le++)
    {
    	total += bill[le];
    }


    // display total electricity bill 

    printf("total electricity bill for the year : %.2f\n",total);

	return 0; 
}