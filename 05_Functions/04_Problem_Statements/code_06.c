/* 6. Reverse a Number
Concepts Used: Looping (while), Function
Problem Statement: Write a function that takes an integer and returns its reverse.
*/

// Headers
#include <stdio.h>

// function declaration 
int reverse(int number);

// Entry point function 
int main()
{
	int return_value = 0; 

	return_value = reverse(12345);
	printf(" Reversed number = %d\n",return_value);

	return_value = reverse(567845);
	printf(" Reversed number = %d\n",return_value);
    
	return 0; 
}

// function definition 

int reverse(int number)
{
	int reversed = 0; 
	while(number > 0)
	{
		 reversed = reversed * 10 + number % 10; 
		 number /= 10; 
	}

	return(reversed);
}
