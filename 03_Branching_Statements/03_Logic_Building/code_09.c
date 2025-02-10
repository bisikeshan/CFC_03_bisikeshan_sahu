// headers
#include <stdio.h>

/* This program determines the season based on the given month number 
   winter: December(12), January(1),February(2)
   spring: March(3) to May(5)
   summer: June(6) to August(8)
   Autumn: September(9) to November(11)
*/

// Entry point function 
int main(void)
{
	int month = 4; 
	if( month == 12 || month == 1|| month == 2)
	{
		printf("season: winter\n");
	}
	else if(month >= 3 && month <= 5)
	{
		printf("season: spring\n ");
	}
	else if(month >= 6 && month <= 8)
	{
		printf("season: summer\n");
	}
	else 
	{
		printf("season: Autumn");
	}
	return 0; 
}