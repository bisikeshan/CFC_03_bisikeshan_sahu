#include <stdio.h>

/* This program checks if a given year is a leap year
   A year is a leap year if:
   It is divisible by 4, but not by 100, Or it is divisible by 400
   */

// Entry point function 
int main(void)
{
	int year = 2024; 
	if((year % 4 == 0 && year % 100 != 0) || (year % 400==0 ))
	{
       printf("%d is a leap year \n",year);
	}
	else
	{
		printf("%d is not a leap year\n",year);
	}
	return 0; 
}