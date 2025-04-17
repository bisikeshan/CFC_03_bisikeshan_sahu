/* S.G.M.P 
 * @file: code_03.c
 * @brief: Implemenation of if else statments in c
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 16-04-2025 11:58am 
 */

// Headers
#include <stdio.h>

// Entry point function 
int main(void)
{
	// code
	int inum1 = 10; 
	int inum2 = 9; 
	if(inum1 == inum2)
	{
		printf("inum1 is EQUAL TO inum2\n"); 
	}
	else
	{
		printf("inum1 is NOT EQUAL To inum2\n"); 
	}
    
    if(inum1 < inum2)
    {
    	printf("inum1 is LESS THAN inum2\n"); 
    }
    else
    {
    	printf("inum1 is NOT LESS THAN inum2\n"); 
    } 

    if(inum1 > inum2)
    {
    	printf("inum1 is GREATOR THAN inum2\n "); 
    }
    else
    {
    	printf("inum1 is NOT GREATOR THAN inum2\n"); 
    }

    return(0); 
}