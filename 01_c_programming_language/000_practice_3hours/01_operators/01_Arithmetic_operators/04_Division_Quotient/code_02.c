/* S.G.M.P 
 * @file: code_02.c
 * @brief: Implementation of Division(Quotient)operation
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 11-04-2025 2:22PM 
 */

// Headers
#include <stdio.h>

// Entry point function 
int main(void)
{
	// code
	char cnum1 = 10; 
	char cnum2 = 5; 
	char cresult = cnum1 / cnum2; 
	printf("%hhd / %hhd = %hhd\n",cnum1,cnum2,cresult); 

	short snum1 = 10; 
	short snum2 = 5; 
	short sresult = snum1 / snum2; 
	printf("%hd / %hd = %hd\n",snum1,snum2,sresult); 

    int inum1 = 50; 
    int inum2 = 5; 
    int iresult = inum1 / inum2; 
    printf("%d / %d = %d\n",inum1,inum2,iresult); 

    float fnum1 = 22.22f; 
    float fnum2 = 2.0f; 
    float fresult = fnum1 / fnum2; 
    printf("%.2f / %.2f = %.2f\n",fnum1,fnum2,fresult); 

    long long lnum1 = 3434234; 
    long long lnum2 = 3434; 
    long long lresult = lnum1 / lnum2; 
    printf("%lld / %lld = %lld\n",lnum1,lnum2,lresult);

    double dnum1 = 34342.22; 
    double dnum2 = 2.0;
    double dresult = dnum1 / dnum2; 
    printf("%.2lf / %.2lf = %.2lf\n",dnum1,dnum2,dresult);  

    return(0); 
}