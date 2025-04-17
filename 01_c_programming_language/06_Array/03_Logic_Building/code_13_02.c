/* S.G.M.P
 * @file: code_13_02.c
 * @brief: find the product of all element in an array
 * @author: bisikeshan sahu (bisikeshan567@gmail.com )
 * @date: 10-03-2025 1:14 PM
 */

 // Headers
 #include <stdio.h>

 //Entry point function 
 int main()
 {
 	 // declare an array to store 5 numbers
 	 int numbers[5];

 	 // declare a variable to store product
 	 int products = 1;  
 	 int le; // loop variable 

 	 // prompt user to take input from the user
 	 printf("Enter 5 numbers: \n");

 	 // loop to take input from the user
 	 for(le = 0; le < 5; le++)
 	 {
 	 	scanf("%d",&numbers[le]);
 	 }

 	 // loop to calculate product of all numbes

 	 for(le = 0; le < 5; le++)
 	 {
 	 	products *= numbers[le];
 	 }

 	 // dispplay output

 	 printf("total product is : %d\n",products);

 	 // return 0 to indicate successful excecution 
 	 return 0; 
 } 