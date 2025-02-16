// program to find GCD greatest common divisor of two numbers using a while loop 

// Headers
#include <stdio.h>

// Entry point function 
int main()
{
	  int a = 56, b = 98; 
	  while( a!= b)
	  {
	  	  if( a > b)
	  	  
	  	  	 a -= b; 
	  	  
	  	  else
	  	  
	  	  	 b -= a; 
	  	  
	  }
  printf("GCD = %d\n",a);

  return 0; 
	  
}