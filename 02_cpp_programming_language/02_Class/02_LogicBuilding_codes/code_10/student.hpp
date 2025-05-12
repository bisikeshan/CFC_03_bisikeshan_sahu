/* S.G.M.P 
 * @file: Student.hpp
 * @brief: Header file for student class to manage student details
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 01-05-2025 11:59am
 */

#pragma once

#include <iostream>
#include <string>

class Student
{
// public members
public: 
	// default constructor
	Student():m_sName(""),m_iAge(0),m_iRollNumber(0)
	{
		// code
	}

	Student(std::string in_sName,int in_iAge,int in_iRollNumber):
	m_sName(in_sName),m_iAge(in_iAge),m_iRollNumber(in_iRollNumber)
	{
		// code
	}

	// Function to display student details
	void DisplayStudentDetails()
	{
		// Display student name, age , and roll number
		std::cout << "Student Name: " << this->m_sName << std::endl; 
		std::cout << "Age: " << this->m_iAge << std::endl; 
		std::cout << "Roll Number: " << this->m_iRollNumber << std::endl;  
	}

	// Accessor
	std::string getStudentName()
	{
		return(this->m_sName); 
	}


// private members
private: 
	std::string m_sName; // Student name
	int m_iAge;          // Student age 
	int m_iRollNumber; // student Roll number
};