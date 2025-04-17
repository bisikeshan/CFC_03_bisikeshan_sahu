/* S.G.M.P 
 * @file: code_01.c
 * @brief: Implemenation of decrement operation (pre decrement)
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 15-04-2025 4:34PM 
 */

// Headers
#include <stdio.h>

// Entry point function 
int main(void)
{
	// code
	// char
	char cnum1 = 10; 
	printf("cnum1 = %hhd, --cnum1 = %hhd\n",cnum1,--cnum1); 
	char cresult = --cnum1; 
	printf("cresult = %hhd\n",cresult); 

	// short
	short snum1 = 10; 
	printf("snum1 = %hd, --snum1 = %hd\n",snum1,--snum1); 
	short sresult = --snum1; 
	printf("sresult = %hd\n",sresult); 

	// int 
	int inum1 = 10; 
	printf("inum1 = %d, --inum1 = %d\n",inum1,--inum1); 
	int iresult = --inum1; 
	printf("iresult = %d\n",iresult);

	// float
	float fnum1 = 10.00f; 
	printf("fnum1 = %.2f,--fnum1 = %.2f\n",fnum1,--fnum1); 
	float fresult = --fnum1; 
	printf("fresult = %.2f\n",fresult); 

	// long long 
	long long lnum1 = 1111; 
	printf("lnum1 = %lld, --lnum1 = %lld\n",lnum1,--lnum1);
	long long lresult = --lnum1; 
	printf("lresult = %lld\n",lresult); 

	// double
	double dnum1 = 1000.00; 
	printf("dnum1 = %.2lf,--dnum1 = %.2lf\n",dnum1,--dnum1); 
	double dresult = --dnum1; 
	printf("dresult = %.2lf\n",dresult); 

	return (0); 


	// short
}