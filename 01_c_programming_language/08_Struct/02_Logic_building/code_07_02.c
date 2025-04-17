/* S.G.M.P 
 * @file: student_course.c
 * @brief: This program stores and displays student and course details using structures 
 * @description: 
 * This program defines two structures: 'struct course' and 'struct student'
 * - 'struct Course' contains: 
 * -  'courseId' (integer) for course ID
 * -  'courseName' (character array) for course name.
 * -  'courseCredits' (integer) for course credit hours.
 * - 'struct Students' contains: 
 * - 'stuId' (integer) for student ID.
 * - 'stuName' (character array) for student name 
 * - 'stuAge' (integer) for student age.
 * - 'studCourse' (structure of type 'course') for course details 
 * 
 * The program prompts the user to enter details for a student and their course,
 * then displays the information in a structured format.
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 21-03-2025 3:16 PM 
 */

#include <stdio.h>  // standar input output library

// structure definition for course
struct Course
{
	int courseId; // stores courses ID
	char courseName[50]; // stores course name
	int courseCredits; // stores number of credit hours
}; 

// structure definition for student

struct Student
{
	 int stuId; // stores student ID
	 char stuName[50]; // stores student name 
	 int stuAge; // stores student age
	 struct Course stuCourse; // stores courses details (nested struct) 
}; 

int main()
{
	 // declare a structure variable to store student details
	 struct Student student; 
     
     //prompt user to enter student ID
     printf("Enter student Id:"); 
     scanf("%d",&student.stuId); // Read and store student ID

     //prompt user to enter student name
     printf("Enter student Name:\n"); 
     scanf("%s",student.stuName); // read and store student name 

     // prompt user to enter  student age
     printf("Enter student age: \n"); 
     scanf("%d",&student.stuAge); 

     // prompt user to enter course Id
     printf("Enter course Id:\n"); 
     scanf("%d",&student.stuCourse.courseId); // read and store course Id

     // prompt user to enter course Name
     printf("Enter course Name: \n"); 
     scanf("%s",student.stuCourse.courseName); // read and store course name 

     // prompt user to enter course credit hours
     printf("Enter course credit hours: \n"); 
     scanf("%d",&student.stuCourse.courseCredits); 

     // read and store course credits

     // display student and course details 
     printf("\n--- student details ---\n"); 
     printf("Student ID: %d\n",student.stuId); 
     printf("Name: %s\n",student.stuName); 
     printf("Age: %d\n",student.stuAge); 
     printf("course Id: %d\n",student.stuCourse.courseId); 
     printf("course Name: %s\n",student.stuCourse.courseName); 
     printf("Credit hours: %d\n",student.stuCourse.courseCredits); 


     return(0); // return 0 to indicate successful excecution 
}

