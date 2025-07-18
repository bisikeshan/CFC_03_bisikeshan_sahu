
/* S.G.M.P 
 * @file: main.c
 * @brief: Client side for using mv_string library
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 08-06-2025 5:02PM
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
	printf("\n"); 

	
     // ***  string concate function demostration 

     char* srcString = (char*)malloc(sizeof(char*) * MAX_STRING_LENGTH); 
     char* destString = (char*)malloc(sizeof(char*) * MAX_STRING_LENGTH); 

     printf("String concatenation function demonstration \n"); 
	 printf("\n"); 


	 printf("Enter a source string to copy = "); 
	 fgets(srcString,MAX_STRING_LENGTH,stdin);  // gets(srcString);
	 printf("\n");

	 int le = 0; 
   	 while(1)
	 {     
		  

		  if(srcString[le] == '\n')
		  {
		     srcString[le] = '\0';
		     break;  
		  }
		  printf("srcString[%d] = %c\n",le,srcString[le]);
		
		  le++; 
	}


	 // shrink upto the length + 1 size 
	 srcString = (char*)realloc(srcString, sizeof(char) * (mv_strlen(srcString) + 1));

     

	 printf("\n");

	 printf("Source string entered by user = ->%s<-\n",srcString); 

	 printf("\n");

	 printf("Enter a destination string to concate = "); 
	 fgets(destString,MAX_STRING_LENGTH,stdin);  // gets(destString);
	 printf("\n");

     int ile = 0; 
	 while(1)
	{     
		 

		  if(destString[ile] == '\n')
		  {
		     destString[ile] = '\0';
		     break;  
		  }

		  printf("destString[%d] = %c\n",ile,destString[ile]);
		
		  ile++; 
	}


	 destString = (char*)realloc(destString,(mv_strlen(destString) + 1) * sizeof(char)); 

     printf("\n"); 

     printf("Destination string enterd by user = ->%s<-\n",destString);
     printf("\n");  
 
	 printf("Before Concatenating Strings...\n"); 
	 printf("\n");

	 printf("Source String Before Concatenation = %s",srcString); 
	 printf("\n");

	 printf("Destination String Before Concatenation = %s",destString);
	 printf("\n"); 

	 printf("\n\n");   


	 // call to mv_strcat()
	 mv_strcat(destString,srcString); 

	 printf("After Concatenating string: \n");
	 printf("\n"); 
	 printf("source string after concatenation = %s",srcString); 
	 printf("\n"); 
	 printf("destination string after concatenation = %s\n",destString); 
     printf("\n");

     for(int le = 0; destString[le] != '\0'; le++)
     {
     	printf("destString[%d] = %c\n",le,destString[le]);
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
	// if(userInputString)
	// {
	// 	free(userInputString);
	// 	userInputString = NULL; 
	// }

	// exiting main
	printf("exiting client {main()}...\n"); 

}