/* S.G.M.P 
 * @file: code_14_03.c
 * @brief:  This program checks if a person is eligible for a senior citizen discount.
   In many places, the discount is available for people aged 60 and above.
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 22-04-2025 4:38PM 
 */

// Headers
#include <stdio.h>

// Entry point function 
int main(void)
{
	int age = 55; 
	if( age >= 60)
	{
		printf("you are eligible for senior citizen discount\n"); 
	}
	else
	{
		printf("you are not eligible for senior citizen discount\n"); 
	}

	return (0); 
}