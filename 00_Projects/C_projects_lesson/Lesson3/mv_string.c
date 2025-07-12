/* S.G.M.P 
 * @file: mv_string.c
 * @brief: Implementation of mv_string library function definitions
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 04-05-2025 10:52am
 */

// Headers
#include <stdio.h>
#include <stdlib.h>

#include "mv_string.h"

// mv_string Interface functions 

// function to get string length
extern long long mv_strlen(char* inStr)
{
	// code
	long long length = 0; 

	while(inStr[length] != '\0')
	{
		length++; 
	}


	return(length); 
}