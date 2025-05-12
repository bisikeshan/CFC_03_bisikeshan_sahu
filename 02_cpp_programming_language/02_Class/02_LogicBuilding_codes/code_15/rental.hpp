/* S.G.M.P 
 * @file: rental.hpp
 * @brief: Connects Car and Customer for the rental process. 
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 09-03-2025 12:42pm 
 */

#pragma once

// Entry point function 
#include "car.hpp"
#include "customer.hpp"

class Rental
{
// public members
public:
	//code
	void ProcessRental(Car* in_pCar, Customer* in_pCustomer)
	{
		if(in_pCar->IsAvailable())
		{
			in_pCar->Rent(); 
			std::cout << "Rental Successful!" << std::endl; 
			in_pCustomer->Display(); 
			in_pCar->Display(); 
		}
		else
		{
			std::cout << "Car is not availalbe for rent." << std::endl; 
		}
	}

	// code
	void ProcessReturn(Car* in_pCar)
	{
		in_pCar->Return(); 
		std::cout << "Car returned successfully!" << std::endl; 
	}


}; 