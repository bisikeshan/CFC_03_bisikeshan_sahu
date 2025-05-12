/* S.G.M.P 
 * @file: driver.cpp
 * @brief: Driver file to test the BankAccount and Bank classes.
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 01-05-2025 10:02am 
 */

#include "Bank.hpp"

int main()
{
	// Create BankAccount objects
	BankAccount objAccount1("John Doe",1234456789,1000.00); 
	BankAccount objAccount2("Jane smith",987668688,5000.00); 

	// create bank object
	Bank objBank; 

	// add account to the bank 
	objBank.AddAccount(objAccount1); 
	objBank.AddAccount(objAccount2); 

	// Display all accounts in the bank 
	objBank.DisplayAllAccounts(); 

	// Deposit money into an account
	objAccount1.Deposit(200.00); 
	objBank.DisplayAllAccounts(); 

	// Withdraw money from an account
	objAccount2.Withdraw(1000.00); 
	objBank.DisplayAllAccounts();

	// find an account by account number
	BankAccount* pFoundAccount = objBank.FindAccountByNumber(123456789); 

	if(pFoundAccount != nullptr)
	{
		pFoundAccount->DisplayAccountDetails(); //Display found account details
	}

	return (0); // end of the program 
}