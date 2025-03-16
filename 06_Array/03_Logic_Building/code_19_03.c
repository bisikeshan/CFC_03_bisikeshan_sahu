/* S.G.M.P 
 * @file: code_19_03.c
 * @brief: Merger two sorted arrays into one sorted array
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 16-03-2025 4:22 PM
 */

// Headers
#include <stdio.h>

// Entry point function 
int main()
{
	int arr1[5],arr2[5],merged[10]; // Declare two input arrays and a merged array
	int le, lf , index = 0; // loop variables and index for merging 

	// promt user to enter 5 sorted numbers for first array
	printf("Enter 5 sorted numbers for first array: \n"); 

	for(le = 0; le < 5; le++)
	{
		 scanf("%d",&arr1[le]); 
	}

	// promt user to enter 5 sorted numbers for second array

	printf("Enter 5 sorted numbers for second array: \n"); 

	for(le = 0; le < 5; le++)
	{
		 scanf("%d",&arr2[le]);
	}

	// merging both sorted arrays

	le = 0; 
	lf = 0; 

	while(le < 5 && lf < 5)
	{
		 if(arr1[le] < arr2[lf])
		 {
		 	merged[index++] = arr1[le++]; 
		 }
		 else
		 {
		 	merged[index++] = arr2[lf++]; 
		 }
	}
	// copy remaining elements if any

	while(le < 5)
	{
		 merged[index++] = arr1[le++]; 
	}

	while(lf < 5)
	{
		 merged[index++] = arr2[lf++];
	}

	// Display merged sorted Array
	printf("Merged sorted Array: \n"); 


	for(le = 0; le < 10; le++)
	{
		 printf("%d\n",merged[le]);
	}

	// Return 0 to indicate successful excecution 

	return 0; 
}