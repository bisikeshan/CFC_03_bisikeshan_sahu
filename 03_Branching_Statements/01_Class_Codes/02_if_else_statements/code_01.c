// Header
#include <stdio.h>

// variable definition

int inum1 = 14; 
int inum2 = 15; 

// Entry point function

int main(void)
{
	 // code
	if( inum1 == inum2)
	{
		 // True Block
		printf("inum1 is EQUAL To inum2\n"); 
	}
    else
    {
    	// false Block
    	printf("inum1 is NOT EQUAL To inum2\n");
    }

    if( inum1 > inum2)
    {
    	printf("inum1 is GREATOR THAN inum2\n");
    }
    else
    {
    	printf("inum1 is NOt GREATOR THAN inum2\n");
    }
    if(inum1 < inum2)
    {
    	printf("inum1 is LESS THAN inum2\n");
    }
    else
    {
    	printf("inum1 is NOT LESS THAN inum2\n");
    }

    return 0; 
}