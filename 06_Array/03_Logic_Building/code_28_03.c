/* S.G.M.P 
 * @file : code_28_03.c
 * @breif: find the most frequent number in an array 
 * @author: bisikeshan567@gmail.com (bisikeshan567@gmail.com)
 * @date: 17-03-2025 12:22 pm 
 */

// Headers
#include <stdio.h>

// Entry point function 
int main()
{
	int numbers[10]; // declare an array to store 10 numbers
	int frequency[10] = {0}; // frequncy array initialised to zero 
	int max_freq = 0, most_frequent,le,j; // variable of calculations 

	// prompt user to enter 10 numbers
	printf("Enter 10 numbers:\n"); 

	// loop to take input from the user
	for(le = 0; le < 10; le++)
	{
		scanf("%d",&numbers[le]); 
	}

	// calculate frequency of each number
	for(le = 0; le < 10; le++)
	{
		int count = 0; 
		for(j = 0; j < 10; j++)
		{
			if(numbers[le] == numbers[j])
			{
				 count++; 
			}
		}
		frequency[le] = count++; 
	}


// find the most frequent number

for(le = 0; le < 10; le++)
{
	if(frequency[le] > max_freq)
	{
		 max_freq = frequency[le]; 
		 most_frequent = numbers[le]; 
	}
}

// display the most frequent number
printf("Most frequent number: %d (appeared %d times) \n",most_frequent,max_freq); 

// return 0 to indicate successful excecution 
return 0;

}