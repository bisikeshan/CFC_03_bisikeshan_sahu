/*  Check if a Number is Palindrome
Concepts Used: Looping (while), Function
Problem Statement: Write a function that checks if a given number reads the same forward and backward.
*/
// 
// Headers
#include <stdio.h>

// function declaration 
void pallindrome(int number);

// Entry point function 
int main()
{
	// function call 
	pallindrome(121);
	pallindrome(232);
	pallindrome(123);

	return 0; 
}

// function definition 

void pallindrome(int number)
{
	int reversed = 0, temp = number; 
	
	while(temp > 0)
	{
		reversed = reversed * 10 + temp % 10; 
		temp /= 10; 
	}
	if(number == reversed)
	{
		printf("%d is a pallindrome\n",number);
	}
	else
	{
		printf("%d is not a pallindrome\n",number);
	}

}
