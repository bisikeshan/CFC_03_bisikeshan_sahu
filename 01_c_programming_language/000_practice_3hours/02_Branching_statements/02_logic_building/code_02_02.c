/* S.G.M.P 
 * @file: code_02_02.c
 * @brief: This program simulates a traffic light system.
   The traffic light can be Red ('R'), Yellow ('Y'), or Green ('G').
   Depending on the light color, the program prints the appropriate action.
   - 'R' means Stop
   - 'Y' means Get Ready
   - 'G' means Go
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 16-04-2025 4:49PM 
 */

// Headers
#include <stdio.h>

// Entry point function 
int main(void)
{
	// code
	char light = 'G'; 

	if(light == 'R')
	{
		printf("STOP\n"); 
	}
	else if(light == 'Y')
	{
		printf("GET READY\n"); 
	}
	else if(light == 'G')
	{
		printf("GO\n"); 
	}

	return (0); 
}