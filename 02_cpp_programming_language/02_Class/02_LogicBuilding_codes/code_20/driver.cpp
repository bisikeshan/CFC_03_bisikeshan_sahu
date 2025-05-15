/* S.G.M.P 
 * @file: driver.cpp
 * @brief: Main program to simulate the student enrollment system. 
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 15-05-2025 12:31pm 
 */

 #include "schoolsytem.hpp"

int main()
{
	// code
	Course objCourse1("Data Structures",4); 
	Course objCourse2("Algorithms",3); 

	Student objStudent1("Alice",101); 
	Student objStudent2("Bob",102); 

	SchoolSystem objSchoolSystem; 

	int iChoice; 

	while(true)
	{
		std::cout << "\n1.Enroll in Course\n 2.View Enrollment Details\n3. Exit \n Enter choice: ";
		std::cin >> iChoice; 

		if(iChoice == 1)
		{
			objSchoolSystem.ProcessEnrollment(&objStudent1, &objCourse1, iChoice); 
		}

		else if(iChoice == 2)
		{
			objSchoolSystem.ProcessEnrollment(&objStudent2,&objCourse2,iChoice); 
		}
		else if(iChoice == 3)
		{
			break;
		}
		else
		{
			std::cout << "Invalid choice. Try again.\n"; 
		}

	}

	return 0; 
}