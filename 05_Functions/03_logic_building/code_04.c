// program to perform multiplication of two numbers

// Headers
#include <stdio.h>

int multiply_numbers(int first_number,int second_number)
{
	return first_number * second_number; 
}

// Entry point function 
int main()
{
	int first_number = 5, second_number = 10; 
	printf("Multiplication Result: %d\n",multiply_numbers(first_number,second_number));
	return 0; 
}