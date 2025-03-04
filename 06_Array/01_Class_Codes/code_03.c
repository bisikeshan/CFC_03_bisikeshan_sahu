// Headers
#include <stdio.h>

// Entry point functions 
int main(void)
{
	 // code
	int iarr[10]; 

	 iarr[0] = 10; 
	 iarr[1] = 20; 
	 iarr[2] = 30; 
	 iarr[3] = 40; 
	 iarr[4] = 50; 
	 iarr[5] = 60; 
	 iarr[6] = 70; 
     iarr[7] = 80; 
     iarr[8] = 90; 
	 iarr[9] = 100; 

	// print value of iarr

	for(int le = 0; le < 10; le++)
	{
		printf("iarr[%d] = %d\n",le,iarr[le]);
	}

	return 0; 
}