/* Sum of Digits of a Number
Concepts Used: Looping (while), Function
Problem Statement: Write a function that takes an integer and returns the sum of its digits.
*/

// Headers
#include <stdio.h>

int main()
{
	int num = 4321; 
	int quotient = 0;  
	int remainder = 0;
	int result = 0; 

	while( num != 0 )
	{
		 quotient = num / 10; 
		 remainder = num % 10; 
		 result += remainder; 

		 num = quotient; 
	} 

	printf("%d",result);

	return 0; 
}