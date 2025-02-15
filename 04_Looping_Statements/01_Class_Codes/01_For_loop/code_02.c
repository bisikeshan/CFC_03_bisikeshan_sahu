// Headers
#include <stdio.h>

// Entry point function 

int main(void)
{
	// code
	for( int le = 1; le <= 10; ++le)
	{
		// loop body
		if(5 == le )
			continue; 
		printf("le = %d\n",le);
	}
	return 0; 
}