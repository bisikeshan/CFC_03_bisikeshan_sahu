/* S.G.M.P 
 * @file: code_15_01.c
 * @brief: This program checks if a given number is positive, negative, or zero.
   It prints the appropriate message based on the value of the number.
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 22-04-2025 
 */

// Headers
#include <stdio.h>

// Entry point function 
int main(void)
{
	int num = -5; 
	if(num > 0)
	{
		printf("number is positive\n"); 
	}
	else if(num < 0)
	{
		printf("number is negative\n"); 
	}
	else
	{
		printf("number is zero\n"); 
	}

	return (0); 
}