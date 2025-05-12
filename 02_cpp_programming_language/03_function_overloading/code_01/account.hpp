/* S.G.M.P 
 * @file: account.hpp
 * @brief: header files for account.hpp to manage account details
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 01-05-2025 3:47pm 
 */

#ifndef ACCOUNT_HPP
#define ACCOUNT_HPP

#include <iostream>

class Account
{
// public members
public:
	// default constructor
	Account():m_iAccountNumber(0),m_dBalance(0.0),m_dInrToUsd(0.0),m_dInrToDirham(0.0)
	{
		// code
	}

	// paramterised constructor
	// Account(int in_iAccountNumber,double in_dBalance,double in_dInrToUsd,double in_dInrToDirham):
	// m_iAccountNumber(in_iAccountNumber),m_dBalance(in_dBalance),m_dInrToUsd(in_dInrToUsd),m_dInrToDhirham(in_dInrToDirham)
	// {
	// 	// code
	// }

	Account(int in_iAccountNumber,double in_dInitialBalance)
	{
	     this->m_iAccountNumber = in_iAccountNumber; 
	     this->m_dBalance = in_dInitialBalance; 
	     this->m_dInrToUsd = 0.012; // 1 Inr = 0.012 USD (approx)
	     this->m_dInrToDirham = 0.044; // 1 INR = 0.044 (approx)
	}

	// Deposit in INR(default)
	void deposit(double in_dAmount)
	{
		if(in_dAmount > 0)
		{
			this->m_dBalance += in_dAmount; 
			std::cout << "Deposited" << in_dAmount << "INR" << std::endl; 
        }
        else
        {
        	std::cout << "Invalid deposit amount" << std::endl; 
        }
	}

	// Deposit in USD or Dirham 

	void deposit(double in_dAmount, char in_cCurrency)
	{
		if(in_dAmount <= 0)
		{
			std::cout << "Invalid deposit amount" << std::endl; 
			return;
		}

		if(in_cCurrency == 'U')
		{
			double dInrAmount = in_dAmount / m_dInrToUsd;
			this->m_dBalance += dInrAmount;

			std::cout << "Deposited" << in_dAmount << "(=" << dInrAmount << "INR)" << std::endl; 

		}
		else if(in_cCurrency == 'D')
		{
			double dInrAmount = in_dAmount / m_dInrToUsd; 
			this->m_dBalance += dInrAmount; 
			std::cout << "Deposited" << in_dAmount << "(=" << dInrAmount << "INR)" << std::endl; 
       }
       else
       {
       	 std::cout << "Unsupported currency" << std::endl; 
       }


	}

	bool withdraw(double in_dAmount)
	{
		if(in_dAmount <= 0)
		{
			std::cout << "Invalid withdrawal amount" << std::endl; 
			return false; 
		}

		if(in_dAmount > m_dBalance)
		{
			std::cout << "Insufficient funds" << std::endl; 
			return false; 
		}

		m_dBalance -= in_dAmount; 
		std::cout << "withdraw" << in_dAmount << "INR" << std::endl; 
		return true;
	}

	// withdraw with note

	bool withdraw(double in_dAmount, const char* note)
	{
		bool success = withdraw(in_dAmount);
		if(success)
		{
			std::cout << "Note:" << note << std::endl; 
		}

		return success;
	}

	// Get balance in INR
	double getBalance()
	{
		return m_dBalance; 
	}

	// Get balance in specified currency
	double getBalance(char currency)
	{
		if(currency == 'U')
		{
			return m_dBalance * m_dInrToUsd; 
		}
		else if(currency == 'D')
		{
			return m_dBalance * m_dInrToDirham;
		}
		else
		{
			return m_dBalance; // Default INR
		}
	}

	int getAccountNumber()
	{
		return m_iAccountNumber;
	}


// private members
private:
	int m_iAccountNumber; 
	double m_dBalance; 
	double m_dInrToUsd; 
	double m_dInrToDirham; 

};

#endif