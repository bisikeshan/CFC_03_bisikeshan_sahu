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
#include <stdio.h> // standard input-output libarary

// structure definition for course
struct Course
{
	 int courseId; // stores courses ID
	 char courseName[50]; // stores course name 
	 int courseCredits; // stores numbers of credit hours
}; 

//  structure definition for student 
struct Student
{ 
	 int stuId; // stores student ID 
	 char stuName[50]; // stores student name
	 int stuAge; // stores student age 
	 struct Course stuCourse; //stores course details (nested struct)
}; 

int main()
{
	// declare a strucutre variable to store student details 
	struct Student student; 

	// prompt user to enter student ID
	printf("Enter student ID: \n"); 
	scanf("%d",&student.stuId); // read and store student ID 

	// prompt user to enter student name
	printf("Enter student name: \n"); 
	scanf(" %s",student.stuName); // read and store student name 

	// prompt user to enter student age
	printf("Enter student Age: \n"); 
	scanf("%d",&student.stuAge); // read and store Student Age
 
    // prompt user to enter course ID
    printf("Enter course ID: \n"); 
    scanf("%d",&student.stuCourse.courseId); 

    // prompt user to enter course Name
    printf("Enter course name: \n"); 
    scanf("%s",student.stuCourse.courseName); // read and store course name 

    // prompt user to enter course credit hours
    printf("Enter course credit Hours:\n"); 
    scanf("%d",&student.stuCourse.courseCredits); 

    // Read and store course credits 

    // Display student and course details 
    printf("\n--- student details ---\n"); 
    printf("student ID: %d\n",student.stuId); 
    printf("Name: %s\n",student.stuName); 
    printf("Age: %d\n",student.stuAge); 
    printf("course ID: %d\n",student.stuCourse.courseId); 
    printf("course Name: %s\n",student.stuCourse.courseCredits); 

    return (0); // return 0 to indicate successful excecution 
}