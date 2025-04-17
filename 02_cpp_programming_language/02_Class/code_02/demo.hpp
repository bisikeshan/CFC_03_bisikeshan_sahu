/* S.G.M.P  
 * @file: demo.hpp
 * @brief: Implementation of demo class
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 17-04-2025 4:08PM 
 */

// Headers & Namespaces
#include <iostream>

// Demo class definition
class Demo
{
// public members
public:
		// Default constructor
	    Demo()
	    {
	    	// code
	    	std::cout << "This is Demo Class chaa Normal " << std::endl; 
	    	inum = 0; 
	    }

	    Demo(int inum)
	    {
	    	// code
	    	std::cout << "This is Demo class chaa Parameterized Constructor" << std::endl; 
	    	this->inum = inum; 
	    }

	    int getValueOfINum()
	    {
	    	// code
	    	return(this->inum); 
	    }

// private members
private: 
		int inum; 

}; 