// program to count the number of digits len a number using a while loop 

// Headers

#include <stdio.h>

// Entry point function 
int main()
{
	int num = 12345, count = 0; 
	while(num > 0)
	{
		num /= 10; 
		count++; 
	}
	printf("Total digits = %d\n",count);

	return 0; 
}