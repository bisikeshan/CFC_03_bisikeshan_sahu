/* S.G.M.P 
 * @file: code_16_03.c
 * @brief:  This program checks if a given character is a vowel or a consonant.
   Vowels: A, E, I, O, U (both uppercase and lowercase)
   All other letters are consonants.
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 22-04-2025 5:15pm 
 */

// Headers
#include <stdio.h>

// Entry point function 
int main(void)
{
	char ch = 'Z'; 
	if(ch == 'A'|| ch == 'E'|| ch == 'I'|| ch == 'O'|| ch == 'U'||
	   ch == 'a'|| ch == 'e'|| ch == 'i'|| ch == 'o'|| ch == 'u' )
	{
		printf("%c is a vowels\n",ch); 
	}
	else
	{
		printf("%c is a consonants\n",ch); 
	}

	return (0); 
}