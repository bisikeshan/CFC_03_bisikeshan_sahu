/* S.G.M.P 
 * @file: Enrollment.hpp
 * @brief: Handles the enrollment of students into courses. 
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 15-05-2025 12:03
 */

#pragma once
#include "course.hpp"
#include "student.hpp"
#include <iostream>

class Enrollment
{
public: 
	// code
	void EnrollStudent(Student* in_pStudent,Course* in_pCourse)
	{
		std::cout << in_pStudent->GetName()
				  << "has enrolled in"
				  << in_pCourse->GetCourseName()
				  << "course."
				  << std::endl; 
	}

	// code

	void DisplayEnrollmentDetails(Student* in_pStudent,Course* in_pCourse)
	{
		std::cout << "Student:"
				  << in_pStudent->GetName()
				  << "(ID:"
				  << in_pStudent->GetStudentId()
				  << ")\n"
				  << "Course:"
				  << in_pCourse->GetCourseName()
				  << "(Credits:"
				  << in_pCourse->GetCredits()
				  << ")"
				  << std::endl; 
	}


}; 