// Headers
#include <stdio.h>

// global variable definition 
int result = 0; 

// Entry point function 

int main(void)
{
	  // function declaration 
	void factorial(int in_value);

	  // code
	factorial(4); 
	factorial(5); 
	factorial(10);

	return(0); 
}

// factorial function definition

void factorial(int in_value)
{
	// code
	result = 1; 

	for(int le = 1; le <= in_value; ++le)
	{
		result = result * le; 
	}

	printf("factorial of %d = %d\n",in_value,result);

}
