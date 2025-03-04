// Headers
#include <stdio.h>

// Entry point functions

int main()
{
	// code
	int iarr[10]; 

	// store value in array

	for( int le = 0; le < 10; ++le)
	{
		iarr[le] = (le + 1) * 99; 
	}

	// print values of array 

	for( int le = 0; le < 10; ++le)
	{
		printf("iarr[%d] = %d\n",le,iarr[le]);
	}

	return 0; 
}