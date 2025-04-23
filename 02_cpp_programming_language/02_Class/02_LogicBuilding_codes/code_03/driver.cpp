/* S.G.M.P 
 * @file: driver.cpp
 * @brief: driver file to test the GradeBook and student classes
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 23-04-2024 10:54am 
 */

// Headers & namespaces
#include "GradeBook.hpp"

// Entry point function 
int main(void)
{
	// create student objects
	Student objStudent1("Alice",85,90,88); 
	Student objStudent2("Bob",78,82,80); 

	// create GradeBook object
	GradeBook objGradeBook; 

	// Add students to the gradebook
	objGradeBook.AddStudent(objStudent1); 
	objGradeBook.AddStudent(objStudent2); 

	// Display all students in the gradebook
	objGradeBook.DisplayStudents(); 

	return(0); // End of the program 

}