/* S.G.M.P 
 * @file : code_03.c
 * @brief: Implementation of Decrement Operation (pre-decrement)
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 15-04-2025 10:18PM 
 */

// Headers
#include <stdio.h>

// Entry point function 
int main(void)
{
	// code
	// char
	char cnum1 = 10; 
	printf("cnum1 = %hhd\n",cnum1); 
	char cresult = --cnum1; 
	printf("cresult = %hhd,--cnum1 = %hhd\n",cresult,cnum1); 

	// short
	short snum1 = 10; 
	printf("snum1 = %hd\n",snum1); 
	short sresult = --snum1; 
	printf("sresult = %hd, --snum1 = %hhd\n",sresult,snum1); 

	// int
	int inum1 = 10; 
	printf("inum1 = %d\n",inum1); 
	int iresult = --inum1; 
	printf("iresult = %d,--inum1 = %d\n",iresult,inum1); 

	// float
	float fnum1 = 10.00f; 
	printf("fnum1 = %.2f\n",fnum1); 
	float fresult = --fnum1; 
	printf("fresult = %.2f, fnum1 = %.2f\n",fresult,fnum1); 

	// long 
	long long lnum1 = 10000; 
	printf("lnum1 = %lld\n",lnum1); 
	long long lresult = --lnum1; 
	printf("lresult = %lld, --lnum1 = %lld\n",lresult,lnum1); 

	// double
	double dnum1 = 100.00; 
	printf("dnum1 = %.2lf\n",dnum1); 
	double dresult = --dnum1; 
	printf("dresult = %.2lf, --dnum1 = %.2lf\n",dresult,dnum1); 

	return (0); 
}