// program to perform addition of two numbers

// Headers

#include <stdio.h>

int add_numbers (int first_numbers, int second_numbers)
{
	return first_numbers + second_numbers; 
}

// Entry point function 

int main()
{
	 int first_numbers = 10, second_numbers = 5; 
	 printf("Addition Result: %d\n",add_numbers(first_numbers,second_numbers));
	 return 0; 
}