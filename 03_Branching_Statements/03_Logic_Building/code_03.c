// Header 
#include <stdio.h>

/* This program checks if a person is eligible to vote
   In most countries, the legal voting age is 18, 
   If the age is 18 or more, the person can vote,
   otherwise, they are not eligible.
   */
// entry point function 
int main(void)
{
	int age = 10; // Age of the person 

	if(age >= 18)
	{   // true block 
		printf("you are eligible to vote\n");
	}
	else
	{    // false block 
		printf("you are not eligible to vote\n");
	}
	return 0; 
}