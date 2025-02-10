// Headers
#include <stdio.h>

/* This program checks wheather a given character is:
  - Upper Case (A-Z)
  - Lower Case (a-z)
  - A digit (0-9)
  */
int main(void)
{
	 char ch = '1';
	 if( ch >= 'A' && ch <= 'Z' )
	 {
	 	printf("The character is an upper case letter.\n");
	 }
	 else if(ch >= 'a' && ch <= 'z')
	 {
	 	printf("The character is a lowercase letter.\n");
	 }
	 else if(ch >= '0' && ch <= '9')
	 {
	 	printf(" The character is a digit.\n");
	 }
	 else
	 {
	 	printf("The character is a special symbol.\n");
	 }
	 return (0);
}