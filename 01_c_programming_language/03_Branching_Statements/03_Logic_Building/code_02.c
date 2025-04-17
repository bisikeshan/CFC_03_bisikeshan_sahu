// Headers
#include <stdio.h>
/* This program stimulates a traffic light system.
   The traffic light can be Red(R), yellow(y), or Green(G)
   Depending on the light color, the program prints the approprite action */

// Entry point function
int main(void)
{
	char light = 'R'; // 'R' for Red, 'Y' for yellow , 'G'for Green

	if(light == 'R')
	{
		// True Block 1
		printf("stop!\n");
	}
	
	else if(light == 'Y')
	{
	     // True Block 2
		printf("Get Ready!\n");
	 }
	else if(light == 'G')
	    {
	      // True Block 3
			printf("Go!\n");
	     }
	
	
	return 0; 
}

 