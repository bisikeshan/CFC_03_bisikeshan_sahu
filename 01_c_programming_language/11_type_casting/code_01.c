/* S.G.M.P 
 * @file: code_01.c
 * @breif: Demonstration of typecasting in c
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 07-04-2025 7:31PM 
 */

// Headers
#include <stdio.h>

// variable definition 
long long value = 0x1122334455667788; 
int *iptr = (int*)&value; 
short *sptr = (short*)&value; 
char *cptr = (char*)&value; 

// Entry point function 

int main(void)
{
	 // code
	printf("\n\n"); 
	printf("value = %llx\n",value); 
	printf("\n\n"); 

	printf("*iptr = %x\n",*iptr); 
	printf("*(iptr + 1) = %x\n",*(iptr+1)); 
	printf("*(iptr + 2) = %x\n",*(iptr+2)); 
    printf("\n\n"); 

    printf("*sptr = %hx\n",*sptr); 
    printf("*(sptr+1) = %hx\n",*(sptr+1)); 
    printf("*(sptr+2) = %hx\n",*(sptr+2));
    printf("*(sptr+3) = %hx\n",*(sptr+3));  
    printf("\n\n"); 

    printf("*cptr = %hhx\n",*cptr); 
    printf("*(cptr+1) = %hhx\n",*(cptr+1));
    printf("*(cptr+2) = %hhx\n",*(cptr+2)); 
    printf("*(cptr+3) = %hhx\n",*(cptr+3)); 
    printf("\n\n"); 


    if(*cptr == (char)0x11)
    {
    	printf("your machine is BIGINDIAN\n"); 
    }
    else if(*cptr == (char)0x88)
    {
    	printf("your machine is LITTLEINDIAN"); 
    }
    else
    {
    	printf("Ashi machine kontyach multiverse madhey nahi hai\n"); 
    }

    return 0; 
}