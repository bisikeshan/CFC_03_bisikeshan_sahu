/*
//2. Find the Maximum of Three Numbers
Concepts Used: Branching (if-else), Function
Problem Statement: Write a C program that takes three numbers as input and finds the largest among them using a function. */

#include <stdio.h>


// function declaration 

void largest_number(int first_number,int  second_number,int third_number);

// main function 

int main()
{
	  // function call 
	  largest_number(15,10,9);
	  largest_number(10,15,9);
	  largest_number(15,10,9);

	 return 0; 

}


// function definition 

void largest_number(int first_number,int  second_number,int third_number)
{
	if(first_number > second_number && first_number > third_number)
	{
		printf("largest number is %d\n",first_number);
	}
	else if(second_number > first_number && second_number > third_number )
	{
		printf("largest number is %d\n",second_number);
	}
	else if(third_number > first_number && third_number > second_number)
	{
		printf("largest number is %d\n",third_number);
	}
	else
	{
		printf("ERROR!\n");
	}
}



