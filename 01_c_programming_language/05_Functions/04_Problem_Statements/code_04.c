/* Sum of Digits of a Number
Concepts Used: Looping (while), Function
Problem Statement: Write a function that takes an integer and returns the sum of its digits.
*/

// Headers
#include <stdio.h>

// data definitions

    int num = 4321; 
	int quotient = 0;  
	
	int result = 0; 

// function declaration 
int sum_of_digits(int num); 
int main()
{
    // function call 
    return_value = sum_of_digits(num);
    printf("%d",return_value);  
	return 0; 
}

// function definition 
int sum_of_digits(int num)
{
	int remainder = 0;
	while( num != 0 )
	{
		 quotient = num / 10; 
		 remainder = num % 10; 
		 result += remainder; 

		 num = quotient; 
	} 
    
    return(result);
}