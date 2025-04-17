/* S.G.M.P 
 * @file: code_01.c
 * @brief: Implementation of Increment operator (post increment)
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 13-04-2025 10:39 am 
 */

// headers
#include <stdio.h>

// Entry point function 
int main(void)
{
	// code
	// char
	char cnum1 = 10;
	printf("cnum1 = %hhd\n",cnum1); 
	char cresult = cnum1++;
	printf("cnum1++ = %hhd,cresult = %hhd\n",cnum1,cresult);

    // short
	short snum1 = 10; 
	printf("snum1 = %hd\n",snum1);
	short sresult = snum1++;
	printf("snum1++ = %hd, sresult = %hhd\n",snum1,sresult);

	// int 
	int inum1 = 10; 
	printf("inum1 = %d\n",inum1); 
	int iresult = inum1++; 
	printf("inum++ = %d , iresult = %d\n",inum1,iresult);

	// float
    float fnum1 = 10.00f; 
    printf("fnum1 = %.2f\n",fnum1);
    float fresult = fnum1++; 
    printf("fnum1++ = %.2f,fresult = %.2f\n",fnum1,fresult);

    // long long
    long long lnum1 = 1000; 
    printf("lnum1 = %lld\n",lnum1); 
    long long lresult = lnum1++; 
    printf("lnum1++ = %lld,lresult = %lld\n",lnum1,lresult); 

    // double
    double dnum1 = 11.00; 
    printf("dnum1 = %.2lf\n",dnum1); 
    double dresult = dnum1++; 
    printf("dnum1++ = %.2lf,dresult = %.2lf\n",dnum1,dresult);

    return (0); 

	
}