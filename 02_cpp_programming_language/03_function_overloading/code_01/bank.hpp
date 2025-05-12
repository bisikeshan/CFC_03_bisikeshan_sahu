#ifndef BANK_HPP
#define BANK_HPP

#include "account.hpp"

class Bank
{
// public members
public:
	Bank()
	{
		accountCount = 0; 
	}

	~Bank()
	{
		for(int le = 0; le < accountCount; le++)
		{
           delete accounts[le];
		}
	}

	// create account with initial balance
	Account* createAccount(int accountNumber,double initialBalance)
	{
		Account* newAccount = new Account(accountNumber,initialBalance);
		accounts[accountCount++] = newAccount;
		return newAccount;
	}

	// create account with zero balance
	Account* createAccount(int accountNumber)
	{
		return createAccount(accountNumber,0.0);
	}

	// Find account by number

	Account* findAccount(int accountNumber)
	{
       for(int le = 0; le < accountCount; le++)
       {
       	 if(accounts[le]->getAccountNumber() == accountNumber)
       	 	{
       	 		return accounts[le];
       	 	}
       }

       return nullptr; 
	}
// private members
private:
	Account* accounts[100];
	int accountCount;
}; 

#endif