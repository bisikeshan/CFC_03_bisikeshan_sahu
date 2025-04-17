/* S.G.M.P 
 * @file: driver.cpp
 * @brief: Implemenatio of Entry point function 
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 17-04-2025 4:17PM 
 */

// Headers & Namespace
#include <iostream>
#include "demo.hpp"

// Global Data Definition
Demo obj(2304); 

// Entry point function 
int main(void)
{
	// local Variables
	// code
	std::cout << "Value of inum = " << obj.getValueOfINum() << std::endl; 

	return (0); 		
}