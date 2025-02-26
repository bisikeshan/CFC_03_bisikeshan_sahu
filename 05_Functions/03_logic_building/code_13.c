// program to reverse a number

// Headers

#include <stdio.h>

int reverse_number(int number)
{
	int reversed = 0; 
	while(number != 0)
	{
		reversed = reversed * 10 + number % 10; 
		number /= 10; 
	}

	return reversed; 
}

// Entry point function 

int main()
{
	int number = 1234; 
	printf("Reversed number: %d\n",reverse_number(number));
	return 0; 
}