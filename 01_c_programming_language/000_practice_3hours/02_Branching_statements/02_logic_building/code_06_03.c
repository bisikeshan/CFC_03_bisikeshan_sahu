/* S.G.M.P 
 * @file: code_06_03.c
 * @brief:   This program checks if a given year is a leap year.
   A year is a leap year if:
   - It is divisible by 4, but not by 100, OR
   - It is divisible by 400.
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 18-04-2025 11:53PM 
 */

// Headers
#include <stdio.h>

// Entry point function 
int main(void)
{
    // local variable definition
    int year = 2024; 
    if((year % 4 == 0 && year % 100 != 0)|| year % 400 == 0)
    {
    	printf("%d is a leaf year\n");
    }
    else
    {
    	printf("%d is not a leaf year\n");
    }

    return (0); 
}