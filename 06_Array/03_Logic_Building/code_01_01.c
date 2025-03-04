// Headers
#include <stdio.h>


// Entry point function 
int main()
{
    // declare an array to store temperature for 7 days
     float temp[7];
    // loop variable 
     int le; 

     printf("Enter temperature for 7 days \n"); 
     
     // loop to take input from the user 
     for(le = 0; le < 7; le++)
     {
     	scanf("%f",&temp[le]); 
     }

     // loop to print all temperature in the array
     printf("temperature recorded: \n");

     for(le = 0; le < 7;le++)
     {
     	printf("%.2f\n",temp[le]); 
     }

     return 0; 

}