//program to perform subtraction of two numbers.

// Headers
#include <stdio.h>

int subtract_numbers(int first_number, int second_number)
{
	return first_number - second_number; 
}

// Entry point function 
int main()
{
	  int first_number = 20, second_number = 8; 
	  printf("subtraction result: %d\n",subtract_numbers(first_number,second_number));
	  return 0; 
}