/* S.G.M.P 
 * @file: driver.cpp
 * @brief: 
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 30-04-2025 9:23am 
 */

// Headers & namespaces
#include <iostream>
#include "car.hpp"

// Entry point function 
int main(void)
{
	std::cout << std::endl; 
	std::cout << std::endl; 
	std::cout << "Starling ... Main()" << std::endl; 
	std::cout << std::endl; 
	std::cout << std::endl; 

	// local varible definition
	// Car carobj(3,5,2); 

	Car carobj(3,
		       5,
		       2,
		       4,
		       5,
		       20.5,
		       0.0f,
		       210.0f); 

	// code
	std::cout << "Exiting ... Main()" << std::endl; 
	std::cout << std::endl; 

	return (0); 
}