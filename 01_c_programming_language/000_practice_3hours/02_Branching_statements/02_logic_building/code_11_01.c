/* S.G.M.P 
 * @file: code_11_01.c
 * @brief: This program determines the price of a movie ticket based on age.
   - Age < 12: Child ticket
   - Age 12-59: Adult ticket
   - Age 60+: Senior citizen ticket 
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 22-04-2025 3:15 PM 
 */

// Headers
#include <stdio.h>

// Entry point function 
int main(void)
{    
	// code
	// local variable definition 
	int age = 11; 

	if(age < 12)
	{
		printf("child ticket\n"); 
	}
	else if(age >= 12 && age <= 59)
	{
		printf("Adult tickets\n"); 
	}
	else 
	{
		printf("Senior citizen tickets\n"); 
	}

  
	return (0); 
}