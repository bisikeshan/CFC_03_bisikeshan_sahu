/* S.G.M.P 
 * @file: code_03.c
 * @brief: Implementation of if statement in c
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 16-04-2025 10:45am 
 */

// Headers
#include <stdio.h>

// Entry point function 
int main(void)
{   
	// code 
	int inum1 = 9; 
	int inum2 = 10; 

	if(inum1 == inum2)
	{
		printf("inum1 is EQUAL to inum2\n"); 
	}

	if(inum1 > inum2)
	{
		printf("inum1 is GREATOR THAN inum2\n"); 
	}

	if(inum1 < inum2)
	{
		printf("inum1 is LESS THAN inum2\n"); 
	}

	return(0); 
}