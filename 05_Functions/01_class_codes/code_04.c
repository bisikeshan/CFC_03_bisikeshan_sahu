// Headers
#include <stdio.h>

// Global variable definitions
int result = 0; 

// Entry point function

int main(void)
{
	 // function declaration
	 int factorial(int in_value);

	 // variable definition
	 int return_value = 0; 

	 // code
	 return_value = factorial(5); 
	 printf("factorial of 5 = %d\n",return_value);

	 return_value = factorial(10);
	 printf("factorial of 10 = %d\n",return_value);

	 return_value = factorial(12); 
	 printf("factorial of 12 = %d\n",return_value);

	 return(0);
}

// factorial function definition

int factorial(int in_value)
{
	 // code
	result = 1; 

	for(int le = 1; le <= in_value; ++le)
	{
		result = result * le; 
	}

	return(result);
}