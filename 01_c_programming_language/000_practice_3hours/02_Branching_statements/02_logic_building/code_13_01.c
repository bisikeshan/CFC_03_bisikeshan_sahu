/* S.G.M.P 
 * @file: code_13_01.c
 * @breif:  This program determines the type of a triangle based on its three sides.
   - Equilateral: All sides are equal
   - Isosceles: Two sides are equal
   - Scalene: No sides are equal
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 22-04-2025 4:02PM 
 */

// Headers
#include <stdio.h>

// Entry point function 
int main(void)
{
	// local variable defintion
	int a = 5 ,b = 5, c = 9; 
	if(a == b && b == c)
	{
		printf("The triangle is equilateral triangle\n"); 
	} 
	else if( a == b || b == c || c == a)
	{
		printf("The triangle is equilateral triangle\n"); 
	}
	else 
	{
		printf("The triangle is scalene triangle\n"); 
	}

	return (0); 
}