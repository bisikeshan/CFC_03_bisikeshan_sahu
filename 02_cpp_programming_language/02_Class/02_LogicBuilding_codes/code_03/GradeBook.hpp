/* S.G.M.P 
 * @file: GradeBook.hpp
 * @brief: Header file for GradeBook class to store and manage student grades.
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 23-04-2025 10:41am 
 */

// Headers & Namespaces
#include "student.hpp"

// class GradeBook
class GradeBook
{
// public members
public:
	// constructor to initialize Gradebook with no students
	GradeBook(): m_iStudentCount(0)
	{
		// code
	}

	// function to add a student to the gradebook
	void AddStudent(const Student& in_student)
	{
		// code
		if(this->m_iStudentCount < MAX_STUDENTS)
		{
			this->m_csStudents[this->m_iStudentCount] = in_student; 
			this->m_iStudentCount++; // Increment the student count
		}
		else
		{
			std::cout << "Grade Book is full" << std::endl; // Grade Book is full 
		}
	}

	// function to Display all students in the gradeBook
	void DisplayStudents()
	{
		// code
		for(int le = 0 ; le < this->m_iStudentCount; le++)
		{
			this->m_csStudents[le].DisplayDetails(); 
		}
	}
// private members
private:
	static const int MAX_STUDENTS = 20;
	Student m_csStudents[MAX_STUDENTS];  
	int m_iStudentCount; 

}; 