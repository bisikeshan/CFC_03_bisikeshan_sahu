/* S.G.M.P 
 * @file: code_12_01.c
 * @brief:  This program checks whether a given character is:
   - Uppercase (A-Z)
   - Lowercase (a-z)
   - A digit (0-9)
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 22-04-2025 3:30PM 
 */

// Headers
#include <stdio.h>

// Entry point function 
int main(void)
{
	// code
	// local variable definition 
	char ch = 'A'; 

	if(ch >= 'A' && ch <= 'Z')
	{
		printf("The character is an upper case letter\n");
	}
	else if(ch >= 'a' && ch <= 'z')
	{
		printf("The character is an lower case letter\n"); 
	}
	else if(ch >= '1' && ch <= '9')
	{
		printf("The character is an digits\n"); 
	}
    else
    {
    	printf("The character is an symbol\n"); 
    }

    return (0); 
}