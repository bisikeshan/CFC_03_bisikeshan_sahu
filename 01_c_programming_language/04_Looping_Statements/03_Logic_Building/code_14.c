// Headers
#include <stdio.h>

// Entry point function 
int main()

{
	int num = 29, isPrime = 1; 


	for(int le = 2; le <= num/2; le++)
	{   
		 if(num % le == 0)
		 {
		 	isPrime = 0; 
		 	break; 
		 }
	}

	if(isPrime)
	{
		printf("%dles a prime number\n",num);
	}
	else
	{
		printf("%dles not a prime number\n",num);
	}
   
    return 0; 
}