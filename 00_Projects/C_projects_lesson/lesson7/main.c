
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
// char *userInputString = NULL; 

// Entry point function 
int main(void)
{
	// code
	printf("Entering client {main()}...\n");
	printf("\n\n"); 

	
     // ***  string compare function demostration 

     char* srcString = (char*)malloc(sizeof(char*) * MAX_STRING_LENGTH); 
     char* destString = (char*)malloc(sizeof(char*) * MAX_STRING_LENGTH); 

     printf("String comparision Function Demonstration\n"); 
	 printf("\n"); 

	 printf("Enter a source string = "); 
	 fgets(srcString,MAX_STRING_LENGTH,stdin);  // gets(srcString);

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

	 printf("Source string entered by user = ->%s<-",srcString); 



	 printf("\n\n");

	 printf("Enter a destination string to compare = "); 
	 fgets(destString,MAX_STRING_LENGTH,stdin);   // gets(destString);


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



	 // shrink destination for professionality
	 destString = (char*)realloc(destString,(mv_strlen(destString) + 1)*sizeof(char)); 




     printf("\n"); 

     printf("Destination string enterd by user = ->%s<-",destString);
     printf("\n\n");  
 
	 printf("comparing Strings...\n"); 

	 printf("Source String  = ->%s<-",srcString); 
	 printf("\n"); 
	 printf("Destination String = ->%s<-",destString);
	 printf("\n\n"); 

	 int comparision_result = mv_strcmp(srcString,destString);

	 if( 0 == comparision_result)
	 {
	 	printf(" %s and  %s are Equal\n",srcString,destString);
	 }
	 else if(comparision_result > 0)
	 {
	 	printf(" %s is greater than %s\n",srcString,destString);
	 }
	 else
	 {
	 	printf(" %s is lesser than %s\n",srcString,destString);
	 }

 
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