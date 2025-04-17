/* 7. Check if a Number is Prime
Concepts Used: Looping (for), Branching (if-else), Function
Problem Statement: Write a function that takes a number and checks if it is prime.
*/

// Headers
#include <stdio.h>

// function declaration 
void prime(int number);

// Entry point function 
int main()
{
	// function calls
    prime(10);
    prime(29);
    prime(9);
	return 0; 
}

// function definition 

void prime(int number)
{
	int IsPrime = 1; 
	for( int le = 2; le <= number/2; le++)
	{
		if(number % le == 0 )
		{
			IsPrime = 0; 
			break; 
		}
	}

	if(IsPrime)
	{
		printf("%d is a prime number\n",number);
	}
	else
	{
		printf("%d is not a prime number\n",number);
	}

}