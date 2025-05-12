/* S.G.M.P 
 * @file: vehicle.hpp
 * @brief: Header file for vehicle class representing vehicles entering a parking lot. Tracks type, number and parking status for each vehicle. Suitable for parking sytsem simulation. Avoiding vector usage as per design ntoe. Author and date properly documented.
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 4:02pm 07-05-2025
 */

#pragma once

// Header and namespaces
#include <iostream>
#include <string>

class Vehicle
{
// public members
public:
	// default constructor 
	Vehicle():m_sNumber(""),m_sType("")
	{
		// code
	}

	Vehicle(std::string in_sNumber, std::string in_sType):
	m_sNumber(in_sNumber),m_sType(in_sType),m_bIsParked(false)
	{
		// code
	}

	// park the vehicle

	void Park()
	{
		this->m_bIsParked = true; 
		std::cout << "Vehicle" << this->m_sNumber << "parked successfully" << std::endl; 
	}

	// Remove the vehicle from parking 

	void Remove()
	{
		this->m_bIsParked = false; 
		std::cout << "Vehicle" << this->m_sNumber << "removed from parking!" << std::endl; 
	}

	// Display vehicle details

	void Display()
	{
		std::cout << "vehicle Number:" << this->m_sNumber << std::endl;
		std::cout << "Type:" << this->m_sType << std::endl; 
		std::cout << "Parked:" << (this->m_bIsParked ? "Yes" : "No") << std::endl; 


	}

	// accessor
	std::string GetNumber()
	{
		// code
		return(this->m_sNumber);
	}
// private members
private:
	std::string m_sNumber; // Vehicle number
	std::string m_sType; // vehicle type (e.g., Car, Bike)
	bool m_bIsParked; // Parking status 

}; 