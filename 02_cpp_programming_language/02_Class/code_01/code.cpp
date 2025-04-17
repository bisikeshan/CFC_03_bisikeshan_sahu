/* S.G.M.P 
 * @file: code.cpp
 * @brief: Implementation of Entry point function 
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 17-04-2025 3:53PM 
 */

// Headers & Namespaces
#include <iostream>
#include "Demo.hpp"

// global variable definition 
Demo obj1;
Demo obj2(10,20.00f);  

// Entry point function
int main(void)
{
	// code
	std::cout << obj1.getValueOfINum() << std::endl;
	 
	return(0); 
}