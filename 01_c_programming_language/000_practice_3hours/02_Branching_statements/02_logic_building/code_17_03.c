/* S.G.M.P 
 * @file: code_17_03.c
 * @brief:  This program checks if a person is eligible to get a driving license.
   In most countries, the minimum age to get a license is 18.
   If the age is 18 or more, the person is eligible.
 * @author: bisikeshan567@gmail.com (bisikeshan567@gmail.com)
 * @date: 22-04-2025 5:52pm 
 */

// Headers
#include <stdio.h>

// Entry point function 
int main(void)
{
	int age = 16; 
	if(age >= 18)
	{
		printf("you are eligible for driving license\n"); 
	}
	else
	{
		printf("you are not eligible for driving license\n"); 
	}

	return (0); 
}