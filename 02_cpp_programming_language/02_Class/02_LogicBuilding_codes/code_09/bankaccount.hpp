/* S.G.M.P 
 * @file: bankaccount.hpp
 * @brief: Header file BankAccount to manage customer details and transcations.
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 01-05-2025 9:22am 
 */

#pragma once

// Headers and namespaces
#include <iostream>
#include <string>

class BankAccount
{
// public members
public: 
	// default constructor
	BankAccount():m_sCustomerName(""),m_iAccountNumber(0),m_dBalance(0.0)
	{
		// code
	}
 
    // paramterised constructor
	BankAccount(std::string in_sCustomerName,int in_iAccountNumber,double in_dBalance):
	m_sCustomerName(in_sCustomerName),m_iAccountNumber(in_iAccountNumber),m_dBalance(in_dBalance)
	{
		// code
	}

   // function to deposit money into the account

	void Deposit(double in_amount)
	{
		// check if the deposit amount is positive
		if(in_amount > 0 )
		{
			this->m_dBalance += in_amount; 
			std::cout << "Deposited: $" << in_amount << std::endl;  
		}
		else
		{
			std::cout << "Deposit amount must be positive! " << std::endl; 
		}
	}

	// function to withdraw money from the account

	void Withdraw(double in_amount)
	{
		// check if withdrawal is possible( account has sufficient balance)
		if(in_amount > 0 && this->m_dBalance >= in_amount)
		{
			this->m_dBalance -= in_amount; 
			std::cout << "Withdrawn: $" << in_amount << std::endl; 
		}
		else
		{
			std::cout << "Insufficient balance or invalid amount " << std::endl; 

		}
	}

	// function to display account details

	void DisplayAccountDetails()
	{
		// Display customer name, account number, and balance 
		std::cout << "Customer Name: " << this->m_sCustomerName << std::endl; 
		std::cout << "Account Number" << this->m_iAccountNumber << std::endl; 
		std::cout << "Account Balance" << this->m_dBalance << std::endl; 
	}

	// Accessor
	int getAccountNumber()
	{
		return(this->m_iAccountNumber); 
	}


// private members
private: 
	std::string m_sCustomerName; // Customer name
	int m_iAccountNumber; // Account number
	double m_dBalance; // Account Balance
}; 