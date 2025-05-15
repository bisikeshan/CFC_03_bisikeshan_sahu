/* S.G.M.P 
 * @file: student.hpp
 * @brief: Represents a student in the enrollment system. 
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 15-05-2025 11:54am 
 */

#pragma once
#include <string>

class Student
{
public: 
	// Default constructor
	Student(): m_sName(""),m_iStudentId(0)
	{
		// code
	}

	// parameterised constructor
	Student(std::string in_name,int in_studentId):
		m_sName(in_name),m_iStudentId(in_studentId)
		{
			// code
		}

	std::string GetName()
	{
		return(this->m_sName); 
	}

	int GetStudentId()
	{
		return(this->m_iStudentId); 
	}

private: 
	std::string m_sName; 
	int m_iStudentId; 
}; 