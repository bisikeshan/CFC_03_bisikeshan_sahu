/* S.G.M.P 
 * @file: code_15_03.c
 * @brief: This program checks if a given number is positive, negative, or zero.
   It prints the appropriate message based on the value of the number.
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 22-04-2025 4:47pm 
 */

// Headers
#include <stdio.h>

// Entry point function 
int main(void)
{
	int num = 1; 
	if(num > 0 )
	{
		printf("numbers is positive\n"); 
	}
	else if(num < 0 )
	{
		printf("numbers is negative\n"); 
	}
	else
	{
		printf("numbers is zero\n"); 
	}

	return (0); 
}