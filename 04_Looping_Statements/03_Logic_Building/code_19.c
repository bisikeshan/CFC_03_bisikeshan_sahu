// program to reverse a number using a while loop

// Header
#include <stdio.h>

int main()
{
	int num = 12345, reversed = 0; 

	while(num > 0 )
	{
		reversed = reversed * 10 + num % 10; 
		num /= 10; 
	}
	printf("Reversed number = %d\n",reversed);

	return (0);
}