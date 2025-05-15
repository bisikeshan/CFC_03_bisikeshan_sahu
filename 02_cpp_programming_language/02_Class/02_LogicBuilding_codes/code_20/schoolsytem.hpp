/* S.G.M.P 
 * @file: schoolsystem.hpp
 * @brief: Main class that holds and manages the school enrollemtn sytem. 
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 15-05-2025 12:10pm 
 */

#pragma once
#include "course.hpp"
#include "student.hpp"
#include "enrollment.hpp"

class SchoolSystem
{
public: 
	// code
	void ProcessEnrollment(Student* in_pStudent,Course* in_pCourse, int in_choice)
	{
		Enrollment objEnrollment; 

		if(in_choice == 1)
		{
			objEnrollment.EnrollStudent(in_pStudent, in_pCourse); 
		}
		else if(in_choice == 2)
		{
			objEnrollment.DisplayEnrollmentDetails(in_pStudent,in_pCourse); 
		}
		else
		{
			std::cout << "Invalid choice!" << std::endl; 
		}


	} 
};