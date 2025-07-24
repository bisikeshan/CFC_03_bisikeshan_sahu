
/* S.G.M.P 
 * @file: main.c
 * @brief: Client side for using mv_string library
 * @author: bisikeshan sahu 
 * @date: 12-06-2025 7:29am	
 */

// Headers file
#include <stdio.h>
#include <stdlib.h>

#include "mv_string.h"

// constant macro definition 
#define MAX_STRING_LENGTH 1024

// Entry point function 
int main(void)
{
	// code
printf("Entering client {main()}...\n");
printf("\n\n"); 

// ******** string copy of nr characters function demonstration 

char* str1 = (char*)malloc(sizeof(char*) * MAX_STRING_LENGTH); 
char toSearchChar = 0;

printf("mv_strchr()  Function Demonstration\n"); 
printf("\n\n"); 

printf("Enter string 1  =  "); 
fgets(str1,MAX_STRING_LENGTH,stdin); //gets(str1);

   int le = 0; 
	while(1)
	{     
		  printf("str1[%d] = %c\n",le,str1[le]);

		  if(str1[le] == '\n')
		  {
		     str1[le] = '\0';
		     break;  
		  }
		
		  le++; 
	}

 // shrink upto the length + 1 size 
str1 = (char*)realloc(str1, sizeof(char) * (mv_strlen(str1) + 1)); 

printf("\n\n");
printf("string1 entered by user = ->%s<-",str1); 
printf("\n\n");

printf("Enter the character to search = "); 
scanf("%c",&toSearchChar); 

printf("\n\n"); 

// call the mv_strchar function  
char* result_start = mv_strchr(str1,toSearchChar); 

if(NULL != result_start)
{
	printf("The %c character was found at ->%s<- from start ",toSearchChar,result_start); 
}
else
{
	printf("The %c character was not found\n"); 

}

printf("\n\n");

// call the mv_strrchar function
char* result_reverse = mv_strrchr(str1,toSearchChar);

if(NULL != result_reverse)
{
	printf("The %c character was found at ->%s<- from End\n",toSearchChar,result_reverse); 
}
else
{
	printf("The %c character was not found\n");
}

if(str1)
{
free(str1); 
str1 = NULL; 
}


printf("\n"); 
// exiting main
printf("exiting client {main()}...\n"); 

}