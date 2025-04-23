/* S.G.M.P 
 * @file: bankaccount.hpp
 * @brief: Header file for bankacount class to manage a customer's bank account.
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 23-04-2025 12:31pm 
 */


#pragma once

// Headers and namespaces
#include <iostream>
#include <string>

// class BankAccount
class BankAccount
{
// public members
public:
	// default constructor
	BankAccount():m_sAccountHolder(""),m_dBalance(0.0)
	{
		// code
	}

	// paramterised constructor
	BankAccount(std::string in_sName,double in_dBalance): 
	m_sAccountHolder(in_sName),m_dBalance(in_dBalance) 
	{
		// code
	}

	// function to desposit money into the bank account

	void Deposit(double in_dAmount)
	{
		// code 
		// check if the deposit amount is positive 
		if(in_dAmount > 0)
		{
			this->m_dBalance += in_dAmount; 
			std::cout << "Deposited: rs" << in_dAmount << std::endl; 
		}
		else
		{
			std::cout << "Invalid deposit amount !" << std::endl;  // invalid number
		}
	}

	// function to withdrawn money into the bank account

	void WithDraw(double in_dAmount)
	{
		// code
		if(in_dAmount > 0 && in_dAmount <= this->m_dBalance)
		{
			this->m_dBalance -= in_dAmount; 
			std::cout << "Withdrawn: $" << m_dBalance << std::endl; 
		}
		else
		{
			// Insufficient balance or invalid amount
			std::cout << "Insufficient balance or invalid amount!" << std::endl; 
		}
	}

	// function to display details
	void DisplayDetails()
	{
		// code
		std::cout << "Account Holder: " << this->m_sAccountHolder << std::endl; 
		std::cout << "Balance: rs" << this->m_dBalance <<std::endl; 
	}
// private members
private:
	std::string m_sAccountHolder; // Account holder's name
	double m_dBalance; // Account balance

}; 
