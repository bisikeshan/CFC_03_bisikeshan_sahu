// Header
#include <stdio.h>

/* This program finds the largest of three given numbers.
   It compares the numbers and prints the largest one */

// Entry point funcntion 
int main(void)
{
    int a = 10, b = 15, c = 20; 

     if( a >= b && a >= c)
     {
     	printf("The largest number is: %d\n",a);
     }  
     else if( b >= a && b >= c)
     {
     	printf("The largest number is: %d\n",b);
     }
     else
     {
     	printf("The largest number is: %d\n",c);
     }

}