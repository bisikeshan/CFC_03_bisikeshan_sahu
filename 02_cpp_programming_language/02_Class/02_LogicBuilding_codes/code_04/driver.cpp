/* S.G.M.P 
 * @file: driver.cpp
 * @brief: Driver file to test the GradeBook and student classes
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 23-04-2025 1:19pm 
 */

// Headers and namespaces
#include "bank.hpp"

// Entry point function
int main(void)
{
	// create BankAccount object
	BankAccount objAccount1("John Doe",1000.00); 
	BankAccount objAccount2("Jane Smith",500.00); 

    // Create Bank object
    Bank objBank; 

    // Add accounts to the bank 
    objBank.AddAccount(objAccount1); 
    objBank.AddAccount(objAccount2); 

    // Display all accounts in the bank 
    objBank.DisplayAccounts(); 

    // perform desposit and withdrawal
    objAccount1.Deposit(500.00);
    objAccount2.WithDraw(200.00); 

    return (0); // End of the program 
}