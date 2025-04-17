/* S.G.M.P 
 * @file: code_02.c
 * @brief: Implementation  of switch in c
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 16-04-2025 3:31PM 
 */

// Headers
#include <stdio.h>

// globle variable definition 
int color = 2; 

// Entry point function 
int main(void)
{
	// code
	/* switch(expression)
	   {
	      case value: 
	      	   // case block 
	      	   break; 
	      default: 
	      	   // default block 
	      	   break; 
	   }
	 */

	switch(color)
	{
	case 1: 
		printf("color is RED\n"); 
		break; 
	case 2: 
		printf("color is GREEN\n"); 
		break; 
	case 3: 
		printf("color BLUE\n"); 
		break; 
	case 4: 
		printf("color is CYAN\n"); 
		break; 
	case 5: 
		printf("color is MAGENTA\n"); 
		break; 
	case 6: 
		printf("color is YELLOW\n"); 
		break; 
	default: 
		printf("UNKNOWN COLOR\n");
		break; 
	}
}