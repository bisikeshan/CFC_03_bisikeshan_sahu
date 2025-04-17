// Headers
#include <stdio.h>

/* This program determines the type of a triangle based on its three sides
   -Equilateral : All sides are equal 
   -Isoceles: Two sides are equal 
   -Scalene: No sides are equal 
   */

// Entry point function
int main(void)
{
	int a = 5, b = 5, c = 8; 
	if( a == b && b == c)
	{
		printf("The triangle is Equilateral.\n");
	}
	else if(a ==b || b ==c || a == c)
	{
		printf("The triangle is isoceles.\n");
	}
	else
	{
		printf("The triangle is scalene.\n");
	}

	return 0; 

}