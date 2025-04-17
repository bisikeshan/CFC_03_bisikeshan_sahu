/* S.G.M.P 
 * @file: code_02.c
 * @brief: Implementation of if else ladder in c
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 16-04-2025 12:15PM 
 */

// Headers
#include <stdio.h>

// Entry point function 
int main(void)
{
	// code
	int inum1 = 5; 
	int inum2 = 4; 
	if(inum1 == inum2)
	{
		printf("inum1 is EQUAL TO inum2\n"); 
	}
	else if(inum1 > inum2)
	{
		printf("inum1 is GREATOR THAN inum2\n"); 
	}
	else if(inum1 < inum2)
	{
		printf("inum1 is LESS THAN inum2\n"); 
	}
	else
	{
		printf("inum1 is no relation with inum2\n"); 
	}

	return (0); 
}