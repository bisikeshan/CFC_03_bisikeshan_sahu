// Find the Product of Digits of a Number: Write a program to calculate and print the product of all digits in a given number using a loop.

// Headers

#include <stdio.h>
 
int main()
{
    int num = 1202, Quotient = 0, Remainder = 0, result = 1 ;  

     while( num != 0  )
     {
        Quotient = num / 10; 
        Remainder = num % 10;

        if(Remainder == 0 )
        {
           result += Remainder ;
        }
        else
        {
          result *= Remainder ; 
        }

        num = Quotient; 
     }

     printf("result = %d\n",result);

   

    return 0; 
}