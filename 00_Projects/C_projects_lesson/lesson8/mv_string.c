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

// string concate

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


// string compare
extern int mv_strcmp(char* str1,char* str2)
{
	// code

	// STEP 1: take length of str1
	long long str1Length = mv_strlen(str1); 

	// STEP 2: take length of str2
	long long str2Length = mv_strlen(str2); 

	// STEP 3: check for length inequality
	if(str1Length != str2Length)
	{
		return(str1Length - str2Length); 
	}

	// STEP 4: Run the loop to check for equality
	long long index = 0; 

	while(1)
	{
		int difference = str1[index] - str2[index]; 

		if( 0 != difference)
		{
			return(difference); 
		}

		index++; 

		if(str1[index] == '\0' && str2[index] == '\0')
		break; 
	}


	return(0); 
}

// nth no of string copy
extern char* mv_strncpy(char* dest,char* src,long long nr_characters)
	{
		// code
		// check for negative nr_characters
		if(nr_characters <= 0)
		{
			fprintf(stderr,"Error: nr_characters value is invalid\n"); 
			return(NULL); 
		}

		// Step 1: Get length of src string 
		long long srcLength = mv_strlen(src); 

		// check for nr_characters greater to the length
		if(nr_characters > srcLength)
		{
			fprintf(stderr,"ERROR: nr_characters cannot be greater than source string length\n"); 
			return (NULL); 
		}

		// STEP 2: copy 0 - nr_characters from src to dest
		for(long long le = 0; le < nr_characters; ++le)
		{
			dest[le] = src[le]; 
		}

		// STEP 3: Assign '\0' to the length index of destination
		dest[nr_characters] = '\0'; 

		return(dest); 
	}

