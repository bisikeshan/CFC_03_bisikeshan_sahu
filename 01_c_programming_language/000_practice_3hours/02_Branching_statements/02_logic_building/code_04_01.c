/* S.G.M.P 
 * @file: code_04_01.c
 * @brief:    This program determines if a given number is even or odd.
   If a number is divisible by 2, it is even.
   Otherwise, it is odd.
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 17-04-2025 11:51PM
 */

// Headers
#include <stdio.h>

// Entry point function 
int main(void)
{
	// code
	// local variable definition
	int num = 10; 
	if(num % 2 == 0)
	{
		printf("It is a even number\n"); 
	}
	else
	{
		printf("It is a odd number\n"); 
	}

	return (0); 
	
}