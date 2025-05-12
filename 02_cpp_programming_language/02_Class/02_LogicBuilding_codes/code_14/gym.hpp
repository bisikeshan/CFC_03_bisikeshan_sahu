/* S.G.M.P 
 * @file: gym.hpp
 * @brief: Header file for Gym class managing multiple gym members using static arrays. Supports adding, listing and toggling membership. Real-World inspired design, no vector usage, loops & brancing implemented. All functions documented precisely as per project style. Fully modular and extendable. Author and copyright.
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 */

#pragma once

// Headers and namespaces
#include "member.hpp"

#define MAX_MEMBERS 20 

class Gym
{
// public members
public:
	// constructor to initialize Gym object
	Gym():m_iMemberCount(0)
	{
		// code
	}

	// Add a new members to the gym 
	void AddMember(Member in_member)
	{
		if(this->m_iMemberCount < MAX_MEMBERS)
		{
			this->m_arrMembers[this->m_iMemberCount] = in_member; 
			this->m_iMemberCount++; 
			std::cout << "New member added to the gym!" << std::endl; 
		}
		else
		{
			std::cout << "Gym is full, cannot add more members!" << std::endl; 
		}
	}

	// Display all gym members

	void DisplayMembers()
	{
		for(int le = 0; le < this->m_iMemberCount; le++)
		{
			this->m_arrMembers[le].Display(); 
		}
	}

	// Activate a specific member's subscription

	void ActivateMember(int in_index)
	{
		if(in_index >= 0 && in_index < this->m_iMemberCount)
		{
			this->m_arrMembers[in_index].ActivateMembership(); 
		}
		else
		{
			std::cout << "Invalid member index!" << std::endl; 
		}
	}

	// Deactivate a specific member's subscription

	void DeactivateMember(int in_index)
	{
		if(in_index >= 0 && in_index < this->m_iMemberCount)
		{
			this->m_arrMembers[in_index].DeactivateMembership();
		}
		else
		{
			std::cout << "Invalid members index!" << std::endl; 
		}

	}
// private members
private:
	Member m_arrMembers[MAX_MEMBERS]; // static array for storing gym members
	int m_iMemberCount; // Tracks the number of members added 
};