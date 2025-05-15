/* S.G.M.P 
 * @file: code.cpp
 * @brief: implemention of access specifers
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 15-05-2025 2:33pm 
 */

// Headers & Namespaces
#include <iostream>

// class type definition
class Fox
{
// public members
public: 
	void FoxDancing()
	{
		std::cout << "Fox is Dancing" << std::endl; 
		FoxSleeping(); 
	}

protected: 
	void FoxSleeping()
	{
		std::cout << "Fox is sleeping" << std::endl; 
		FoxEating(); 
	}
// private members
private: 
	void FoxEating()
	{
      std::cout << "Fox is Eating" << std::endl; 
	}

};

	// Entry point function 
	int main(void)
	{
		// code
		Fox foxpro; 

		std::cout << std::endl; 
		std::cout << std::endl; 

		foxpro.FoxDancing(); 
	}
