/* S.G.M.P 
 * @file: vehicle.hpp
 * @brief: parent class vehicle
 * @author: bisikeshan sahu (bisikeshana567@gmail.com)
 * @date: 29-04-2025 2:30pm 
 */

// Headers & namespaces
#include <stdio.h>

// class type definition
class Vehicle
{
public: 
	// Default constructor
	Vehicle():m_iNRWheels(0),
	          m_iNRSeats(0),
	          m_fFuelCapacity(0.0f),
	          m_fCurrentSpeed(0.0f),
	          m_fMaxSpeed(0.0f)
	{
		// code
	}

	// parameterised constructor
	Vehicle(int in_iNRWheels,
		    int in_iNRSeats, 
		    float in_fFuelCapacity,
		    float in_fCurrentSpeed,
		    float in_fMaxSpeed)
	: m_iNRWheels(in_iNRWheels),
	  m_iNRSeats(in_iNRSeats),
	  m_fFuelCapacity(in_fFuelCapacity),
	  m_fCurrentSpeed(in_fCurrentSpeed),
	  m_fMaxSpeed(in_fMaxSpeed)
      {
      	 // code
      	 std::cout << "Inside vehicle (...)--- paramterised constructor" << std::endl; 
      }

      float GetCurrentSpeed()
      {
      	// code
      	return(this->m_fCurrentSpeed); 
      }

      float GetMaxSpeed()
      {
      	 // code
      	return (this->m_fMaxSpeed); 
      }


private: 
	// data members
	int m_iNRWheels; 
	int m_iNRSeats; 
	float m_fFuelCapacity; 
	float m_fCurrentSpeed; 
	float m_fMaxSpeed; 

};