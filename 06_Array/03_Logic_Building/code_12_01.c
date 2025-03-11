/* S.G.M.P
 * @file: code_12_01.c
 * @brief: find the sum of odd numbers in an array
 * @author: biskeshan sahu( bisikeshan567@gmail.com)
 * @date: 10-03-2025 11:54 am
 */

// Headers
#include <stdio.h>

// Entry point function 
int main()
{
	 // declare an array to store 7 numbers
	 int numbers[7];
	 // variable to store sum of odd numbers
	 int sum = 0; 
	 int le; // loop variable

	 // prompt user to enter 7 numbers
	 printf("Enter 7 numbers:\n");
     
     // loop to take input from user 
	 for( le = 0; le < 7; le++)
	 {
	 	scanf("%d",&numbers[le]);
	 }

	 // loop to calculate sum of odd numbers

	 for(le = 0; le < 7; le++)
	 {
	 	if(numbers[le] % 2 != 0 )
	 	{
	 		sum += numbers[le];
	 	}
	 }

	 // print sum of odd numbers
	 printf("sum of odd numbers is: %d\n",sum);

	 return 0; 


}