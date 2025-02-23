// program to calculate the remainder of division between two numbers
// Header

#include <stdio.h>

int calculate_remainder(int dividend,int divisor)
{
	return dividend % divisor; 
}

// Entry point function 
int main()
{
	int dividend = 17, divisor = 4; 
	printf("Remainder: %d\n",calculate_remainder(dividend,divisor));
	return 0; 
}