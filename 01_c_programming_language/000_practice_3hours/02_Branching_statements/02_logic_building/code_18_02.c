/* S.G.M.P 
 * @file : code_18_02.c
 * @brief:   This program checks if a given number is divisible by both 3 and 5.
   If the number is divisible by both, it prints a message.
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 22-04-2025 22:06pm 
 */

// Headers
#include <stdio.h>

// Entry point function 
int main(void)
{
	int num = 12; 
	if(num % 3 == 0 && num % 5 == 0)
	{
		printf("number is divisible by both 3 and 5\n"); 
	}
	else
	{
		printf("number is not divisible by both 3 and 5\n"); 
	}

	return (0); 
}