// program to check if a number is a pallindrome using a while loop

#include <stdio.h>

int main()
{
	int num = 121, reversed = 0,temp = num; 

	while(temp > 0)
	{
		reversed = reversed * 10 + temp % 10; 
		temp /= 10; 
	}

	if(num == reversed)
	{
		printf("%d is a palindrome\n",num);
	}
	else
	{
		printf("%d is not a palindrome\n",num);
	}

	return 0; 
}