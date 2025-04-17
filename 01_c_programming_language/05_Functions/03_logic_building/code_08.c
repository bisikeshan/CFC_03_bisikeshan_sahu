// program to calculate the fourth power of a number

// Headers

#include <stdio.h>

int fourth_power(int number)
{
   return number * number * number * number; 	
}

// Entry point function 
int main()
{
	int number = 3; 
	printf("fourth power: %d\n",fourth_power(number));
	return 0; 
}