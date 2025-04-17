// Headers
#include <stdio.h>

// global variable declaration 
int result = 0; 

// Entry point function 

int main()
{
	  // code
	 result = 1; 

	 // factorial of 5

	 for(int le = 1; le <= 5; ++le)
	 {
	 	result = result * le; 
	 }

	 printf("The factorial of 5 = %d\n",result);

	 // code repeat_01 

	 result = 1; 

	 // factorial of 5

	 for(int le = 1; le <= 5; ++le)
	 {
	 	result = result * le; 
	 }

     printf("The factorial of 5 = %d\n",result);

     // code repeat_02

     result = 1; 

     // factorial of 5

     for(int le = 1; le <= 5; ++le)
     {
     	result = result * le; 
     }

     printf("The factorial of 5 = %d\n",result);

     // code repeat_03

     result = 1; 

     // factorial of 5 

     for(int le = 1; le <= 5; le++)
     {
     	result = result * le; 
     }

     printf("The factorial of 5 = %d\n",result);


     // code repeat_04

     result = 1; 

     for(int le = 1; le <= 5; le++)
     {
     	result = result * le; 
     }

     printf("The factorial of 5 = %d\n",result);

     // code repeat_05

     result = 1; 

     for(int le = 1; le <= 5; le++)
     {
     	result = result * le; 
     }

     printf("The factorial of 5 = %d\n",result);

     return 0; 
}