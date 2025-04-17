/* S.G.M.P 
 * @file: code_03.c
 * @brief: Implementation of Division(Remainder) operation
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 11-04-2025 11:42am
 */

// Headers
#include <stdio.h>

// Entry point function 
int main()
{
	//code

	// char
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
	float fnum1 = 10.0f; 
	float fnum2 = 5.0f; 
	float fresult = fnum1 % fnum2; 
    printf("%.2f %% %.2f = %.2f\n",fnum1,fnum2,fresult);

    // long 
    long long lnum1 = 10000; 
    long long lnum2 = 1000; 
    long long lresult = lnum1 % lnum2; 
    printf("%lld %% %lld = %lld\n",lnum1,lnum2,lresult);

    // double
    double dnum1 = 10.00;
    double dnum2 = 10.00; 
    double dresult = dnum1 % dnum2; 
    printf("%.2lf %% %.2lf = %.2lf\n",lnum1,lnum2,lresult);

    return (0);

}