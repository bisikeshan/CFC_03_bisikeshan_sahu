/* S.G.M.P 
 * @file: code_04.c
 * @brief: Monthly Electricity Bill Tracker
 * Problem Statement:
 * A household tracks its electricity consumption cost for a year. Write a program that:
 * Stores monthly electricity bill amounts in a 1D array.
 * Computes the total electricity expense for the year.
 * Identifies the month with the highest and lowest bill.
 * Calculates the average monthly bill.
 * Real-Life Application:
 * used in home budget planning and utility expense tracking.
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 26-03-2025 10:12 PM 
 */

 #include <stdio.h>

 float electricity_bill[12]; // declare a variable to store electicity  cost for 12 months
 float total,lowest_bill,highest_bill,average; 

 int main()
 {
 	printf("Enter electricity bill for 12 months: \n"); 
    for(int le = 0; le < 12; le++)
    {
    	scanf("%f",&electricity_bill[le]); 
    	// calculate total bill
    	total += electricity_bill[le]; 
    }

    // display total bill 
    printf("total electricity expense for the year: %.2f\n",total); 

    // loop to calculate higest and lowest bill

    highest_bill = lowest_bill = electricity_bill[0]; 
    for(int le = 1; le < 10; le++)
    {
        if( electricity_bill[le] > highest_bill)
        {
        	highest_bill = electricity_bill[le]; 
        }

        if( electricity_bill[le] < lowest_bill)
        {
        	lowest_bill = electricity_bill[le]; 
        }
    }

    printf("Highest bill: %.2f rs\n",highest_bill); 
    printf("lowest bill: %.2f rs\n",lowest_bill); 
    printf("Average: %.2f\n",total/12); 



    return (0); 


 }