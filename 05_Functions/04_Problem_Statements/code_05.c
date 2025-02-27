/* Count the Number of Digits in a Number
Concepts Used: Looping (while), Function
Problem Statement: Write a function that takes an integer and returns the number of digits in it.
*/

// Headers
#include <stdio.h>

int result = 0; 
// function declaration 
int count_digits(int number);

int main()
{   
	int return_value = 0; 
    // function call
    return_value = count_digits(153342);
    printf("Total digits = %d\n",return_value);
  
    // function call 
    return_value = count_digits(53433);
    printf("Total digits = %d\n",return_value);
}

// function definition 

int count_digits(int number)
{
     int count = 0; 
     while(number > 0 )
     {
     	number /= 10; 
     	count++; 
     }
    

     return(count);

}
