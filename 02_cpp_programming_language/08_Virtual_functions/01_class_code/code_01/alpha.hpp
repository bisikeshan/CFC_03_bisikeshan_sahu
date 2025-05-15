/*
 * S.G.M.P 
 * @file: alpha.hpp
 * @brief: Implementation of alpha class
 * @author: bisikeshans sahu (bisikeshan567@gmail.com)
 * @date: 13-05-2025 9:47pm 
 */
#pragma once

// Headers and Namespaces
#include <iostream>

// Class Definition
class Alpha
{
public:
	Alpha()
	{
		// code
	}

    virtual int DoSomethingImportant(int inum1,int inum2,unsigned long long lnum,float fnum) = 0 ; 
	// {
	// 	// code
	// 	std::cout << "DoSometingImportant() of Alpha" << std::endl; 
	// 	std::cout << inum1 << std::endl; 
	// 	std::cout << inum2 << std::endl; 
	// 	std::cout << lnum << std::endl; 
	// 	std::cout << fnum << std::endl;

	// 	return(1000);  
	// }

	float WorkForGrowth(char ch,int inum)
	{
		// code
		std::cout << "WorkingForGrowth() of Alpha" << std::endl; 
		std::cout << ch << std::endl;
		std::cout << inum << std::endl; 

		return(3.141f); 
	}
};