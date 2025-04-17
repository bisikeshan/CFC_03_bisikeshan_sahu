// Headers
#include <stdio.h>

// Entry point function 
/*
    Decide whether a hotel booking qualifies for free breakfast
If the room type is 'Deluxe' or 'Suite', free breakfast is included.
Otherwise, breakfast costs ₹300 per person.
Print if breakfast is free or chargeable.
*/

int main (void)
{   
	char room_type = 'D';
    char Delux = 'D', Suite = 'S'; // delux represent as D and Suite represent as S and O for others
    
    if( room_type == 'D' || room_type == 'S')
    {
    	printf("Breakfast is free !\n");
    }
    else
    {
    	printf("Breakfast is chargeable 300rs per person\n");
    }

    return 0; 

    
}
