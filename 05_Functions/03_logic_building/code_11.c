// program to calculate the nth power of a number

// Headers

#include <stdio.h>
#include <math.h>

double nth_power(double base,int exponent)
{
	return pow(base, exponent);
}

// Entry point function 
int main()
{
	double base = 3; 
	int exponent = 4; 
	printf("Result: %.2f\n",nth_power(base,exponent));
	return 0; 
}