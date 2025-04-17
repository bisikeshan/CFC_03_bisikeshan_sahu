// Header
#include <stdio.h>

/*
    . Check if a student qualifies for a scholarship
A student gets a scholarship if:
Marks >= 90% OR
Family income < ₹2,00,000 per year.
Print if the student is eligible

*/

// Entry point function

int main(void)
{
	int marks = 50, family_income = 200000; // marks in percentage 1 to 100 

	if(marks >= 90 && marks <= 100 && family_income == 200000)
	{
		printf("student is eligible \n");
	}
	else
	{
		printf("student is not eligible \n");
	}
	return 0; 
} 

