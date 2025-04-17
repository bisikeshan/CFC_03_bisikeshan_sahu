// Headers
#include <stdio.h>

// Entry point function 
int main()
{    
	 // declare an array to store 10 numbers
	 int numbers[10];
	 int sum = 0; // declare vairable to store sum of 10 numbers
	 int le = 0; // loop variable 

	 // prompt user to enter 10 numbers
	 printf("Enter 10 numbers: \n"); 
    
     // loop for take input from user
	 for(le = 0; le < 10; le++)
	 {
	 	scanf("%d",&numbers[le]);
	 }

	 // loop for calculate sum 

	 for( le = 0; le < 10; le++)
	 {
	    sum += numbers[le]; 
	 }

	 // display sum 
	 printf("sum of number: %d\n",sum);
     
     // return 0 to indicate successful excecution 
	 return 0; 
}