// Headers
#include <stdio.h>

int main()

{    // declare an array to store 5 numbers
	 int numbers[5];
	 // loop variable 
	 int le = 0; 
     
     // promp user to enter 5 numbers
	 printf("Enter 5 numbers: \n"); 
    
     // loop to take input from user
	 for(le = 0; le < 5; le++)
	 {
	 	scanf("%d",&numbers[le]);
	 }

     // display reverse numbers
	 printf("Reverse numbers: \n"); 
     
     // loop to calculate reverse of an array 
     
	 for(le = 4; le >= 0; le--)
	 {
	 	printf("%d\n",numbers[le]); 
	 }

	 return 0; 
}