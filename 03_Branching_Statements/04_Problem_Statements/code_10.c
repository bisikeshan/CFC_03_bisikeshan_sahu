// Headers
#include <stdio.h>

/*  Determine if an employee gets a bonus
An employee is eligible for a bonus if:
-> They have worked for at least 5 years in the company.
-> Their performance rating is 4 or higher (on a scale of 1 to 5).
Print "Bonus Approved" if eligible, otherwise print "No Bonus".
*/
// Entry point function 
int main(void)
{
	int worked_year = 5, performance_rating = 5; 

	if(worked_year == 5 && performance_rating >= 4 && performance_rating <= 5)
	{
		printf("Bonus Approved \n");
	}
	else
	{
		printf("No Bonus\n");
	}
}