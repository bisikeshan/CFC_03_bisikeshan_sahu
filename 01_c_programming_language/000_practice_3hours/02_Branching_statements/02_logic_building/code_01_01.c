/* S.G.M.P 
 * @file: code_01_01.c
 * @brief: This program determines whether a given day is a weekday or a weekend.
   Days are represented as numbers (1 for Monday, 7 for Sunday).
   If the day is 6 (Saturday) or 7 (Sunday), it's a weekend.
   Otherwise, it's a weekday.
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 16-04-2025 3:47PM 
 */

// Headers
#include <stdio.h>

// globle variable definition 
int day = 6; // value must be 1 to 7

// Entry point function 
int main(void)
{
	if(day == 6 || day == 7)
	{
		printf("It's a weekend\n");
	}
	else
	{
		printf("It's a weekday\n"); 
	}

	return(0); 
}