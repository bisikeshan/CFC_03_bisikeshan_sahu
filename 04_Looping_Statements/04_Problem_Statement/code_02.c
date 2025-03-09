// Print the ASCII Values of Characters A to Z: Write a program to print the ASCII values of uppercase English letters (A to Z) using a loop.
// Headers
#include <stdio.h>

// Entry point function 
int main()
{
	for(char le = 'A'; le <= 'Z'; le++)
	{
		printf("%c ASCII value is %d \n",le,le);
	}
	return 0; 
}