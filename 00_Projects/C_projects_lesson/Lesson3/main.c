/* S.G.M.P 
 * @file: main.c
 * @brief: Client side for using mv_string library
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 04-05-2025 10:55am
 */

// Headers
#include <stdio.h>
#include <stdlib.h>

#include "mv_string.h"

// global variable definitions
char *userInputString = NULL; 

// Entry point function 
int main(void)
{
	// local variable
	char temp; 
	// code
	printf("Entering client {main()}...\n");
	printf("\n"); 

	userInputString = (char*)malloc(sizeof(char) * 100);

	// get input from user
	printf("Enter a string of your choice = "); 
	fgets(userInputString,100,stdin);

    printf("\n");

    int le = 0; 
	while(1)
	{
		  if(userInputString[le] == '\n')
		  {
		     userInputString[le] = '\0';
		     break;  
		  }
		  printf("userInputString[%d] = %c\n",le,userInputString[le]);
		  le++; 
	}

	userInputString = (char*)realloc(userInputString,sizeof(char) * 100); 

	printf("\n"); 

	// prompt user to the input string
	printf("The string you have entered = ->%s<-",userInputString); 
    printf("\n\n"); 
	// Here calculate the length of string 
	long long userStringLength = mv_strlen(userInputString);

	printf("The length of string ->%s<- is %lld",userInputString,userStringLength); 
    printf("\n\n"); 

	//unllocate after finish using 
	if(userInputString)
	{
		free(userInputString);
		userInputString = NULL; 
	}

	// exiting main
	printf("exiting client {main()}...\n"); 

	// return SUCCESS
	return (0);

}