/* S.G.M.P 
 * @file: code_05.c
 * @brief: 
 * Fitness Tracking - Step Counter
 * Problem Statement:
 * A fitness tracker records the daily step count of a user for a week. Write a program that:
 * Stores daily step counts in a 1D array.
 * Finds and displays the day with the highest and lowest steps.
 * Calculates the average steps per day.
 * Counts how many days the user met the goal of 10,000 steps.
 * Real-Life Application:
 * Used in fitness apps like Fitbit, Google Fit, and Apple Health.
 */

#include <stdio.h>

int step_count[7]; // declare an array to store 7 days step count
int highest_steps,lowest_steps,average_steps,count = 0,total; 

int main()
{
	// prompt user to enter steps for 7 days
	printf("Enter steps counts for 7 days: \n");
	
	// loop for calculate total and read the 7 days steps count

    for(int le = 0; le < 7; le++)
    {
       scanf("%d",&step_count[le]); 
       total += step_count[le]; 
    }

    // loop for calculate highest and lowest 

    highest_steps = lowest_steps = step_count[0]; 

    for(int le = 1; le < 7; le++)
    {
    	if(step_count[le] > highest_steps)
    	{
    		highest_steps = step_count[le]; 
    	}

    	if(step_count[le] < lowest_steps)
    	{
    		lowest_steps = step_count[le]; 
    	}
    }

    printf("Highest steps: %d\n",highest_steps); 
    printf("lowest steps: %d\n",lowest_steps); 

    average_steps = total / 7; 
    printf("average steps: %d\n",average_steps); 

    for(int le = 0; le < 7; le++)
    {
    	if(step_count[le] >= 10000)
    	 {
    	 	 count++; 
    	 }
    }

    printf("There are %d days the user met the goal of 10,000 steps.\n",count++); 


    return 0; 

}
