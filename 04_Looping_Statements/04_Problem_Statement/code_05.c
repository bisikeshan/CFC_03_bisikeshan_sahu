
//5. Convert a Number from Decimal to Binary: Write a program to convert a given decimal number to binary and print its binary equivalent using a loop
// Headers
#include <stdio.h>

// Entry point function 
int main()
{
   int num = 0; 
   int Remainder = 0; 
   int Quotient = 0; 
 

    // initialization 
      num = 97; 
      
      // termination condition 

      while( num != 0)
      { 
          // loop block 
           Quotient = num /  2; 
           Remainder = num % 2;
           printf("%d ",Remainder); 
           num = Quotient;
           
        
      }
      return 0;  
   }

