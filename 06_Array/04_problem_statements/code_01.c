/* S.G.M.P 
 * @file: code_01.c
 * @brief: 1. Weather Monitoring System
 * Problem Statement:
 * A meteorological department records daily temperature (in Celsius) for a month. You need to:

 * Store temperature data in a 1D array.
 * Find and display the highest and lowest temperatures recorded.
 * Compute and display the average temperature. 
 * Identify the days when maximum and minimum temperatures occurred.
 * Real-Life Application:
 * Used in climate monitoring systems to analyze weather patterns.
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 24-03-2025 10:29 PM 
 */ 

 #include <stdio.h>  // standard input output path 

 int main()
 {  

 	float temperature[30]; // declare an array to store 30 days temperature 
 	float highest,lowest; 
 	float max_temp; 
 	float min_temp;
 	float sum; 

 	int le; // loop variable 

 	printf("Enter temperature for 30 days: \n"); 
     
     // loop to take input from the user
    for(le = 0; le < 30; le++)
    {
 	  scanf("%f",&temperature[le]);
    }

    // initialize highest and lowest with first element
    highest = lowest = temperature[0]; 

    for(le = 1; le < 30; le++)
    {
    	if(temperature[le] > highest)
    	{
    		 highest = temperature[le];
     
    	}
    	if(temperature[le] < lowest)
    	{
    		 lowest = temperature[le]; 
    	
    	}
    }


    printf("HIGHEST TEMPERATURE : %.2f\n",highest); 
    printf("LOWEST TEMPERATURE: %.2f\n",lowest); 


    // average tempeature

    for(le = 0; le < 30; le++)
    {
    	sum += temperature[le]; 
    }

    printf("average temperature = %.2f\n",sum/30);

    max_temp = min_temp = temperature[0];

    for(le = 1; le < 30; le++)
    {
        if(max_temp > temperature[le])
        {
            max_temp = temperature[le]; 
        }

        if(min_temp < temperature[le])
        {
            min_temp = temperature[le]; 
        }
    }  
    printf(" maximum and minimum temperature: \n ");
    printf(" maximum temperature = %.2f\n",max_temp);
    printf(" minimum temperature = %.2f\n",min_temp); 

    return 0; 
 }