//Headers
#include <stdio.h>

// variable Definition
int inum1 = 10; 
int inum2 = 10; 

// Entry point function

int main(void)
{
	// code
	if(inum1 == inum2) // condition
	{
		// True Block 1
		printf("inum1 is EQUAL To inum2\n");
	}
	else if (inum1 < inum2)
	{
		// True Block 2
		printf("inum1 is LESS THAN To inum2\n");
	}
	else if( inum1 > inum2)
	{   // True Block 3
		printf("inum1 is GREATOR THAN TO inum2\n");
	}
	else
	{
		// False Block
		printf("inum1 is no relation with inum2\n");
	}
}