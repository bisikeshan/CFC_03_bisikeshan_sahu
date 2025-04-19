/* S.G.M.P 
 * @file: code_10_01.c
 * @brief:    This program checks if three given angles form a valid triangle.
   The sum of the three angles must be exactly 180 degrees.
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 19-04-2025 11:23am
 */

 // Headers
 #include <stdio.h>

 // Entry point function 
 int main(void)
 {
 	int angle1 = 60, angle2 = 60, angle3 = 60; 
 	
        if(angle1 + angle2 + angle3 == 180)
        {
        	printf("The angles form a valid triangle.\n");
        }
        else
        {
        	printf("The angles do not form a valid triangle.\n"); 
        }

 	    return (0); 
 }   