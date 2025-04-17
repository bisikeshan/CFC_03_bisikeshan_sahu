// Find the First N Terms of an Arithmetic Progression (AP): Write a program to generate and print the first N terms of an AP where the first term and common difference are provided as input.

// Headers
#include <stdio.h>


// Entry point function 
int main()
{
      int n_term = 10,first_term = 5 ,common_difference = 10,ap = 0; 

      for(int le = 1; le <= n_term; le++)
      {
               // arithmetic progression 
               ap = first_term + common_difference; 
               first_term = ap ;
               printf("%d ",ap);  
          
      }
      
      return 0; 

}