/* S.G.M.P 
 * @file: code_03.c
 * @brief: implementation of multipliation operation 
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 11-04-2025 13:51PM 
 */

// Headers
#include <stdio.h>

// Entry point function 
int main(void)
{
	//code
	char cnum1 = 10;
	char cnum2 = 12;
	char cresult = cnum1 * cnum2; 
	printf("%hhd * %hhd = %hhd\n",cnum1,cnum2,cresult); 

	short snum1 = 12; 
	short snum2 = 34; 
	short sresult = snum1 * snum2;
	printf("%hd * %hd = %hd\n",snum1,snum2,sresult);  

	int inum1 = 12; 
	int inum2 = 10; 
	int iresult = inum1 * inum2; 
	printf("%d * %d = %d\n",inum1,inum2,iresult); 

	float fnum1 = 23.12f; 
	float fnum2 = 11.24f; 
	float fresult = fnum1 * fnum2; 
	printf("%.2f * %.2f = %.2f\n",fnum1,fnum2,fresult); 

	long long lnum1 = 34344; 
	long long lnum2 = 34323; 
	long long lresult = lnum1 * lnum2; 
	printf("%lld * %lld = %lld\n",lnum1,lnum2,lresult);

	double dnum1 = 1343.10; 
	double dnum2 = 1343.12; 
	double dresult = dnum1 * dnum2; 
	printf("%.2lf * %.2lf = %.2f\n",dnum1,dnum2,dresult); 

	return (0); 

}