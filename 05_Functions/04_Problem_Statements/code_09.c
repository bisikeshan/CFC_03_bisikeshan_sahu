/* Print Fibonacci Series up to N Terms
Concepts Used: Looping (for), Function
Problem Statement: Write a function that prints the Fibonacci series up to N terms, where N is user-defined.
*/

// Headers
#include <stdio.h>

// function declaration 
void fibonacci_series(int number);

// Entry point function 
int main()
{   
	fibonacci_series(10);
	fibonacci_series(11);
	fibonacci_series(12);
	return 0; 
}

// function definition 

void fibonacci_series(int number)
{
	 int t1 = 0,t2 = 1,nextTerm; 

	 for(int le = 1; le <= number; le++)
	 {
	 	 printf("%d ",t1);
	 	 nextTerm = t1 + t2; 
	 	 t1 = t2; 
	 	 t2 = nextTerm; 
	 }

	 printf("\n");
}
