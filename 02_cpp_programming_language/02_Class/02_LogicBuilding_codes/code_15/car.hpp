/* S.G.M.P 
 * @file: Car.hpp
 * @brief: Handls car details like model and registration number.
 * @Author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 09-03-2025 12:02pm 
 */

#pragma once

// Headers and namespaces
#include <iostream>
#include <string>

class Car
{
// public members
public:
	// Default constructor
	Car():m_sModel(""),m_sRegNumber("")
	{
		// code
	}

	// parameterised constructor

	Car(std::string in_model,std::string in_regNumber):
	m_sModel(in_model),m_sRegNumber(in_regNumber), m_bIsRented(false)
	{
		// code
	}

	// code

	void Display()
	{
		std::cout << "Model:" << this->m_sModel 
				  << ", Reg#:" << this->m_sRegNumber
				  << ", Status:" << (this->m_bIsRented ? "Rented" : "Available") << std::endl; 
	}

	// code

	void Rent()
	{
		this->m_bIsRented = true; 
	}

	// code 

	void Return()
	{
		this->m_bIsRented = false;
	}

	// code

	bool IsAvailable()
	{
		return(!this->m_bIsRented); 
	}


// private members
private: 
	std::string m_sModel; 
	std::string m_sRegNumber; 
	bool m_bIsRented; 
}; 