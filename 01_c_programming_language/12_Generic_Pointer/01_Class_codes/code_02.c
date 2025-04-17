/* S.G.M.P 
 * @file: code_02.c
 * @brief: Demonstration of generic pointers
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 09-04-2025 11:00am 
 */

// Headers
#include <stdio.h>

// global variable definition

int inum = 10; 
int *iptr = &inum; 

// Entry point function 

int main(void)
{
	// code
	printf("*iptr = %p\n",iptr); 
	printf("*iptr = %d\n",*iptr); 
	printf("*iptr + 1 = %d\n",*iptr + 1); 

	return 0; 
}