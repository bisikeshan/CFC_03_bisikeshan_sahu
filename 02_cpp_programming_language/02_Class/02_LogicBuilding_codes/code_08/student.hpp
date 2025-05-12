/* S.G.M.P 
 * @file: student.hpp
 * @brief: Headers files for student class to manage student details and grades.
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 01-05-2025 7:45am
 */

#pragma once

// Headers and namespaces

#include <iostream>
#include <string>

// class type definition
class Student
{
// public members
public:
	// default constructor
	Student():m_sName(""),m_iGrade1(0),m_iGrade2(0),m_iGrade3(0)
	{
		// code
	}

	// parameterised constructor
	Student(std::string in_sName,int in_iGrade1,int in_iGrade2,int in_iGrade3): 
	m_sName(in_sName),m_iGrade1(in_iGrade1),m_iGrade2(in_iGrade2),m_iGrade3(in_iGrade3)
	{
		// code
	}

	// function to calculate the average grade of the student
	float CalculateAverage()
	{
		// return the average grade
		return(this->m_iGrade1 + this->m_iGrade2 + this-> m_iGrade3) / 3.0f; 
	}

	// function to display student details
	void DisplayStudentDetails()
	{
		// Display student information 
		std::cout << "Student Name" << this->m_sName << std::endl; 
		std::cout << "Grade 1: " << this->m_iGrade1 << std::endl; 
		std::cout << "Grade 2: " << this->m_iGrade2 << std::endl; 
		std::cout << "Grade 3: " << this->m_iGrade3 << std::endl; 
		std::cout << "Average Grade: " << this->CalculateAverage() << std::endl; 
	}

// private members
private: 
	std::string m_sName;  // student name 
	int m_iGrade1; // first grade
	int m_iGrade2; // second grade 
	int m_iGrade3; // Third grade

};