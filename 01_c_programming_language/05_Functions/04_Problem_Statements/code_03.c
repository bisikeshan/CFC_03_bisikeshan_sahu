/* 3. Print the Multiplication Table of a Number
Concepts Used: Looping (for), Function
Problem Statement: Write a function that takes an integer and prints its multiplication table up to 10 using a loop. 
*/
// Headers

#include <stdio.h>

// function declaration 
int result = 0; 

void  table(int number);

// Entry point function 
int main()
{   
	table(5);
	table(10); 

	return 0; 
}

// function definition 
void table(int number)
{
	for(int le = 1; le <= 10; le++)
	{   
		result = number * le; 
		printf("%d * %d = %d\n",number,le,number*le);
	}

}

