/* S.G.M.P 
 * @file: driver.cpp
 * @brief: 
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 18-04-2025 11:46am
 */

// Headers & Namespaces
#include "BankAccount.hpp"

// Entry point function 
int main(void)
{
	// code
	// create BankAccountObject
	BankAccount account("JoHn Doe","saving",1000.00);

	// Deposit money into an account
	account.Deposit(200.00); 
	account.DisplayDetail(); 

	// Deposit money into an account
	account.Deposit(800.00);
	account.DisplayDetail();

	// WithDraw money from an account
	account.WithDraw(100.00);
	account.DisplayDetail();

	// WithDraw money from an account
	account.WithDraw(500.00);
	account.DisplayDetail();

	return(0); 
}