/* S.G.M.P 
 * @file: code_07_02.c
 * @brief:  This program checks if a person is a senior citizen.
   If the age is 60 or more, they are a senior citizen
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 19-04-2025 10:28am 
 */

// Headers
#include <stdio.h>

// Entry point function 
int main(void)
{
	// code
	// local variable definition
	int age = 65; 

	if(age >= 60)
	{
		printf("you are senior citizen\n");
	}
	else
	{
		printf("you are not senior citizen\n");
	}
    return(0); 
}