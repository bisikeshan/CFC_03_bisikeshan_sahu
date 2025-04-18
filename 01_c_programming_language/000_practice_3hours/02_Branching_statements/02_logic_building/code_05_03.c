/* S.G.M.P 
 * @file: code_05_03.c
 * @brief:  This program finds the greatest of two given numbers.
   It compares the two numbers and prints the larger one.
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 18-04-2025 11:28PM 
 */

// Headers 
#include <stdio.h>

// Entry point function 
int main(void)
{
	int a = 5, b = 4; 
    if(a > b)
    {
    	printf("The greatest number is %d\n",a); 
    }
    else
    {
    	printf("The greatest numbers is %d\n",b); 
    }
    return (0); 
}