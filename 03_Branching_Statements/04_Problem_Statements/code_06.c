// Header
#include <stdio.h>

/* Determine the type of bank account based on account number choise
If the account number is '1', it's a Savings Account.
If it is '2', it's a Current Account.
Otherwise, it's an Invalid Account Number. */

int main(void)
{
	int number = 2; 

	switch(number)
	{
	case 1: 
		printf("it's a Saving Account.\n");
		break; 
    case 2:
    	printf("it's a Current Account.\n");
    	break; 
     default:
     	printf("it's an Invalid Account Number.\n");
     	break; 
	}

	return 0; 
}