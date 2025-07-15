/* S.G.M.P 
 * @file: main.c
 * @brief: Client side for using mv_string library
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 08-06-2025 10:55am
 */

// Headers
#include <stdio.h>
#include <stdlib.h>

#include "mv_string.h"

// constant macro definition 
#define MAX_STRING_LENGTH 1024


// global variable definitions
char *userInputString = NULL; 

// Entry point function 
int main(void)
{
	// code
	printf("Entering client {main()}...\n");
	printf("\n\n"); 


	printf("****** STRING LENGTH mv_strlen() function demonstration *******\n"); 

	userInputString = (char*)malloc(sizeof(char) * MAX_STRING_LENGTH);

	// get input from user
	printf("Enter a string of your choice = "); 
	fgets(userInputString,MAX_STRING_LENGTH,stdin); // yaha par hume fgets(userInputString,100,stdin) use krna honga

    int le = 0; 
	while(1)
	{
		  if(userInputString[le] == '\n')
		  {
		     userInputString[le] = '\0';
		     break;  
		  }
		//  printf("userInputString[%d] = %c\n",le,userInputString[le]);
		  le++; 
	}

    userInputString = (char*)realloc(userInputString,(mv_strlen(userInputString) + 1) * sizeof(char)); 

	printf("\n\n");


	// prompt user to the input string
	printf("The string you have entered = ->%s<-\n",userInputString); 

	printf("\n\n"); 

	// Here calculate the length of string 
	 long long userStringLength = mv_strlen(userInputString);

	 printf("The string %s is of length %lld\n",userInputString,userStringLength); 
	 printf("\n\n"); 

     // ***  string copy function demostration 

     char* srcString = (char*)malloc(sizeof(char*) * MAX_STRING_LENGTH); 
     char* destString = (char*)malloc(sizeof(char*) * MAX_STRING_LENGTH); 

     printf("***** STRING COPY mv_strcopy()  Function Demonstration ******\n"); 
	


	 printf("Enter a source string to copy = "); 
	 fgets(srcString,MAX_STRING_LENGTH,stdin); 

	 // for \n  to \0
	  
	 while(1)
	 {
		  if(srcString[le] == '\n')
		  {
		     srcString[le] = '\0';
		     break;  
		  }
		 //  printf("srcString[%d] = %c\n",le,srcString[le]);
		  le++; 
	}

	// shrink upto the length + 1 size 
	 srcString = (char*)realloc(srcString, sizeof(char) * (mv_strlen(srcString) + 1)); 

	 printf("\n\n");

	 printf("Source string entered by user = %s",srcString); 

	 printf("\n\n"); 

	 printf("Before Copying Strings...\n"); 

	 printf("Source String Before Copying = %s\n",srcString); 
	 printf("Destination String Before Copying = %s\n",destString); 

	 printf("\n\n"); 

     // call to mv_strcopy()
	 mv_strcpy(destString,srcString); 

	 printf("After Copying String : \n");
	 printf("source string after copying = %s\n",srcString); 
	 printf("destination string after copying = %s\n",destString); 
	 printf("\n\n"); 

	 // Shrink Destination string for professionality
	 destString = (char*)realloc(destString, sizeof(char) * (mv_strlen(destString) + 1)); 


	 // loop for src string
	 // final output
	 printf("final output\n");  
	 printf("Source String:\n");

	 for(int le = 0; le <= mv_strlen(srcString); le++)
	 {
	 	printf("srcString[%d] = %c\n",le,srcString[le]); 
	 } 

	 printf("\n\n"); 

	 // loop for destination string

	 for(int le = 0; le <= mv_strlen(destString); le++)
	 {
	 	printf("desString[%d] = %c\n",le,destString[le]); 
	 }

	 printf("\n\n");  

	//unllocate after finish using 

	if(srcString)
	{
		free(srcString); 
		srcString = NULL; 
	}

	if(destString)
	{
		free(destString); 
		destString = NULL; 
	}
	if(userInputString)
	{
		free(userInputString);
		userInputString = NULL; 
	}

	// exiting main
	printf("exiting client {main()}...\n"); 

	return (0); 

}