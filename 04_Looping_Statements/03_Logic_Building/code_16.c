// program to print the fibonacci series using a for loop

// Headers
#include <stdio.h>

// Entry point function 
int main()

{
	 int n = 10, t1 = 0, t2 = 1, nextTerm; 
	 for(int le = 1; le <= n; le++)
	 {
	 	printf("%d\n",t1);
	 	nextTerm = t1 + t2; 
	 	t1 = t2; 
	 	t2 = nextTerm; 
	 }

	 return 0; 
}