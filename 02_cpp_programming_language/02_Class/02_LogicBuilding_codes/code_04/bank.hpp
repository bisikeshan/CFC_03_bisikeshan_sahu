/* S.G.M.P 
 * @file: bank.hpp
 * @brief: Header file for Bank class to manage a collectio of bank accounts.
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 23-04-2025 12:29pm 
 */


#pragma once

// Headers & namespaces
#include "bankaccount.hpp"

// class Bank 
class Bank
{
// public members
public:
	// default constructor
	Bank(): m_iAccountCount(0)
	{
		// code
	}

	// function to add a new bank account to the bank 
	void AddAccount(const BankAccount& in_dAccount)
	{
		// code
		if(this->m_iAccountCount < MAX_ACCOUNTS)
		{
			this->m_accounts[this->m_iAccountCount] = in_dAccount; 
			this->m_iAccountCount++; // Increment the account count
		}
		else
		{
			std::cout << "Bank is full" << std::endl; // Bank is full 
		}
	}

	// function to display all bank accounts
	void DisplayAccounts()
	{
		// code
		for(int le = 0; le < this->m_iAccountCount; le++)
		{
			this->m_accounts[le].DisplayDetails(); 
		}
	}
	
// private members
private: 
	static const int MAX_ACCOUNTS = 5; // maximum number of accounts allowed in the bank 
	BankAccount m_accounts[MAX_ACCOUNTS]; // array of bank account objects to store accounts
	int m_iAccountCount; 
}; 