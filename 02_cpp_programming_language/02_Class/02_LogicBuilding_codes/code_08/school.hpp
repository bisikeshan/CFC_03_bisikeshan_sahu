/* S.G.M.P 
 * @file: school.hpp
 * @brief: Header files for school class to manage multiple students
 * @author: bisikeshan sahu (biskeshan567@gmail.com)
 * @date: 01-05-2025 8:13am 
 */

#pragma once

// Headers and namespaces
#include "student.hpp"

class School
{
// public members
public:
	// constructor to initialize the school with no students
	School(): m_iStudentCount(0)
	{
		// code
	}

	// function to add a student to the school
	void AddStudent(const Student& in_student)
	{
		// Add student to the list 
		if(this->m_iStudentCount < MAX_STUDENTS)
		{
			this->m_students[this->m_iStudentCount] = in_student; 
			this->m_iStudentCount++; 
		}
		else
		{
			std::cout << "School is full!" << std::endl; 
		}
	}

	// function to display all students and their grades
	void DisplayStudents()
	{
		// loop through all students and display their details
		for(int le = 0; le < this->m_iStudentCount; le++)
		{
			this->m_students[le].DisplayStudentDetails(); 

		}
	}

	float CalculateSchoolAverage()
	{
		// calculate the average grade of all students
		float total = 0.0f; 
		for(int le = 0; le < this-> m_iStudentCount; le++)
		{
			total += this->m_students[le].CalculateAverage(); 
		}

		return total / this->m_iStudentCount; 
	}
// private members
private:
	static const int MAX_STUDENTS = 100; // maximum number of student allowed 
	Student m_students[MAX_STUDENTS]; // array of studennt objects
	int m_iStudentCount; // Number of Students in the school

};