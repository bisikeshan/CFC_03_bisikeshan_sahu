// Headers
#include <stdio.h>

/*  Check if a given date is valid
Given a day, month, and year, check if the date is valid.
Consider leap years while validating February. */

// Entry point function 

int main(void)
{
	 int day = 31, month= 12, year = 2024; 


	   if( day == 29 && month == 2)
	   {
	   	   if((year % 4 == 0 && year % 100 != 0 ) || (year % 400 ==0))
	   	   {
	   	   	 printf("It's a leap year\n");
	   	   }
	   	   else
	   	   {
	   	   	 printf("It's invalid date\n");
	   	   }
	   }
	   else if((day >= 1 && day <= 28) && month == 2)
	   {
	   	 if((year % 4 == 0 && year % 100 != 0 ) || (year % 400 ==0))
	   	 {
	   	 	 printf("It's invalid date\n");
	   	 }
	   }
      else if((month == 4 || month == 6 || month == 9 || month == 11) && (day >= 1 && day <= 30))
	  	 	{
	  	 		printf("It's a valid date \n");
	  	 	}
	  else if((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && ( day >= 1 && day <= 31))
	  	 	{
	  	 		printf("It's a valid date \n");
	  	 	}
	  	 	else
	  	 	{
	  	 		printf("It's a invalid date\n");
	  	 	}
	  	 
	  	 return 0; 
	  	}
	    
	 

