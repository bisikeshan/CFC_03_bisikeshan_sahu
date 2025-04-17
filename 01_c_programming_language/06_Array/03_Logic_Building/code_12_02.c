/* S.G.M.P
 * @file: code_12_02.c
 * @brief: find the sum of an odd numbers in an array
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 10-03-2025 12:03 PM
 */

// Headers
#include <stdio.h>

// Entry point function 
int main()
{    
	 // declare an array to store 7 numbers
	 int numbers[7]; 
     int sum = 0; // declare a variable to store sum of odd numbers
     int le = 0; // loop variable; 

     // prompt user to take input from the user
     printf("Enter 7 numbers: \n");

     // loop to take input from the user
     for(le = 0; le < 7; le++)
     {
     	 scanf("%d",&numbers[le]);
     }

     // loop for calculate sum of odd numbers

     for( le = 0; le < 7; le++)
     {
     	 if(numbers[le] % 2 != 0 )
     	 {
     	 	sum += numbers[le];
     	 }
     }

     // print sum of odd numbers
     printf("sum of odd numbers is %d\n",sum);

     return 0; 

}