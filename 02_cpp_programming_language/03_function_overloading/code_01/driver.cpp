#include <iostream>
#include "account.hpp"
#include "bank.hpp"

int main()
{
	// create a new bank
	Bank bhartiyaBank; 

	// create accounts with different methods (function overloading)
	Account* acc1 = bhartiyaBank.createAccount(101,50000.0); // with initial balance
	Account* acc2 = bhartiyaBank.createAccount(102); // with zero balance

	// Test different deposit methods (function overloading)
	std::cout << "\n=== Deposit operations ===\n";
	acc1->deposit(25000.0); // INR deposit
	acc1->deposit(200.0, 'U'); // USD deposit
	acc2->deposit(1000.0, 'D'); // Dirham deposit

	// Test different withdrawal methods (function overloading)
	std::cout << "\n=== withdrawl operations ====\n"; 
	acc1->withdraw(5000.0); // simple withdrawal 
	acc1->withdraw(2500.0,"payment for groceries from reliance fresh"); // withdrawl with note

	// Test invalid operations
	std::cout << "\n=== Invalid operations =====\n";
	acc1->deposit(-1000.0); // invalid deposit amount
	acc1->withdraw(100000.0); // insufficient funds

	// Test different balance retrieval methods (function overloading)

	std::cout << "\n==== Account balances ====\n"; 
	std::cout << "Account 101 Balance in INR: " << acc1->getBalance() << std::endl; 
	std::cout << "Account 101 Balance in USD: " << acc1->getBalance('U') << std::endl; 
	std::cout << "Account 101 Balance in Dirham: " << acc1 ->getBalance('D') << std::endl; 

	std::cout << "Account 102 Balance in INR" << acc2->getBalance() << std::endl; 

	// find an account by number
	std::cout << "\n=== Account Lookup ===\n";
	Account* foundAccount = bhartiyaBank.findAccount(101);
    if(foundAccount)
    {
    	std::cout << "Found account 101 with balance:" << foundAccount->getBalance() << std::endl; 
    }
    else
    {
    	std::cout << "Account 101 not found" << std::endl; 
    }

    // Try to find a non-exisitant account
    Account* notFoundAccount = bhartiyaBank.findAccount(999); 
    if(notFoundAccount)
    {
    	std::cout << "Found account 999 with balance: " << notFoundAccount->getBalance() << std::endl; 
    }
    else
    {
    	std::cout << "Account 999 not found" << std::endl; 
    }
   
    return 0; 

}