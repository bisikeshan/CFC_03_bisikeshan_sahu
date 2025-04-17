// Headers
#include <stdio.h>

// Entry point function 
int main()
{
   // declare an array to store 10 numbers
   int numbers[10];
   
   // variable to count even numbers
   int even_count = 0; 
   int odd_count = 0; 

   // variable to count odd numbers
   int le; 

   // prompt user to enter 10 numbers
   printf("Enter 10 numbers:\n");

   // loop to take input from the user
   for(le = 0; le < 10; le++)
   {
   	 scanf("%d",&numbers[le]);
   }

   // loop to count even and odd numbers

   for( le = 0; le < 10; le++)
   {
   	   if(numbers[le] % 2 == 0 )
   	   {
   	   	  even_count++; 
   	   }
   	   else
   	   {
   	   	  odd_count++; 
   	   }
   }

   // display the counts
   printf("Even number: %d\n",even_count); 
   printf("odd number: %d\n",odd_count);

   // Return 0 to indicate successful excecution 

   return 0; 

}