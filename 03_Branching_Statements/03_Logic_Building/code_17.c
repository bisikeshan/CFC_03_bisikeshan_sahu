// Header
#include <stdio.h>

/* This program checks if a person is eligible to get a driving license
   In most countries, the minimum age to get a license is 18.
   If the age is 18 or more , the person is eligible 
   */


// Entry point function 
int main(void)
{ 
	 int age = 16; 

	 if( age >= 18)
	 {
	 	printf("you are eligible for a driving license.\n");
	 }
	 else
	 {
	 	printf("you are not eligible for a driving license.\n");
	 }
	 return 0; 

}