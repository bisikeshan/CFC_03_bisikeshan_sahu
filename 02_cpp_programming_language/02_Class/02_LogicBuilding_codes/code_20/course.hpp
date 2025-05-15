/* S.G.M.P 
 * @file: course.hpp
 * @brief: Represents a course in the enrollement system. 
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 15-05-2025 11:58am 
 */

#pragma once
#include <string>

class Course
{
public: 
	// default constructor
	Course():m_sCourseName(""),m_iCredits(0)
	{
		// code
	} 
	Course(std::string in_courseName,int in_credits)
		: m_sCourseName(in_courseName),m_iCredits(in_credits)
		{
			// code
		}

	std::string GetCourseName()
	{
		return(this->m_sCourseName); 
	}

	int GetCredits()
	{
		return(this->m_iCredits); 
	}


private: 
	std::string m_sCourseName; 
	int m_iCredits; 

}; 