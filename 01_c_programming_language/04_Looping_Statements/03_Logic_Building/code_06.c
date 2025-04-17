// program to calculate factorial using while loop.
// Headers
#include <stdio.h>

// Entry point function 
int main()
{
	int fact = 1, num = 5; 

	// initialization

	int le =1; 

	// terminating condition 
	
	while(le<= num)
	{
		// loop block 
		fact *= le;

		// increment / decrement
		le++;  
	}
	printf("%d",fact);

	return 0; 
}