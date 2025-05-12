/* S.G.M.P 
 * @file: studentregistration.hpp
 * @brief: Header file for student registration class to manage student
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 01-05-2025 12:10pm  
 */
#pragma once

#include "student.hpp"
#include "course.hpp"

#define MAX_STUDENTS 100
#define MAX_COURSES 100

class StudentRegistration
{
// public members
public:
	// Constructor to intialize registration with no students and courses
	StudentRegistration(): m_iStudentCount(0),m_iCourseCount(0)
	{
		// code
	}

	// function to register a student for a course
	void RegisterStudentForCourse(Student& in_student, Course& in_course)
	{
		// Register the student and associate them with the course
		if(this->m_iStudentCount < MAX_STUDENTS && this->m_iCourseCount < MAX_COURSES)
		{
			this->m_students[this->m_iStudentCount] = in_student; 
			this->m_courses[this->m_iCourseCount] = in_course; 
			this->m_iStudentCount++; 
			this->m_iCourseCount++; 
			std::cout << in_student.getStudentName() << "has been registered for" << in_course.getCourseName() << "|" << std::endl; 

		}
		else
		{
			std::cout << "Registration limit reached!" << std::endl; 
		}
	}

	// Function to display all registered students and their courses
	void DisplayRegisteredStudents()
	{
		// loop through students and coursea and display details
		for(int le = 0; le < this->m_iStudentCount; le++)
		{
			this->m_students[le].DisplayStudentDetails(); 
			this->m_courses[le].DisplayCourseDetails(); 
			std::cout << "---------------------------" << std::endl; 
		}
	}
// private members
private:
	Student m_students[MAX_STUDENTS]; // array of registered students
	Course m_courses[MAX_COURSES]; // array of courses associated with students
	int m_iStudentCount; // number of registered students
	int m_iCourseCount; // number of registered courses
};