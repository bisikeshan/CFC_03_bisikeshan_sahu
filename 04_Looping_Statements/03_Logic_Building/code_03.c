// program to find the sum of first 10 natural numbers using a for loop
// Headers
#include <stdio.h>

 // Entry pointf function
int main()
{
	  int sum = 0; 
	  for( int le = 1; le <= 10; le++)
	  {
	  	 sum += le; 
	  }
	  printf("%d\n",sum);

	  return 0; 
}