/* Sum of Digits of a Number
Concepts Used: Looping (while), Function
Problem Statement: Write a function that takes an integer and returns the sum of its digits.
*/

// Headers
#include <stdio.h>

int main()
{
	int num = 4321; 
	int count = 0; 
	int result = 0; 

	for( int temp = num; temp > 0 ; count++ )
	{
		result += num/10; 
	}

	printf("%d",result);

	return 0; 
}