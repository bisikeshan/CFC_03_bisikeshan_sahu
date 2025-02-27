/* . Check if a Year is a Leap Year
Concepts Used: Branching (if-else), Function
Problem Statement: Write a function that takes a year as input and determines whether it is a leap year.
*/

// Headers
#include <stdio.h>

// function declaration 
void leap_year(int year); 

// Entry point function 
int main()
{
    leap_year(1900);
    leap_year(2400);
    leap_year(2020);
    leap_year(2024);
	return 0; 
}

// function defintion 
void leap_year(int year)
{
	 if((year % 4 == 0) && year % 100 != 0)
	 {
	 	printf("%d is a leap year.\n",year);
	 }
	 else
	 {
	 	printf("%d is not a leap year.\n",year);
	 }
}