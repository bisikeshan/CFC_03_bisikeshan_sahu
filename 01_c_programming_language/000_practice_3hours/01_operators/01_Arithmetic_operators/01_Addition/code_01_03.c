/* S.G.M.P 
 * @file: code_01_03.c
 * @brief: addition operation
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 11-04-2025 12:08PM 
 */

// Headers
#include <stdio.h>

// Entry point function 
int main(void)
{
	// code
    
    // char
	char cnum1 = 1; 
	char cnum2 = 2; 
	char cresult = cnum1 + cnum2;
	printf("%hhd + %hhd = %hhd\n",cnum1,cnum2,cresult);

	// short
	short snum1 = 10;
	short snum2 = 20;
	short sresult = snum1 + snum2;
	printf("%hd + %hd = %hd\n",snum1,snum2,sresult);

    // int
	int inum1 = 10; 
	int inum2 = 20; 
	int iresult = inum1 + inum2; 
	printf("%d + %d = %d\n",inum1,inum2,iresult);

	// float
	float fnum1 = 11.11f;
	float fnum2 = 22.22f;
	float fresult = fnum1 + fnum2; 
	printf("%f + %f = %f\n",fnum1,fnum2,fresult);

	// long 
	long long lnum1 = 11223344;
	long long lnum2 = 11223344;
	long long lresult = lnum1 + lnum2;
	printf("%lld + %lld = %lld\n",lnum1,lnum2,lresult);

	// double
	double dnum1 = 2343.45;
	double dnum2 = 2343.45;
	double dresult = dnum1 + dnum2;
	printf("%lf + %lf = %lf\n",dnum1,dnum2,dresult);

    return (0);   
}