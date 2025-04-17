/* S.G.M.P 
 * @file: code_02.c
 * @brief: Implementation of Increment operator (preincrement )
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 13-04-2025 9:39 PM
 *
 */

// Header

#include <stdio.h>

// Entry point function  
int main(void)
{
	// code
   
    // char
    char cnum1 = 11;
    printf("cnum1 = %hhd\n",cnum1);  
    char cresult = ++cnum1; 
    printf("++cnum1 = %hhd\n, cresult = %hhd\n",cnum1,cresult); 

    // short
    short snum1 = 11; 
    printf("snum1 = %hd\n",snum1); 
    short sresult = ++snum1; 
    printf("++snum1 = %hd, sresult = %hd\n",snum1,sresult); 

    // int 
    int inum1 = 11; 
    printf("inum1 = %d\n",inum1);
    int iresult = ++inum1; 
    printf("iresult = %d, ++inum1 = %d\n",inum1,iresult); 

    // float
    float fnum1 = 11.00f;
    printf("fnum1 = %.2f\n",fnum1);  
    float fresult = ++fnum1; 
    printf("fresult = %.2f , fnum1 = %.2f\n",fresult,fnum1); 

    // long
    long lnum1 = 1111; 
    printf("lnum1 = %lld\n",lnum1); 
    long lresult = ++lnum1; 
    printf(" lresult = %lld , lnum1 = %lld\n",lresult,lnum1);

    // double
    double dnum1 = 1111.00; 
    printf("dnum1 = %.2lf\n",dnum1); 
    double dresult = ++dnum1; 
    printf("dresult = %.2lf, dnum1 = %.2lf\n",dresult,dnum1);

    return (0);    


}