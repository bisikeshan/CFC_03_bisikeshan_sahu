/* S.G.M.P 
 * @file: code_17_03.c
 * @brief: find the second largest number in an array
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 13-03-2025 11:15 am 
 */

// Headers
#include <stdio.h>

// Entry poin function 
int main()
{
	// Declare an array store 8 numbers
	int numbers[8]; 
	int largest,second_largest; // variables to store largest and second_largest numbers
	int le; // loop variable

	// prompt user to enter 8 numbers
    printf("Enter 8 numbers:\n"); 

    // loop to take input from the user 
    for(le = 0; le < 8 ; le++)
    {
    	scanf("%d",&numbers[le]); 
    }

    // initialize largest and second largest

     if( numbers[0] > numbers[1])
    {
    	largest = numbers[0]; 
    	second_largest = largest; 
    }
    else 
    {
        largest = numbers[1]; 
        second_largest = numbers[0]; 
    }
    // loop to find second largest number

    for(le = 2; le < 8; le++)
    {
    	 if(numbers[le] > largest)
    	 {
    	 	 second_largest = largest; 
    	 	 largest = numbers[le]; 
    	 }
    	 else if(numbers[le] > second_largest  && numbers[le] != largest)
    	 {
    	 	second_largest = numbers[le]; 
    	 }

    }

    // display second largest number
    printf("second largest number: %d\n",second_largest); 

    return 0; 
}