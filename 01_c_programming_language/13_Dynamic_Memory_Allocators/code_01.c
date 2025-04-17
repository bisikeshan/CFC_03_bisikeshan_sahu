/* S.G.M.P  
 * @file: code_01.c
 * @brief: Demonstration of malloc
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 09-04-2025 11:18am
 */
#include <stdio.h>
#include <stdlib.h>

// Global variable definition 
int inum = 0; 
float fnum = 0.0f; 
double dnum = 0.0; 

int *iptr = NULL; 

// Entry point function 

int main(void)
{
	 // code
	 iptr = (int*)malloc(4); 
	 *iptr = 0; 

	 printf(" iptr = %p\n",iptr);
	 printf(" *iptr = %d\n",*iptr); 

	 // iptr me address ye kam hua ki ek important kam karna hai 

	 if(NULL != iptr)
	 {
	 	 free(iptr); 
	 	 iptr = NULL; 
	 }

	 return (0); 
}