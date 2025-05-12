/* S.G.M.P 
 * @file: parkinglot.hpp
 * @brief: Header file for packinglot class to handle vehicles in a fixed size parking area. Avoids vector as per coding conventions and uses arrays. Logical flow assigned for real-World parking lot systems. Author and copyright notes. 
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 08-05-2025 4:14pm
 */

#pragma once

#include "vehicle.hpp"

#define MAX_PARKING_SLOTS 10 

class ParkingLot 
{
// public members
public:
	// constructor initializes count
	ParkingLot() : m_iCurrentCount(0)
	{
		// code
	}

	// Add vehicle to parking lot
	void AddVehicle(Vehicle in_vehicle)
	{
		if(this->m_iCurrentCount < MAX_PARKING_SLOTS)
		{
			this->m_vehicles[this->m_iCurrentCount] = in_vehicle; 
			this->m_vehicles[this->m_iCurrentCount].Park(); 
			this->m_iCurrentCount++; 
		}
		else
		{
			std::cout << "Parking Full! Cannot Park vehicle: " << in_vehicle.GetNumber() << std::endl; 
		}
	}

	// Display all parked vehicles

	void DisplayAllVehicles()
	{
		if(this->m_iCurrentCount == 0)
		{
			std::cout << "No vehicles parked." << std::endl; 
		}

		for(int le = 0; le < this->m_iCurrentCount; le++)
		{
			this->m_vehicles[le].Display();
			std::cout << "-----------------------" << std::endl; 
		}
	}

// private members
private:
	Vehicle m_vehicles[MAX_PARKING_SLOTS]; // fixed size array to store vehicles 
	int m_iCurrentCount; // current parked vehicle count 
}; 