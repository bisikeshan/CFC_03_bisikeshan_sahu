/* S.G.M.P 
 * @file: code_01.c
 * @brief: demonstration of generic pointer
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 07-04-2025 8:21PM
 */

#include <stdio.h>

// struct type definition 

struct Demo
{
	long long data[5]; // 8 * 5 = 40
}; 

// struct object definition 
struct Demo obj; 

// Definition of Generic pointer
void *vptr = (void*)&obj; 

// Entry point function 
int main(void)
{
	 // code
	 // use the vptr address as 1 bytes access address
	 char *cptr = (char*)vptr; 

	 // char *cptr = (char*)1000; 
	 *cptr = 'M'; 
	 *(cptr + 1) = 'a'; 
	 *(cptr + 2) = '7'; 

	 printf("*cptr = %c\n",*cptr); 
	 printf("*cptr + 1 = %c\n",*cptr + 1); 
	 printf("cptr = %p\n",cptr); 
	 printf("(cptr + 1) = %p\n",(cptr + 1)); 
	 printf("*(cptr + 1) = %c\n",*(cptr + 1)); 


	return (0); 
}