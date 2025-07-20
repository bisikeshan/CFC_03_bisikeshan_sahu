
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

// Entry point function 
int main(void)
{
	// code
printf("Entering client {main()}...\n");
printf("\n\n"); 

	// ******** string compare of nr characters function demonstration 

char* str1 = (char*)malloc(sizeof(char*) * MAX_STRING_LENGTH); 
char* str2 = (char*)malloc(sizeof(char*) * MAX_STRING_LENGTH);

long long user_NRCharacters = 0; 



printf("mv_strncomp  Function Demonstration\n"); 
printf("\n\n"); 

printf("Enter string 1  =  "); 
fgets(str1,MAX_STRING_LENGTH,stdin);//gets(str1);

int le = 0; 
while(1){     
		  
 if(str1[le] == '\n'){
	str1[le] = '\0';
	break;  
}
printf("str1[%d] = %c\n",le,str1[le]);
le++; 
}


 // shrink upto the length + 1 size 
str1 = (char*)realloc(str1, sizeof(char) * (mv_strlen(str1) + 1)); 

printf("\n\n");
printf(" string1 entered by user = ->%s<-",str1); 
printf("\n\n");

printf("Enter string 2 to compare = ");
fgets(str2,MAX_STRING_LENGTH,stdin);

int ile = 0; 
 while(1){     
		  
 if(str2[ile] == '\n'){
	str2[ile] = '\0';
	break;  
}
printf("str2[%d] = %c\n",ile,str2[ile]);
ile++; 
	 }
 

str2 = (char*)realloc(str2,sizeof(char)*(mv_strlen(str2) + 1));

printf("\n\n");
printf("string 2 entered by user = %s",str2); 
printf("\n\n");


printf("Enter No of characters to Compare = ");
scanf("%lld",&user_NRCharacters); 
printf("\n");

printf("Comparing Strings....\n\n"); 

printf("String1 = ->%s<-\n",str1); 
printf("String2 = ->%s<-\n\n",str2);

long long difference_result = mv_strncmp(str1,str2,user_NRCharacters); 

//unllocate after finish using

if(difference_result == 0)
{
	fprintf(stdout,"->%s<- and ->%s<- is equal for %lld character\n",str1,str2,user_NRCharacters);
} 
else if(difference_result > 0)
{
	fprintf(stdout,"->%s<- is greater than ->%s<- for %lld character\n",str1,str2,user_NRCharacters);
}
else
{
	fprintf(stdout,"->%s<- is lesser than ->%s<- for %lld character\n",str1,str2,user_NRCharacters); 
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