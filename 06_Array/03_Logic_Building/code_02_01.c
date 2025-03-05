// Headers
#include <stdio.h>

// Entry point function 

int main()
{
	float marks[5]; // declare an array to store marks of 5 students 
	float sum = 0; // variable to store sum of marks
	int le; // loop variable 

	// prompt user to enter marks for 5 students
	printf("Enter marks for 5 students:\n"); 

	// loop to take input from the user
	for( le = 0; le < 5; le++)
	{
		scanf("%f",&marks[le]); 
	}

	// loop to calculate the sum of marks

	for(le = 0; le < 5; le++)
	{
		sum += marks[le]; 
	}

	// calculate and display the average marks

	printf("Average marks: %.2f\n",sum/5); 

	// return 0 to indicate successful excecution 

	return (0); 

}