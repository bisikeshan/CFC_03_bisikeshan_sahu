// Headers
#include <stdio.h>

// Entry point function 
int main()
{
	 // declare an array to store 8 numbers
     int numbers[8];

     // variable to store the largest number 
     int largest; 

     // loop variable 
     int le; 

     // prompt user to enter 8 number
     printf("Enter 8 numbers:\n");

     // loop to take input from the user
     for( le = 0; le < 8; le++)
     {
     	 scanf("%d",&numbers[le]);
     }

     // assume first element as the largest

     largest = numbers[0];

     // loop to find the largest numbers

     for( le = 1; le < 8; le++)
     {
     	 if( numbers[le] > largest )
     	 {
     	 	 largest = numbers[le];
     	 }

     }
     // display the largest number

     printf("Largest number: %d\n",largest);
     // return 0 to indicate successful excecution 

     return 0; 
}