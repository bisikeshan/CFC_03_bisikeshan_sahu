/* S.G.M.P 
 * @file: code_01.c
 * @brief: preprocessor in C
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 04-04-2025 
 */

// Headers
#include <stdio.h>
#include "myheader.h"

// MACROS
// Constants

#define MAX 1024
#define MIN 10

// Entry point function 

int main(void)
{
	 // code
	printf("Hellow students, This is a demonstration of preprocessor\n"); 
	printf("value of MAX = %d\n",MAX); 
	printf("value of MAX = %d\n",MAX); 
	printf("value of MAX = %d\n",MAX); 

	printf("value of HEADER_MAX = %d\n",HEADER_MAX);
	printf("value of HEADER_MAX = %d\n",HEADER_MAX);
	printf("value of HEADER_MAX = %d\n",HEADER_MAX); 

	printf("\n"); 

	printf("value of MIN = %d\n",MIN); 
	printf("value of MIN = %d\n",MIN); 
	printf("value of MIN = %d\n",MIN); 

	printf("value of HEADER_MIN = %d\n",HEADER_MIN); 
	printf("value of HEADER_MIN = %d\n",HEADER_MIN); 
	printf("value of HEADER_MIN = %d\n",HEADER_MIN); 

	return (0);  

}