// program to print multiplication table of 5 using while loop
// Headers
#include <stdio.h>

// Entry point function 
int main()
{
	// initialization 
	int le = 1; 

    // termination condition 
	while( le <= 10)
	{
		printf("5 * %d = %d\n",le,5*le);
  
    // increment / decrement
		le++; 
	}

	return 0; 
}