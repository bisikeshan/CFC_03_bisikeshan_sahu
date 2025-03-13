/* S.G.M.P 
 * @file: code_18_01.c
 * @brief: find the most frequently occuring number in an array
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 13-03-2025 3:06 PM 
 */

// Headers
#include <stdio.h>

// Entry point function 
int main()
{
	 int numbers[10]; // declare an array to store 10 numbers
	 int count[10] = {0}; 

	 int le,lf,max_count = 0,most_frequent; // loop variable and tracking variables

	 // prompt user to enter 10 numbers
	 printf("Enter 10 numbers:\n"); 

	 // loop to take input from the user
	 for(le = 0; le < 10; le++)
	 {
	 	scanf("%d",&numbers[le]); 
	 }

	 // loop to count frequency of each number

	 for(le = 0; le < 10; le++)
	 {
	 	 int frequency = 0; 
	 	 for(lf = 0; lf < 10; lf++)
	 	 {
	 	 	 if(numbers[lf] == numbers[le])
	 	 	 {
	 	 	 	frequency++; 
	 	 	 }
	 	 }
	 	 count[le] = frequency; 
	 }


// find the most frequent number

for( le = 0; le < 10; le++)
{
	if(count[le] > max_count)
	{
		 max_count = count[le]; 
		 most_frequent = numbers[le]; 
	}
}

// display the most frequent number

printf("Most frequent number: %d appears %d times \n",most_frequent,max_count); 

// return 0 to indicate successful excecution 

return 0; 

}