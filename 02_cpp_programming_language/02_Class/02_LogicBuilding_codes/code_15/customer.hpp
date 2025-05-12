/* S.G.M.P 
 * @file: customer.hpp
 * @brief: stores customer information.
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 09-05-2025 11:57am 
 */

#pragma once

// Headers and namespaces
#include <iostream>
#include <string>

class Customer
{
// public members
public: 
	// default customer
	Customer():m_sName(""),m_sPhone("")
    {
    	// code
    }

    // Default customer
    Customer(std::string in_name, std::string in_phone):
    m_sName(in_name),m_sPhone(in_phone)
    {
    	// code
    }

    void Display()
    {
    	std::cout << "Customer Name: " << this->m_sName 
    	          << ", Phone" << this->m_sPhone << std::endl; 
    }
// private members
private: 
	std::string m_sName; 
	std::string m_sPhone; 
};