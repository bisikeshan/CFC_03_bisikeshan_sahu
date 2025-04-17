/* S.G.M.P 
 * @file: code_03.c
 * @brief: Implementation of Increment operator(preincrement)
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 13-04-2025 10:00pm 
 */

// Headers
#include <stdio.h>

// Entry point function 

int main(void)
{
	//code

    // char
    char cnum1 = 11; 
    // preincrement
    printf("cnum1 = %hhd, ++cnum1 = %hhd\n",cnum1,++cnum1); 

    // short
    short snum1 = 11; 
    printf("snum1 = %hd , ++snum1 = %hd\n",snum1,++snum1); 

    // int 
    int inum1 = 11; 
    printf("inum1 = %d, ++inum1 = %d\n",inum1,++inum1); 

    // float 
    float fnum1 = 11.00f; 
    printf("fnum1 = %.2f,++fnum1 = %.2f\n",fnum1,++fnum1); 

    // long 
    long lnum1 = 1111; 
    printf("lnum1 = %lld,++lnum1 = %lld\n",lnum1,++lnum1);

    // double
    double dnum1 = 1111.00; 
    printf("dnum1 = %.2lf, ++dnum1 = %.2lf\n",dnum1,++dnum1);

    return (0); 


}