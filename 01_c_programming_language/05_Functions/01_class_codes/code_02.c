// Headers
#include <stdio.h>

// global variable definition
int result = 0; 

// Entry point function 
int main(void)
{
	// function declaration 
	void factorial(void);

	factorial(); 
	factorial(); 

	return 0; 

}

// factorial function definition 

void factorial(void)
{
	   // code
	result = 1; 
	for(int le = 1; le <= 5; le++)
	{
		result = result * le; 
	}

	printf("factorial of 5 = %d\n",result);
}