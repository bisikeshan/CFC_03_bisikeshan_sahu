//10. Simulate a Simple Countdown Timer: Write a program to simulate a countdown timer from N to 0, where N is user input, using a loop.


// Headers

#include <stdio.h>

// Entry point function 
int main()
{
	int n = 20; 
	for(int le = n; le >= 0; le--)
	{
		printf("countdownTimer: time remaing %d\n",le);
	}

	return 0; 
}