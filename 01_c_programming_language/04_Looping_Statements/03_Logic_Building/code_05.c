// program to calculate factorial using a for loop 
// Headers
#include <stdio.h>

// Entry point function 
int main()
{

	int num = 5, fact = 1; 

	for(int le = 1; le <= 5; le++)
	{
		fact *= le; 
	}
	printf("%d\n",fact);
  
    return 0; 
}