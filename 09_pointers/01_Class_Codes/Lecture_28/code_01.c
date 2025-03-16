/* S.G.M.P 
 * @file: code_01.c
 * @brief: Implementation of pointers in c
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 15-03-2025 
 */

// Headers
#include <stdio.h>

// variable definition 
int inum = 10; 

int *iptr = &inum; 
// iptr is a pointer to integer with value address of inum

int **piptr = &iptr; 
// piptr is a pointer to pointer to integer

// Entry point function

int main()
{
	// code
	printf("inum = %d\n",inum); 
	printf("&inum = %p\n",&inum); 
	printf("\n"); 

	printf("iptr = %p\n",iptr); 
	printf("&iptr = %p\n",&iptr); 
	printf("*iptr = %d\n",*iptr); 

	printf("\n");

	printf("piptr = %p\n",piptr); 
	printf("&piptr = %p\n",&piptr); 
	printf("*piptr = %p\n",*piptr); 
	printf("**piptr = %d\n",**piptr); 

	return(0);
}