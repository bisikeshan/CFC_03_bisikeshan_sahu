/* S.G.M.P 
 * @file: car.hpp
 * @brief: child class car
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 30-04-2025 9:13am 
 */

#pragma once

// Headers & namespaces
#include <iostream>
#include "vehicle.hpp"

// class type definition
class Car: public Vehicle
{
// public members
public: 
	// default constructor
	Car(): m_iColor(0),m_iNRGears(0),m_iType(0)
	{
		// code
	}

	Car(int in_iColor,
		int in_iNRGears,
		int in_iType,
		int in_iNRWheels,
		int in_iNRSeats,
		float in_fFuelCapacity,
		float in_fCurrentSpeed,
		float in_fMaxSpeed):

		m_iColor(in_iColor),
		m_iNRGears(in_iNRGears),
		m_iType(in_iType),
		Vehicle(in_iNRWheels,in_iNRSeats,in_fFuelCapacity,in_fCurrentSpeed,in_fMaxSpeed)
		{
			// code
			std::cout << "Inside car (...) -- parameterised constructor" << std::endl; 
		} 

		// member function
		int GetColor()
		{
			// code
			return(this->m_iColor); 
		}

		int GetNRGears()
		{
			// code
			return(this->m_iNRGears); 
		}

		int GetBikeType()
		{
			// code
			return(this->m_iType); 
		}
// private members
private: 
	// data members
	int m_iColor; 
	int m_iNRGears;
	int m_iType; 
};
