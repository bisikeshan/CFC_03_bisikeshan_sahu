// Header
#include <stdio.h>

// Entry point function 
int main(void)
{
	int day = 7; // 1: monday , 7: sunday
	if(day == 6 || day == 7)
	{  // True Block 
		printf("It's a weekend\n");
	}
	else
	{
		// false block
		printf("It's a weekday\n");
	}
}  