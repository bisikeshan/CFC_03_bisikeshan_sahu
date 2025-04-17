// program to perform various bitwise operations 

// Headers
#include <stdio.h>

void bitwise_operations(int first_number,int second_number)
{
	printf("Bitwise NOT: %d %d\n",~first_number,~second_number);
}

// Entry point function 
int main()
{
	int first_number = 12, second_number = 5; 
	bitwise_operations(first_number, second_number);
	return 0; 
}