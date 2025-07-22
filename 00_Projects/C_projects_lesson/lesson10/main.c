
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

// string character postion finders functions demonstration

char* str1 = (char*)malloc(sizeof(char*) * MAX_STRING_LENGTH); 
char toSearchChar = 0;

printf("mv_strchr() Function Demonstration\n"); 
printf("\n\n"); 

printf("Enter string 1  =  "); 
gets(str1);//fgets(srcString,MAX_STRING_LENGTH,stdin); 

 // shrink upto the length + 1 size 
str1 = (char*)realloc(str1, sizeof(char) * (mv_strlen(str1) + 1)); 

printf("\n\n");
printf("string1 entered by user = %s",str1); 
printf("\n\n");

printf("Enter the character to search = "); 
scanf("%c",&toSearchChar); 

printf("\n\n"); 

// call the mv_strchar function 
char* result = mv_strchr(str1,toSearchChar); 

if(NULL != result)
{
	printf("The %c character was found at ->%s<-",toSearchChar,result); 
}
else
{
	printf("The %c character was not found\n",toSearchChar); 
}

printf("\n\n");

if(str1)
{
free(str1); 
str1 = NULL; 
}


printf("\n"); 
// exiting main
printf("exiting client {main()}...\n"); 

}