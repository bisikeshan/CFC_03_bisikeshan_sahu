/* S.G.M.P 
 * @file: code_01.c
 * @brief: Implemenation of swtich statements in c
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 16-04-2025 12:25PM
 */

// Headers
#include <stdio.h>

// Global variable definition 
int color = 1;

// Entry point function 
int main(void)
{ 
   //code
  /* switch(expression)
     {
	    case value 1: 
	    	// case block 
	    	break;
	    default: 
	    	// default bock 
	    	break 
     }

     */
	switch(color)
	{
	case 1: 
		 printf("color is RED\n"); 
		 break; 
    case 2: 
    	 printf("color is Blue\n"); 
    	 break; 
    case 3: 
    	 printf("color is GREEN\n"); 
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
         printf("color is UNKNOWN\n"); 
         break;  

	}

	return(0); 

}