/* S.G.M.P 
 * @file: driver.cpp
 * @brief: Driver file to test the student, course, and StudentRegistration
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 06-05-2025 8:21am 
 */

// Headers and namespaces
#include "studentregistration.hpp"

int main()
{
	// Create Student objects
	Student objStudent1("Alice Johnson",20,101); 
	Student objStudent2("Bob Smith",22,102); 

	// Crate Course objects
	Course objCourse1("Computer Science","CS101"); 
	Course objCourse2("Mathematics","MATH101");

	// Create StudentRegistration object
	StudentRegistration objRegistration; 

	// Register students for courses
	objRegistration.RegisterStudentForCourse(objStudent1,objCourse1); 
	objRegistration.RegisterStudentForCourse(objStudent2,objCourse2); 

	// Display all registered students and their courses
	objRegistration.DisplayRegisteredStudents();


	return (0); // End of the program 
}



