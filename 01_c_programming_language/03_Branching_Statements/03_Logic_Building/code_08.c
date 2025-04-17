// Header 
#include <stdio.h>

/* This program assigns a grade to a student based on marks
   -Marks >= 90: Grade A
   -Marks >= 75: Grade B
   -Marks >= 50: Grade C
   -Marks < 50: Grade F
   */

// Entry point function 

int main(void)
{
	 int marks = 70; 

	 if( marks >= 90)
	 {
	 	printf("Grade A");
	 }
	 else if(marks >= 75)
	 {
	 	printf("Grade B");
	 }
	 else if(marks >= 50)
	 {
	 	printf("Grade C");
	 }
	 else 
	 {
	 	printf("Grade F");
	  }
}
