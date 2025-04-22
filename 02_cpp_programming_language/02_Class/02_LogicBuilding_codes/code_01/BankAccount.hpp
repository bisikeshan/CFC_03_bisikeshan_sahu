/* S.G.M.P 
 * @file: BankAccount.hpp
 * @brief: 
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 18-04-2025 10:22am
 */

#pragma once

// Headers & namespaces
#include <iostream>
#include <string>

class BankAccount
{
// public members
public: 
	// paremeterized constructor
	BankAccount(std::string in_holder,std::string in_type,double in_balance): m_sHolderName(in_holder),m_sAccountType(in_type),m_dBalance(in_balance){}

	void Deposit(double in_amount)
	{
		// code
		if(in_amount > 0)
		{
			this->m_dBalance += in_amount; 
		}
	}

	void WithDraw(double in_amount)
	{
		if(in_amount > 0 && in_amount <= this->m_dBalance)
		{
			this-> m_dBalance -= in_amount;
		}
	}

	void DisplayDetail()
	{
		std::cout << "Holder" << this->m_sHolderName << std::endl;
		std::cout << "Account Type:" << this->m_sAccountType << std::endl; 
		std::cout << "Balance:" << this->m_dBalance << std::endl;
	}

    bool IsMinimumBalanceMaintained()
    {
    	if(this->m_dBalance >= 500)
    	{
    		return(true);
    	}
    	return(false); 
    }


// private members
private: 
	std::string m_sHolderName; 
	std::string m_sAccountType;
	double m_dBalance; 

};