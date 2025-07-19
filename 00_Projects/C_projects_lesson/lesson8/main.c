
/* S.G.M.P 
 * @file: main.c
 * @brief: Client side for using mv_string library
 * @author: bisikeshan sahu 
 * @date: 10-06-2025 11:14am
 */

// Headers file
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

// ******** string copy of nr characters function demonstration 

char* srcString = (char*)malloc(sizeof(char*) * MAX_STRING_LENGTH); 
char* destString = (char*)malloc(sizeof(char*) * MAX_STRING_LENGTH);

long long user_NRCharacters = 0; 



printf("mv_strncpy()  Function Demonstration\n"); 
printf("\n\n"); 

printf("Enter a source string = "); 
fgets(srcString,MAX_STRING_LENGTH,stdin); //gets(srcString);

 int le = 0; 
 while(1){     
		  
 if(srcString[le] == '\n'){
	srcString[le] = '\0';
	break;  
}
printf("srcString[%d] = %c\n",le,srcString[le]);
le++; 
	 }

// shrink upto the length + 1 size 
srcString = (char*)realloc(srcString, sizeof(char) * (mv_strlen(srcString) + 1)); 

printf("\n\n");
printf("Source string entered by user = %s",srcString); 
printf("\n\n");

// Enter User Input
printf("Enter No of characters to copy = ");
scanf("%lld",&user_NRCharacters); 

printf("\n");

printf("Copying Strings....\n"); 

printf("Before Copying: ");
printf("Source String = ->%s<-\n",srcString);
printf("\n");

printf("Destination String = ->%s<-",destString);
printf("\n\n"); 	

if(NULL != mv_strncpy(destString,srcString,user_NRCharacters))
{
destString = (char*)realloc(destString,sizeof(char)*(user_NRCharacters) + 1); 			
printf("After copying || characters \n\n"); 

printf("Source String = ->%s<-\n\n",srcString);
for(int le = 0; srcString[le] != '\0';le++)
{
	printf("srcString[%d] = %c\n",le,srcString[le]);
}

printf("\n");
printf("Destination String = ->%s<-\n",destString);
for(int le = 0; destString[le] != '\0';le++)
{
	printf("srcString[%d] = %c\n",le,destString[le]);
}

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

printf("\n");
// exiting main
printf("exiting client {main()}...\n"); 

}