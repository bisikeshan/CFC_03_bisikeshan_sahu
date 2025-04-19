/* S.G.M.P 
 * @file: code_08_02.c
 * @brief:    This program assigns a grade to a student based on marks.
   - Marks >= 90: Grade A
   - Marks >= 75: Grade B
   - Marks >= 50: Grade C
   - Marks < 50: Grade F
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 19-04-2025 10:39PM 
 */

// Headers
#include <stdio.h>

// Entry point function 
int main(void)
{
	// code
	// local variable definition
	int marks = 91; 
    if(marks >= 90)
    {
    	printf("Grade A\n");
    }
    else if(marks >= 75)
    {
    	printf("Grade B\n");
    }
    else if(marks >= 50)
    {
    	printf("Grade C\n"); 
    }
    else if(marks < 50)
    {
    	printf("Grade F\n"); 
    }

    return (0); 
}