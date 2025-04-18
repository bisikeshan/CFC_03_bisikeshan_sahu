/* S.G.M.P 
 * @file: code_04_02.c
 * @brief: This program determines if a given number is even or odd.
   If a number is divisible by 2, it is even.
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 18-04-2025 11:14PM 
 */

// Headers 
#include <stdio.h>

// Entry point function 
int main(void)
{
	// local variable definition
	int inum = 13; 
	if(inum % 2 == 0)
	{
		printf("It is even number \n"); 
	}
	else
	{
		printf("It is odd number\n");
	}

	return (0); 
}