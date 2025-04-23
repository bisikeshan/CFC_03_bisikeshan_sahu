/* S.G.M.P 
 * @file: student.hpp
 * @brief: Header file for student class representing a student's grades.
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 23-04-2025 10:15am
 */


#pragma once

// Headers & namespaces
#include <iostream>
#include <string>

// Student class
class Student
{
// public members
public:
	// default constructor
	Student(): m_sName(""),m_iGrade1(0),m_iGrade2(0),m_iGrade3(0)
	{
		// code
	}

	// parameterised constructor
	Student(std::string in_sName,int in_iGrade1,int in_iGrade2,int in_iGrade3): 
	m_sName(in_sName),m_iGrade1(in_iGrade1),m_iGrade2(in_iGrade2),m_iGrade3(in_iGrade3)
	{
		// code
	} 

	// Function to calculate the average grade of the student
	double CalculateAverage()
	{
		// code
		return((this->m_iGrade1 + m_iGrade2 + m_iGrade3 )/3.0); 
	}

	// function to display the student's information 
	void DisplayDetails()
	{
		// code
		std::cout << "Student:" << this->m_sName << std::endl; 
		std::cout << "Grade1:" << this->m_iGrade1 << std::endl; 
		std::cout << "Grade2:" << this->m_iGrade2 << std::endl; 
		std::cout << "Grade3:" << this->m_iGrade3 << std::endl; 
	}
// private members
private:
	std::string m_sName; // student Name
	int m_iGrade1; // Grade 1
	int m_iGrade2; // Grade 2
	int m_iGrade3; // Grade 3

};