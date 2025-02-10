// Header
#include <stdio.h>

/* 1️. Check if a store is open or closed based on the time
A store operates between 9 AM and 9 PM.
Given a time (in 24-hour format), determine if the store is open or closed.
*/

// Entry point function 

int main (void)

{
        int store_time = 8; // time in 24 hour format

        if( store_time >= 9 && store_time <= 21)
        {
        	printf(" store is open.\n");
        }
        else
        {
        	printf("store is closed.\n");
        }

        return 0; 

}