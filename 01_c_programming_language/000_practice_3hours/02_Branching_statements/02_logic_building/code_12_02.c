/* S.G.M.P 
 * @file: code_12_02.c
 * @breif:  This program checks whether a given character is:
   - Uppercase (A-Z)
   - Lowercase (a-z)
   - A digit (0-9)
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 22-04-2025 3:51PM 
 */

// Headers
#include <stdio.h>

// Entry point function 
int main(void)
{
	// local variable definition 
	char ch = 'a'; 

	if( ch >= 'A' && ch <= 'Z')
	{
		printf("character is an upper case letter\n"); 
	}
	else if(ch >= 'a' && ch <= 'z')
	{
		printf("character is an lower case letter\n"); 
	}
	else if(ch >= '0' &&  ch <= '9')
	{
		printf("character is an digits\n");
	}
	else
	{
		printf("character is an special symbol\n"); 
	}

	return (0); 	
}