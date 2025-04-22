/* S.G.M.P 
 * @file: code_19_01.c
 * @brief: This program checks if a given year is a century year.
   A year is a century year if it is divisible by 100.
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 22-04-2025 10:19pm
 */

// Headers
#include <stdio.h>

// Entry point function 
int main(void)
{
	int year = 1800; 
	if(year % 100 == 0 )
	{
		printf("%d is a century year.\n",year); 
	}
	else
	{
		printf("%d is not a century year.\n",year);
	}

	return (0); 
}