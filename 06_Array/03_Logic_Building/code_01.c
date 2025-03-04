// store and display daily temperatures for a week
// Headers
#include <stdio.h>

// Entry point function 
int main()
{
	// declare an array to stores temperature for 7 days
    float temp[7];

    // loop variable 
    int le; 

    // prompt user to temperatures for 7 days

    printf("Enter temperature for 7 days:\n");

    // loop to take input from the user 

    for(le = 0; le < 7; le++)
    {
    	scanf("%f",&temp[le]);
    }

    printf("Temperatur recorded: \n"); 

    // loop to print all temperatures stored in the array

    for(le = 0; le < 7; le++)
    {
    	printf("%f\n",temp[le]);
    }

	return 0; 
}