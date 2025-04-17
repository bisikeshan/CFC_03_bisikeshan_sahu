/* S.G.M.P 
 * @file: code_01.c
 * @brief: Implementation of If else statements in c
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 16-04-2025 11:39PM 
 */

// Headers
#include <stdio.h>

// Entry point function 
int main(void)
{
	// code
	int inum1 = 10; 
	int inum2 = 10; 

	if(inum1 == inum2)
	{
		printf("inum1 is EQUAL to inum2\n");
	}
	else
	{
		printf("inum1 is NOT EQUAL to inum2\n");
	}

	if(inum1 < inum2)
	{
		printf("inum1 is less than inum2\n"); 
	}
    else
    {
    	printf("inum1 is not less than inum2\n"); 
    }

    if(inum1 > inum2)
    {
    	printf("inum1 is GREATOR THAN inum2\n"); 
    }
    else
    {
    	printf("inum1 is NOT GREATOR THAN inum2\n"); 
    }

    return(0); 
}