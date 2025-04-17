// Headers
#include <stdio.h>

/*  This program determines if a given number is even or odd
    If a number is divisible by 2 , it is even otherwise, it is odd

   */
// Entry point function 
int main(void)
{

int num = 4; // Given number

if(num % 2 == 0)
{  
	 // True Block 
	printf("The number is even \n");
}
else
{
	// False Block
	printf("The number is odd \n");
}

return (0); 

}
