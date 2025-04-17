// Header file
#include <stdio.h>

// Entry point function
int main(void)
{
	int age = 12; 

	if( age <= 12)
	{
		printf("you need an child ticket\n");
	}
	else if( age >= 12 && age < 60)
	{
		printf("you need an adult ticket\n");
	}
	else if( age > 61)
	{
		printf("you need an senior citizen ticket");
	}

	return 0; 
}