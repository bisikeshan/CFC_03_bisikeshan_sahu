/* S.G.M.P 
 * @file: code_01_02.c
 * @brief: Implementation of subtration 
 * @author: bisikeshan567@gmail.com (bisikeshan567@gmail.com)
 * @date: 11-04-2025 12:18PM 
 */

// Headers
#include <stdio.h>

// Entry point function
int main(void)
{
	// code
	char cnum1 = 10; 
	char cnum2 = 5; 
	char cresult = cnum1 - cnum2; 
	printf("%hd - %hd = %hd\n",cnum1,cnum2,cresult);

	short snum1 = 11;
	short snum2 = 10; 
	short sresult = snum1 - snum2;
	printf("%hd - %hd = %hd\n",snum1,snum2,sresult);

	int inum1 = 50; 
	int inum2 = 33;
	int iresult = inum1 - inum2; 
	printf("%d - %d = %d\n",inum1,inum2,iresult);

	float fnum1 = 12.12;
	float fnum2 = 11.11;
	float fresult = fnum1 - fnum2;
	printf("%.2f - %.2f = %.2f\n",fnum1,fnum2,fresult);

	long long lnum1 = 12121212;
	long long lnum2 = 10101010; 
	long long lresult = lnum1 - lnum2; 
	printf("%lld - %lld = %lld \n",lnum1,lnum2,lresult); 

	double dnum1 = 1234.23;
	double dnum2 = 3423.33;
	double dresult = dnum1 - dnum2; 
	printf("%.2lf - %.2lf = %.2lf\n",dnum1,dnum2,dresult);

	return (0); 
}