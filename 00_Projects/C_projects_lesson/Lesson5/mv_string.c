/* S.G.M.P 
 * @file: mv_string.c
 * @brief: Implementation of mv_string library function definitions
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 08-06-2025 10:52am
 */

// Headers
#include <stdio.h>
#include <stdlib.h>

#include "mv_string.h"

/********************************
 * mv_string Interface functions 
********************************/

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

// function to  copy src string to dest string

extern long long mv_strcpy(char* dest,char* src)
{
	// code
	// step: 1 get length of src string 
	long long srcLength = mv_strlen(src); 
    
    // step: 2 copy 0 to length - 1 from src to dest 
    for(long long le = 0; le < srcLength; ++le)
    {
    	dest[le] = src[le]; 
    }

    // step: 3 Assign '\0' to the length index of destination 
    dest[srcLength] = '\0'; 

    return(srcLength+1); 
}
