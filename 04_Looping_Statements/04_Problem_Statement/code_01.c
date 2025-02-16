// 1. Print the First N Odd Numbers: Write a program to print the first N odd numbers using a loop.

//Headers
#include <stdio.h>

// Entry point function 
int main()
{
	for(int le = 1; le <= 10; le++)
	{
		if( le % 2 != 0)
		{
			printf("%d\n",le);
		}
	}

	return 0; 
}