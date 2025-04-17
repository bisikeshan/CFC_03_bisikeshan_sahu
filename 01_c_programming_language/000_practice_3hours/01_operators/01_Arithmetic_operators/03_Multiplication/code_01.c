/* S.G.M.P 
 * @file: code_01_01.c
 * @brief: Implementation of multiplication operation
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 11-04-2025 13:36PM 
 */

// Headers
#include <stdio.h>

// Entry point function 
int main(void)
{
	// code
	char cnum1 = 10; 
	char cnum2 = 5; 
	char cresult = cnum1 * cnum2; 
	printf("%hhd * %hhd = %hhd\n",cnum1,cnum2,cresult);

	short snum1 = 10; 
	short snum2 = 2; 
	short sresult = snum1 * snum2; 
	printf("%hd * %hd = %hd\n",snum1,snum2,sresult); 

	int inum1 = 50; 
	int inum2 = 40; 
	int iresult = inum1 * inum2; 
	printf("%d * %d = %d\n",inum1,inum2,iresult);

	float fnum1 = 46.78; 
	float fnum2 = 33.33; 
	float fresult = fnum1 * fnum2; 
	printf("%.2f * %.2f = %.2f\n",fnum1,fnum2,fresult); 

	long long lnum1 = 23423; 
	long long lnum2 = 32; 
	long long lresult = lnum1 * lnum2; 
	printf("%lld * %lld = %lld\n",lnum1,lnum2,lresult); 

	double dnum1 = 2343.12; 
	double dnum2 = 342.23; 
	double dresult = dnum1 * dnum2; 
	printf("%.2lf * %.2lf = %.2lf\n",dnum1,dnum2,dresult);

	return (0);  
}