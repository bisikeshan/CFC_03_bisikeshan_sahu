// headers
#include <stdio.h>

int main()
{
	// declare an array for to store temperatures for 7 days
	float temp[7];

	// loop variable 
    int le; 
    
    // loop of array to take input temperatur for 7 days
    printf("Enter temperature for 7 days\n"); 

    for(le = 0; le < 7; le++)
    {
    	scanf("%f",&temp[le]);
    }

    // loop of array to print recorded temperature
    printf("temperature recorded:\n"); 

    for(le = 0; le < 7; le++)
    {
    	printf("%.2f",temp[le]); 
    }

    return 0; 
}