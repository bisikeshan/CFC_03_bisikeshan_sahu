// Headers
#include <stdio.h>

/*
. Determine the electricity bill based on units consumed
If units are <= 100, charge ₹5 per unit.
If units are 101-300, charge ₹8 per unit.
If units are > 300, charge ₹10 per unit.
Print the total bill amount.
*/

// Entry point function 

int main(void)
{
	 int unit = 350; 

	 if(unit <= 100)
	 {
	 	 unit = 5 * unit; 
	 	 printf("your totoal amount is: %d rs \n",unit);
	 }
	 else if(unit >= 100 && unit <= 300)
	 {
	 	unit = 8 * unit; 
	 	printf("your total amount is : %d rs\n",unit);
	 }
	 else{

	 	unit = 10 * unit; 
	 	printf("your total bill amount is: %d rs \n",unit);
	 }

	 return 0; 
}