/* S.G.M.P 
 * @file: driver.cpp
 * @brief: Driver file to test the student and school classes
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 01-05-2025 8:29
 */

// Headers and namepsaces
#include "school.hpp"

int main()
{
	// create student objects
	Student objStudent1("Alice",85,90,88); 
	Student objStudent2("Bob",78,82,85); 
	Student objStudent3("Charlie",92,95,96); 

	// Create School object
	School objSchool; 

	// Add students to the school

	objSchool.AddStudent(objStudent1); 
	objSchool.AddStudent(objStudent2); 
	objSchool.AddStudent(objStudent3); 

	// Display all students and their grades
	objSchool.DisplayStudents();

	// Display the average grade of the school
	std::cout << "School Average Grade: " << objSchool.CalculateSchoolAverage() << std::endl; 
	return(0); // End of the program

}