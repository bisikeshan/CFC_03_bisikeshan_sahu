// program to calculate the fifth power of a number 
// Headers
#include <stdio.h>

int fifth_power(int number)
{
	return number * number * number * number * number; 
}

// Entry point function 
int main()
{
	int number = 2; 
	printf("fifth power: %d\n",fifth_power(number));
	return 0; 
}