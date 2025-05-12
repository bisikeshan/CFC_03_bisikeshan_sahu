/* S.G.M.P 
 * @file: member.hpp
 * @brief: Header file  for Member class representing invdividaul gym members, storing their personal details and subscrition status. Designed for real-life gym management systems. Clear and consistent comments for each important line. No vectors used as per instructions. Structured for clarity and reuse in professional-level codebases.
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 09-03-2025 10:58am 
 */

#pragma once

// Headers and namespaces
#include <iostream>
#include <string>

// class type definition
class Member
{
// public members
public:
	// default constructor
	Member():m_sName(""),m_iAge(0)
	{
		// code
	}

	// parameterised constructor
	Member(std::string in_sName,int in_iAge):
	m_sName(in_sName),m_iAge(in_iAge),m_bIsActive(false)
	{
		// code
	}

	// Activate the membership

	void ActivateMembership()
	{
		if(this->m_bIsActive == false)
		{
			this->m_bIsActive = true; 
			std::cout << "Membership activated for" << this->m_sName << "." << std::endl; 

		}
		else
		{
			std::cout << "Membership is alreay active for " << this->m_sName << "." << std::endl; 

		}
	}

	// Deactivate the membership

	void DeactivateMembership()
	{
		if(this->m_bIsActive == true)
		{
			this->m_bIsActive = false; 
			std::cout << "Membership deactivated for " << this->m_sName << "." << std::endl; 
		}
		else
		{
			std::cout << "Membership was already inactive for " << this->m_sName << "." << std::endl; 
		}
	}

	// Display memeber details

	void Display()
	{
		std::cout << "Name:" << this->m_sName << ", Age:" << this->m_iAge
			      << ", Status:" << (this->m_bIsActive ? "Active" : "Inactive" ) << std::endl; 

	}

// private members
private:
	std::string m_sName; // Member's full name
	int m_iAge; // Member's age
	bool m_bIsActive; // Subscriptoin status flag

};