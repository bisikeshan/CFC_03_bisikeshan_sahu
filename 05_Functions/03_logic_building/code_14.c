// program to convert decimal to binary

// Headers

#include <stdio.h>

void decimal_to_binary(int number)
{
	 if(number > 1)decimal_to_binary(number/2);
	 printf("%d",number % 2);
}

// Entry point function 
int main()
{
	 int number = 10; 
	 printf("Binary:"); 
	 decimal_to_binary(number);
	 printf("\n");
	 return 0; 
}