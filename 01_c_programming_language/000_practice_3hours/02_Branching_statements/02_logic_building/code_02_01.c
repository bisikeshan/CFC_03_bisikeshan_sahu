/* S.G.M.P 
 * @file: code_02_01.c
 * @brief: This program simulates a traffic light system.
   The traffic light can be Red ('R'), Yellow ('Y'), or Green ('G').
   Depending on the light color, the program prints the appropriate action.
   - 'R' means Stop
   - 'Y' means Get Ready
   - 'G' means Go
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 16-04-2025 4:11PM 
 */

// Headers
#include <stdio.h>

// globle variable defination 
char light = 'R'; 

// Entry point function 
int main(void)
{
	// code
	if(light == 'R')
	{
		printf("STOP!\n"); 
	}
	else if(light == 'Y')
	{
		printf("GET READY\n"); 
	}
	else if(light == 'G')
	{
		printf("Go\n"); 
	}
	
	return (0); 
}