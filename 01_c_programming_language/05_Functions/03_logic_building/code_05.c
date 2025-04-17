// program to perform division of two numbers

// Headers

#include <stdio.h>

float divide_numbers(float numerator, float denominator)
{
	if(denominator == 0)
	{
		printf("Error! Division by zero is not allowed.\n");
		return 0; 
	}
    return numerator/denominator; 
}

// Entry point function 

int main()
{
	float numerator = 25.0, denominator = 5.0; 
	printf("Division Result: %2f\n",divide_numbers(numerator,denominator));
	return 0; 
}