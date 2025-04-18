/* S.G.M.P 
 * @file: code_05_01.c
 * @brief:  This program finds the greatest of two given numbers.
   It compares the two numbers and prints the larger one.
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 18-04-2025 11:22 PM 
 */

// Header
#include <stdio.h>

// Entry point function 
int main()
{
	int a = 10, b = 11; 
	if(a > b)
	{
		printf("The greatest number is %d\n",a); 
	}
	else
	{
		printf("The greatest number is %d\n",b); 
	}

	return (0);
}