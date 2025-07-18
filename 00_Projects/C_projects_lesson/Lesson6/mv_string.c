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

// STRING LENGTH FUNCTION

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

// STRING COPY FUNCTION 

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

// STRING CONCATE FUNCTION

extern char* mv_strcat(char* dest, char* src)
{
	// code

	// step1: find the length of destination string
	long long destLength = mv_strlen(dest); 
	// step2: find the legnth of source string 
	long long srcLength = mv_strlen(src); 

	// step3: start copying the characters of src to dest at the end of destination
	for(long long le = 0; le < srcLength; ++le)
	{
		dest[destLength + le] = src[le]; 
	}

	// step4: explicitly add \0 at the dest of concatenated string
	dest[destLength + srcLength] = '\0'; 

	return(dest); 
}
