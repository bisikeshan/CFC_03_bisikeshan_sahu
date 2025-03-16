/* S.G.M.P 
 * @file: code_19_01.c
 * @brief: Merget two sorted arrays into one sorted arrays
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 16-03-2025 
 */

// Headers
#include <stdio.h>

// Entry point function 
int main()
{
	int arr1[5],arr2[5],merged[10]; // declare two input arrays and a merged array
	int le, lf,index = 0; // loop variables and index for merging


	// prompt user to enter 5 sorted numbers for first array
    printf("Enter 5 sorted numbers for first array: \n");


    for(le = 0; le < 5; le++)
    {
    	scanf("%d",&arr1[le]);
    }

    // prompt user to enter 5 sorted numbers for second array

    printf("Enter sorted numbers for second array: \n");

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

    // Display merged sorted array

    printf("Merged sorted Array: \n");

    for(le = 0; le < 10; le++)	
    {
    	printf("%d\n",merged[le]);
    }

    // return 0 to indicate successful excecution 

    return (0);
}