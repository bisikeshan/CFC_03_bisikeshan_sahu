/* S.G.M.P 
 * @file: beta.hpp
 * @brief: 
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 13-03-2025 10:41am 
 */

#pragma once

// Headers and Namespaces
#include <iostream>
#include "alpha.hpp"

// class Definition
class Beta:public Alpha
{
public: 

	Beta()
	{
		// code
	}

	int DoSomethingImportant(int inum1,int inum2,unsigned long long lnum,float fnum)
	{
		std::cout << "DoSomethingImportant() of BETA" << std::endl; 
		std::cout << lnum * inum1 * inum2 * fnum << std::endl; 
		return(1000); 
	}

	float WorkForGrowth(char ch,int inum)
	{
       std::cout << "WorkForGrowth() of BETA" << std::endl; 
       std::cout << inum * inum * inum << std::endl; 

       return(3.141f); 

	}
}; 