// Header

#include <stdio.h>

/* This program checks if a giver year is a century year.
   A year is a century year if it is divisible by 100.
   */

// Entry point function 

int main(void)
{
   int year = 1800; 

   if(year % 100 == 0)
   {
   	  printf("%d is a century year.\n",year);
   }   
   else
   {
   	  printf("%d is not a century year.\n",year);
   }

   return 0; 

}