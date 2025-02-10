// Header
#include <stdio.h>

/* This program checks if three given angles form a valid triangle
   the sum of the three angles must be exactly 180 degree
   */

// Entry point function 
int main(void)
{
        int angle1 = 60, angle2 = 60, angle3 = 60; 
        if(angle1+ angle2 + angle3 == 180)
        {
        	printf("The angles form a valid triangle. \n");
        }
        else
        {
        	printf("The angles do not form a valid trianlge.\n");
        }
        return 0; 
}