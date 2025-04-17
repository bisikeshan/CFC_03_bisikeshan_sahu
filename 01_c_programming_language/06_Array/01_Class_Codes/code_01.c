// Header
#include <stdio.h>

// Entry point function 
int main(void)
{
	// code
	int iarr[10] = {1,2,3,4,5,6,7,8,9,10}; // Initializer list Initialization 


	// print value of Array
	for(int le = 0; le < 10; ++le)
	{
		printf("iarr[%d] = %d\n",le,iarr[le]); 
	}

	return 0; 

}