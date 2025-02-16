// program to print the fibonacci Series using a while loop

// Headers
#include <stdio.h>

int main()
{
	int n = 10, t1 = 0,t2 = 1,nextTerm,le = 1; 
	while( le<=n)
	{
		printf("%d\n",t1);
		nextTerm = t1 + t2; 
		t1 = t2; 
		t2 = nextTerm; 
		le++;
	}

	return 0; 
}