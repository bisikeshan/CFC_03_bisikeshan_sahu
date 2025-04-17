// 3. Find the Smallest Divisor of a Number (Other Than 1): Write a program to find and print the smallest divisor (greater than 1) of a given number N using a loop
// Headers
#include <stdio.h>

// Entry point fucntion 
int main()

{    
	int num =  17; 
	for(int le = 2; le <= num/2; le++ )
	{
		if(num % le == 0)
		{
			printf("%d\n",le);
			break; 
		}
		else
		{
			printf("It's may be prime number or other number\n");
			break;
		}
	}

	return 0; 
}