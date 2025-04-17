/* S.G.M.P 
 * @file: code_01.c
 * @brief: Implementation of Division(Remainder)Operation
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 13-04-2025 11:15am 
 */

// Headers 
#include <stdio.h>

// Entry point function 
int main()
{
	//code
	// int
	char cnum1 = 10; 
	char cnum2 = 5; 
	char cresult = cnum1 % cnum2; 
	printf("%hhd %% %hhd = %hhd\n",cnum1,cnum2,cresult);

    // short
	short snum1 = 10; 
	short snum2 = 5; 
	short sresult = snum1 % snum2; 
	printf("%hd %% %hd = %hd\n",snum1,snum2,sresult);

    // int
	int inum1 = 10; 
	int inum2 = 5; 
	int iresult = inum1 % inum2; 
	printf("%d %% %d = %d\n",inum1,inum2,iresult);
   
    // float
	float fnum1 = 10.00f;
	float fnum2 = 5.00f; 
	float fresult = fnum1 % fnum2;
	printf("%.2f %% %.2f = %.2f\n",fnum1,fnum2,fresult);
   
    // long
	long long lnum1 = 100;
	long long lnum2 = 50; 
	long long lresult = lnum1 % lnum2; 
	printf("%lld %% %lld = %lld\n",lnum1,lnum2,lresult);

    // double
	double dnum1 = 100.000; 
	double dnum2 = 50.000; 
	double dresult = dnum1 % dnum2; 
	printf("%.2lf %% %.2lf = %.2lf\n",dnum1,dnum2,dresult);

	return (0);
}