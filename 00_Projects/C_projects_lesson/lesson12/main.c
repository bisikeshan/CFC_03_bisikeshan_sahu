		
/* S.G.M.P 
 * @file: main.c
 * @brief: Client side for using mv_string library
 * @author: bisikeshan sahu 
 * @date: 12-06-2025 2:38pm 
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

// string in string demonstration

char* str1 = (char*)malloc(sizeof(char*) * MAX_STRING_LENGTH);
char* str2 = (char*)malloc(sizeof(char*) * MAX_STRING_LENGTH); 
 

printf("mv_strstr()  Function Demonstration\n"); 
printf("\n\n"); 

printf("Enter string 1  =  "); 
fgets(str1,MAX_STRING_LENGTH,stdin); //gets(str1);

   int le = 0; 
	while(1)
	{     
		  
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

printf("Enter string 2 to find = ");
fgets(str2,MAX_STRING_LENGTH,stdin);//gets(str2); 

   int le1 = 0; 
	while(1)
	{     

		  if(str1[le1] == '\n')
		  {
		     str1[le1] = '\0';
		     break;  
		  }
		
		  le1	++; 
	}

// strink uptp the length + 1 size
str2 = (char*)realloc(str2,sizeof(char)*(mv_strlen(str2 ) + 1)); 
printf("\n\n");

// call mv_strstr function 
char* result = mv_strstr(str1,str2); 
if(NULL != result)
{
	printf("Found %s in %s at %s\n",str2,str1,result);
}
else
{
	fprintf(stderr, "ERROR: %s was not found in %s\n",str2,str1);
}



if(str1)
{
free(str1); 
str1 = NULL; 
}
if(str2)
{
free(str2); 
str2 = NULL;
}



printf("\n"); 
// exiting main
printf("exiting client {main()}...\n"); 

}