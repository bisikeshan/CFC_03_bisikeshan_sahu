// Header
#include <stdio.h>

/* Check if a vehicle is allowed to enter a toll-free lane
Vehicles allowed: Ambulance, Police, Fire Brigade.
Other vehicles must pay a toll fee.
Print if the vehicle is toll-free or not */

// Entry point function 
int main(void)
{
     char vehicle = 'C';// 'A' for ambulance 'P' for polic 'F' for fire Brigade

     switch(vehicle)
     {
     	  case 'A':
     	  	printf("vehicle is toll free\n");
          break; 

          case 'P':
          	printf("vehicle is toll free\n");
          break; 

          case 'F':
          	printf("vehicle is toll free\n");
          break; 
          
          default:
          	printf("vehicle is not toll free\n");
          break; 

      }

      return 0; 
    }    	