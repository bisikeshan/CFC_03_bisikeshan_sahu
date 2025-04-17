	// Headers
#include <stdio.h>

/*  Determine discount on a shopping bill
If bill < ₹500, no discount.
If bill ₹500-₹1000, 10% discount.
If bill > ₹1000, 20% discount.
Print the final amount to be paid.
*/

// Entry point function 
int main(void)                       
{    
               
    int bill = 502 , discount = 0;  

    float final_price;

    if( bill < 500 && bill > 0)
    {
        printf(" no discount\n");
    } 
    else if(bill >= 500 && bill <= 1000)
    {  
          discount = 10; 
         final_price = bill - (bill *  discount / 100);
        printf(" 10 percent discount\n");
        printf(" Your amount is %d Rs The final amount to be paid = %f Rs \n",bill,final_price);
    }
    else
    {     discount = 20; 
        final_price = bill - (bill *  discount / 100);
        printf(" 20 percent discount\n");
        printf(" Your amount is %d Rs The final amount to be paid = %f Rs\n ",bill,final_price);
    }

    return 0; 

    
}