// program to find the sum of first 10 natural numbers using a while loop 
// Headers
#include <stdio.h>

// Entry point function
int main()
{
	int sum = 0; 
	// initialization

	int le = 0; 
   
    // terminating condition 
    while(le <= 10)
    {
    	// loop block
    	sum += le; 

    	// increment/decrement

    	le++; 
    }

    printf("%d\n",sum);

    return 0; 
}