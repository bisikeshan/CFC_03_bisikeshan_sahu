/* S.G.M.P 
 * @file: Demo.hpp
 * @brief: Implemenation of class in CPP 
 * @author: bisikeshan sahu (biskeshan567@gmail.com)
 * @date: 17-04-2025 3:48PM 
 */

// Headers & Namespaces
#include <iostream>

class Demo
{
// public members
public: 
	
	// Default constructor
	Demo()
	{
		inum = 10; 
		fnum = 0.0f; 
		dnum = 0.0; 
	}

	// Parameterized constructor
	Demo(int inum,float fnum,double dnum): inum(inum),fnum(fnum)
	{
		// code
		this->dnum = dnum; 
	}

	// Members function 01
	int getValueOfINum()
	{
		// code
		return(this->inum); 
	}

	float getValueOfFNum()
	{
		// code
		return(this->fnum); 
	}


// private members
private:
	int inum; 
	float fnum; 
	double dnum;  

}; 