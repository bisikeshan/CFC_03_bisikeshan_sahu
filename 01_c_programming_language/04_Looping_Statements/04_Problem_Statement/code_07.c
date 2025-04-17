//Find the Sum of All Even Digits in a Number: Write a program to find and print the sum of all even digits present in a given number using a loop.
#include <stdio.h>

int main()
{   
	 int num = 10,sum = 0; 
	for( int le = 2; le <= num; le++)
	   {
        if(le % 2 == 0)
            {
            	printf("%d + ",le);
                 sum += le;
             }
        }
  
        printf("\nsum of all numbers is %d\n",sum);

        

	return 0; 
}