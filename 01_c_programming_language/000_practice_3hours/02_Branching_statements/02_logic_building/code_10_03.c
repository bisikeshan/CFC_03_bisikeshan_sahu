/* S.G.M.P 
 * @file: code_10_03.c
 * @brief:    This program checks if three given angles form a valid triangle.
   The sum of the three angles must be exactly 180 degrees.
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 19-04-2025 1:26PM 
 */

// Headers
#include <stdio.h>

// Entry point function 
int main(void)
{
	// local variable definition
	int angle1 = 10 , angle2 = 30 , angle3 = 50;
	if(angle1 + angle2 + angle3 == 180)
	{
		printf("These angles form a valid triangle\n"); 
	}
	else
	{
		printf("These angles is not form a valid triangle\n"); 
	}

	return (0); 

}