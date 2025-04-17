/* S.G.M.P 
 * @file: code_29_02.c
 * @brief: Analyze temperature data and find the hottest and coldest days
 * @author: bisikeshan sahu 
 * @date: 17-03-2025 
 */

// Headers
#include <stdio.h>

// Entry point function 
int main()
{
	 float temperatures[30]; // array to store temperaturs for a month
	 int days,le; // number of days and loop variable

	 float max_temp,min_temp; // variables to store hottest and coldest temperatures

	 // prompt user for numbers of arrays
	 printf("Enter number of days in the month:"); 
	 scanf("%d",&days); 

	 // check if the number of days is within range
	 if(days > 30 || days < 1)
	 {
	 	 printf("Invalid numbers of days ! Enter between 1 and 30.\n"); 
	 	 return (1); // exit with an error
	 }   

	 // loop to take temperature input

	 printf("Enter daily temperatures (in celsius): \n"); 

	 for(le = 0; le < days; le++)
	 {
	 	 scanf("%f",&temperatures[le]); 
	 }

	 // Initialize min and max with the first days temperature

	 max_temp = min_temp = temperatures[0]; 

	 for(le = 1; le < days; le++)
	 {
	 	 if(temperatures[le] > max_temp)
	 	 {
	 	 	 max_temp = temperatures[le]; 
	 	 }

	 	 if(temperatures[le] < min_temp)
	 	 {
	 	 	 min_temp = temperatures[le]; 
	 	 }
	 }

	 printf("Hottest temperature: %.2f\n",max_temp);
	 printf("lowest temperature: %.2f\n",min_temp); 

	 // return 0 to indicate successful excecution 

	 return 0; 
}