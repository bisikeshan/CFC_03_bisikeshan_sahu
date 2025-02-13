// Header
#include <stdio.h>

/* 1️. Check if a store is open or closed based on the time
A store operates between 9 AM and 9 PM.
Given a time (in 24-hour format), determine if the store is open or closed.
*/

// Entry point function 

int main (void)

{        
        int time = 15;  //  24 hour format ( value from 1 to 24 )

        if(( time >= 1 && time <= 24) && ( time >= 9 && time <= 21))
        {    
            printf("store is open\n");
        } 

        else if( (time >= 1 && time <= 9) || (time >= 21 && time <= 24))
        {
             printf("store is closed\n");
        }                
        else
        {
                printf("invalid time\n");
        }

        return 0; 

}