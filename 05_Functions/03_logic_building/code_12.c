// program to calculate factorial of a number
// Headers 

#include <stdio.h>

long long factorial(int number)
{
	if(number == 0 || number == 1)return 1; 
	return number*factorial(number - 1);
}

// Entry point function 
int main()
{
	 int number = 5; 
	 printf("factorial: %lld\n",factorial(number));
	 return 0; 
}
