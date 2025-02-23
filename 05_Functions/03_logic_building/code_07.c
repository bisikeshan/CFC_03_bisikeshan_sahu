// program to calculate the square of a number

// Header
#include <stdio.h>

int square_number(int number)
{
	return number * number; 
}

// Entry point function 
int main()
{
	int number = 6; 
	printf("square: %d\n",square_number(number));
	return 0; 
}