// program to calculate percentage.
// Headers
#include <stdio.h>

float calculate_percentage(float obtained_marks,float total_marks)
{
	return(obtained_marks/total_marks) * 100; 
}

// Entry point function 
int main()
{
	float obtained_marks = 85,total_marks = 100; 

	printf("percentage: % 2f %%\n",calculate_percentage(obtained_marks,total_marks));
	return 0; 
}