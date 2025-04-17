/* S.G.M.P 
 * @file: code_02.c
 * @brief: Implementation of if statements in c
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 *
 */

// Headers
#include <stdio.h>

// Entry point function 
int main(void)
{
   // code
	int inum1 = 12; 
	int inum2 = 12; 

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

	return (0); 
}