
// Headers
#include <stdio.h>

// Entry point function 
int main()
{
   int num = 0; 
   int Remainder = 0; 
   int Quotient = 0; 
   int count = 0; 
 

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
           
           count++; 
      }
      return 0;  
   }

