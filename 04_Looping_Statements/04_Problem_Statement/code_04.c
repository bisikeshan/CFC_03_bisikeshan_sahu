 //Generate and Print the First N Square Numbers: Write a program to print the first N square numbers (1, 4, 9, 16, ...) using a loop.
// Headers
#include <stdio.h>

// Entry point function 
int main(void)
{
	int num = 10; 

	for(int le = 1; le <= num; le++)
	{
		printf("%d\n",le * le);
	}
	return 0; 
}