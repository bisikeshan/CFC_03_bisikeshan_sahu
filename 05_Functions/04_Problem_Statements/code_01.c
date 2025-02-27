/* 1. Check if a Number is Even or Odd
Concepts Used: Branching (if-else), Function
Problem Statement: Write a C program that takes an integer as input and checks whether it is even or odd using a function. */

// Headers

#include <stdio.h>


// return_type function_identifier(params); = function declaration 

void even_or_odd(int number);

// Entry point function 
int main()
{
     // function call
	even_or_odd(5);
	even_or_odd(10);
	even_or_odd(12);

	return 0; 
}

// function declarator + function body = function definition 

void even_or_odd(int number)
{
	if(number % 2 == 0)
	{
		printf("NUMBER IS EVEN!\n");
	}
	else
	{
		printf("NUMBER IS ODD\n");
	}
	 
}