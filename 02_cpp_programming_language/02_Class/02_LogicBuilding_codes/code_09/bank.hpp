/* S.G.M.P 
 * @file: bank.hpp
 * @brief: Header file for Bank class to manage multiple accounts.
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 01-05-2025 9:56am 
 */

#pragma once

#include "bankaccount.hpp"

class Bank
{
// public members
public:
	// default constructor
	Bank(): m_iAccountCount(0)
	{
		// code
	} 

	// function to add a new account to the bank 
	void AddAccount(const BankAccount& in_account)
	{
		// add account to the bank 
		if(this->m_iAccountCount < MAX_ACCOUNTS)
		{
			this->m_accounts[this->m_iAccountCount] = in_account; 
			this->m_iAccountCount++; 
		}
		else
		{
			std::cout << "Bank has reached maximum account limit!" << std::endl; 
		}
	}

	void DisplayAllAccounts()
	{
		// loop through all accounts and display account details
		for(int le = 0; le < this->m_iAccountCount; le++)
		{
			this->m_accounts[le].DisplayAccountDetails(); 
		}
	}

	// function to find an account by account number

	BankAccount* FindAccountByNumber(int in_accountNumber)
	{
		// loop through all accounts to find the matching account number
		for(int le = 0; le < this->m_iAccountCount; le++)
		{
			if(this->m_accounts[le].getAccountNumber() == in_accountNumber)
			{
				return &this->m_accounts[le];// Return the account pointer 
			}

			std::cout << "Account not found!" << std::endl; 
           
		}
		 return nullptr; 
	}

// private members
private: 
	static const int MAX_ACCOUNTS = 100; // maximum number of accounts in the bank 
	BankAccount m_accounts[MAX_ACCOUNTS]; // array of bankaccount objects
	int m_iAccountCount;  

};