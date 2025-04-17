

#pragma once


// Headers & namespaces 
#include <iostream>


// Demo class definition
class Demo
{
    
// public members
public:
	// default constructor
	Demo(): m_iValue01(0),m_iValue02(0)
	{
         // code

    }

	// parameterized constructor
	Demo(int iValue01,int iValue02): m_iValue01(iValue01),m_iValue02(iValue02)
	{
       // code
	}

	// getter functions
	int GetValue01()
	{
		// code
		return(this->m_iValue01);
	}

	int GetValue02()
	{
		// code
		return(this->m_iValue02); 
	}

	 int AdditionOperation()
	 {
	 	 // code
	 	int result = m_iValue01 + m_iValue02; 
	 	return (result); 
	 }

	 int SubtractionOperation()
	 {
	 	// code
	 	int result = m_iValue01 - m_iValue02; 
	 	return(result); 
	 }

	 int MultiplicationOperation()
	 {
	 	// code
	 	int result = m_iValue01 * m_iValue02; 
	 	return(result); 
	 }

	 int DivisionQuotientOperation()
	 {
	 	int result = m_iValue01 / m_iValue02; 
	 	return(result); 
	 }

	 int DivisionRemainderOperation()
	 {
	 	int result = m_iValue01 % m_iValue02; 
	 	return(result);
	 }


// private members
private: 
	// data members
	int m_iValue01; 
	int m_iValue02; 


};
