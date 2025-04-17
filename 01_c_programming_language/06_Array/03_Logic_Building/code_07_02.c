// Headers
#include <stdio.h>

// Entry point function 
int main()
{   
	// declare an array to store 5 numbers
	int numbers[5]; 

	// loop variable 
	int le = 0; 

	// prompt for user input
	printf("Enter number: \n"); 

	// loop to take input from user 
	for(le = 0; le < 5; le++)
	{
		scanf("%d",&numbers[le]);
	}

    // display reverse number
    printf("reverse number: \n"); 
   
    // loop to reverse of an array
    for(le = 4; le >= 0; le--)
    {
    	printf("%d\n",numbers[le]); 
    }

    // return 0 for successful excecution 
    return 0; 


}