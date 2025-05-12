/* S.G.M.P 
 * @file: driver.cpp
 * @brief: Driver for car rental system using multiple classes.
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 09-05-2025 12:47pm 
 */


// Entry point function 

#include "rental.hpp"

// Entry point function 
int main()
{
	// code
	Car objCar1("Toyota Camry","MH12AB1234"); 
	Car objCar2("Honda Civic", "MH14CD5678"); 

	// code

	Customer objCustomer("Ravi Kumar", "9876543210"); 

	// code
	Rental objRental; 

	// code
	int iChoice; 

	while(true)
	{
		std::cout << "\n1. Rent Car\n 2. Return Car \n 3. Show Cars\n 4. Exit \n Enter choice: "; 
		std::cin >> iChoice; 

		if(iChoice == 1)
		{
			objRental.ProcessRental(&objCar1,&objCustomer); 
		}
		else if(iChoice == 2)
		{
			objRental.ProcessReturn(&objCar1); 
		}
		else if(iChoice == 3)
		{
			objCar1.Display(); 
			objCar2.Display(); 
		}
		else if(iChoice == 4)
		{
			break; 
		}
		else
		{
			std::cout << "Invalid choice. Try again.\n"; 
		}

	}

	return (0); 
}
