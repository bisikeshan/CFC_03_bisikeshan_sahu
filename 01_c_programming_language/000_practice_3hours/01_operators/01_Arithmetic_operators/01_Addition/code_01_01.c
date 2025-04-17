/* S.G.M.P 
 * @file: code_01_01.c
 * @brief: Addition
 * @author: bisikeshan sahu (biskeshan567@gmail.com)
 * @date: 11-04-2025 11:30am
 */

#include <stdio.h>

int main(void)
{
	 char cnum1 = 1;
	 char cnum2 = 2; 
	 char cresult = cnum1 + cnum2; 
	 printf("%hhd + %hhd = %hhd\n",cnum1,cnum2,cresult);
    
	 short snum1 = 10; 
	 short snum2 = 11; 
	 short sresult = snum1 + snum2; 
	 printf("%hd + %hd = %hd\n",snum1,snum2,sresult); 
    
	 int inum1 = 10; 
	 int inum2 = 20;
	 int iresult = inum1 + inum2; 
	 printf("%d + %d = %d\n",inum1,inum2,iresult); 

	 float fnum1 = 10.00f;
	 float fnum2 = 11.00f; 
	 float fresult = fnum1 + fnum2; 
	 printf("%f + %f = %f\n",fnum1,fnum2,fresult); 

	 double dnum1 = 34324.10; 
	 double dnum2 = 34342.10; 
	 double dresult = dnum1 + dnum2; 
	 printf("%lf + %lf = %lf\n",dnum1,dnum2,dresult); 

     long long lnum1 = 34234234; 
     long long lnum2 = 34343423; 
     long long lresult = lnum1 + lnum2; 
     printf(" %lld + %lld = %lld\n",lnum1,lnum2,lresult); 

	 return (0);  
}