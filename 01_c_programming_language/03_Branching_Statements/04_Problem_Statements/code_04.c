// Header
#include <stdio.h>

/*
   Determine if a person qualifies for a loan
A person is eligible if:
Age is between 21 and 60.
Salary is at least ₹25,000 per month.
Print whether the person qualifies or not.
// Entry point function 

*/
int main(void)
{   
	 int age = 22, salary = 27000;

	 if( age >= 21 && age <= 61 && salary >= 25000)
	 {
	 	printf(" person qualifies for loan\n");
	 }
	 else 
	 {
	 	printf(" person  not qualifies for loan\n");
	 }
	 
	 return 0; 

}