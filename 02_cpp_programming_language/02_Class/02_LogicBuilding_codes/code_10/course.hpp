/* S.G.M.P 
 * @file: course.hpp
 * @brief: Header file for course class to manage course details
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 01-05-2025 11:46am 
 */

#pragma once

#include <iostream>
#include <string>

class Course
{
// public members
public:
	// default contructor
	Course():m_sCourseName(""),m_sCourseCode("")
	{
	  // code 	
	}

	Course(std::string in_sCourseName,std::string in_sCourseCode):
	m_sCourseName(in_sCourseName),m_sCourseCode(in_sCourseCode)
	{
		// code
	}

	// function to display course details
	void DisplayCourseDetails()
	{
		// Display course name and code
		std::cout << "Course Name" << this->m_sCourseName << std::endl; 
		std::cout << "Course Code" << this->m_sCourseCode << std::endl; 
	}

	// Accessor
	std::string getCourseName()
	{
	   return(this->m_sCourseName); 
	}

// private members
private:
	std::string m_sCourseName; // course name
	std::string m_sCourseCode; // course code

};