

#pragma once


// Headers & namespaces
#include <iostream>
#include <string>
#include "owner.hpp"

class Restaurant
{
 //public members
 public:

 	// Default constructor
 	Restaurant():m_sRestaurantName(""),m_coRestaurantOwner("",0,0.0)
 	{
 		//code
 	}

 	// parameterized constructor
 	Restaurant(std::string in_sRestaurantName,std::string in_sOwnerName,int in_iOwnerAge,double in_dOwnerIncome):
        m_sRestaurantName(in_sRestaurantName),m_coRestaurantOwner(in_sOwnerName,in_iOwnerAge,in_dOwnerIncome)
 	{
 		//code

 	}

 	// getter function
 	std::string GetRestaurantName()
 	{
 		//code
 		return(this->m_sRestaurantName);
 	}

 	std::string GetRestaurantOwnerName()
 	{
 		// code
        // niche likhi hue line run nhi hone wali hai qki m_sOwnerName private isiliye wah obj se access hone wala nhi hai
 		// return(this->m_coRestaurantOwner.m_sOwnerName);
 		return(this->m_coRestaurantOwner.GetOwnerName());
 	}

 	int GetRestaurantOwnerAge()
 	{
 		//code
 		return(this->m_coRestaurantOwner.GetOwnerAge());
 	}

 	double GetRestaurantOwnerIncome()
 	{
 		//code
 		return(this->m_coRestaurantOwner.GetOwnerIncome());
 	}

 	void IncrementRestaurantOwnerIncome()
 	{
 		//code
 		this->m_coRestaurantOwner.IncrementOwnerIncome();

 	}

 	void DecrementRestaurantOwnerIncome()
 	{
 		//code
 		this->m_coRestaurantOwner.DecrementOwnerIncome();
 	}



 //private members
 private:
 	std::string m_sRestaurantName;
 	Owner m_coRestaurantOwner;


};