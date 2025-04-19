/* S.G.M.P 
 * @file: code_09_01.c
 * @brief:      This program determines the season based on the given month number.
   - Winter: December (12), January (1), February (2)
   - Spring: March (3) to May (5)
   - Summer: June (6) to August (8)
   - Autumn: September (9) to November (11)
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 19-04-2025 10:46am
 */

// Headers
#include <stdio.h>

// Entry point function 
int main(void)
{
	// local variable definition
	int month = 5; 
	if(month == 12 || month == 1 || month == 2)
	{
		printf("winter seasons\n");
	}
	else if(month >= 3 && month <= 5)
	{
		printf("spring seasons\n");
	}
	else if(month >= 6 && month <= 8)
	{
		printf("summer season\n"); 
	}
	return (0); 
}
