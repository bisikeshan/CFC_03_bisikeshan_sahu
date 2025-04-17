/* S.G.M.P
 * @file: code_15_01.c
 * @brief: count  how many time a numbers appear in an array 
 * @author: bisikeshan sahu (bisikeshan567@gmail.com )
 * @date: 11-03-2025 8:12 PM
 */

// Headers
#include <stdio.h>

// Entry point function 
int main()
{     
	 // declare an array to store 10 numbers
     int numbers[10]; 
     int search,count = 0; // variable for searching and counting occurences
     int le; // loop variable 

     // promt user to enter 10 numbers
     printf("Enter 10 numbers: \n");

     // loop to take input from the user
     for(le = 0; le < 10; le++)
     {
     	scanf("%d",&numbers[le]);
     }

     // prompt user to enter the numbers to search
     printf("Enter number to search: "); 
     scanf("%d",&search);

     // loop to count occurences of the search number

     for( le = 0; le < 10; le++)
     {
     	 if(numbers[le] == search)
     	 {
     	 	count++; 
     	 }
     }


// display the count 

printf("The number %d appears %d times \n",search,count); 

// return 0 to indicate the succesful excecution 

return 0; 

}