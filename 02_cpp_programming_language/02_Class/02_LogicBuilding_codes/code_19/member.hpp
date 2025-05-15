/* S.G.M.P 
 * @file: member.hpp
 * @brief: Represents a member in the library.
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 15-05-2025 10:58am
 */

#pragma once
#include <string>

class Member
{
// public members
public:
	// code
	Member(std::string in_name,int in_memberId)
		: m_sName(in_name),m_iMemberId(in_memberId)
		{
			// code
		}

		std::string GetName()
		{
			return this->m_sName;
		}

		int GetMemberId()
		{
			return this->m_iMemberId; 
		}
// private members
private:
	std::string m_sName; 
	int m_iMemberId; 
}; 