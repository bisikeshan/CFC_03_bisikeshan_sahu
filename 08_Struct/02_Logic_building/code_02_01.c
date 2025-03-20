/* S.G.M.P 
 * @file: student_record.c
 * @brief: This program storea and displays student details using structures.
 * @description: 
 * This program defines a 'struct student' to store details of a student.
 * The structure contains four memebers:
 * - 'name' (character array) to store the students name
 * - "roll_no" (integer) to store the student's roll number
 * - 'marks' (float) to store the student's total marks
 * - 'grade' (character) to store the grade of the student.
 *
 * The program prompts the user to enter these details, stores them in a 
 * structure variable, and then displays the entered informantion in a structured format.
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 19-03-2025 3:50 PM 
 */

#include <stdio.h> // standard input output library

// structure defniition for students

struct student
{
	 char name[50]; // stores students name (string of 50 characters)
	 int roll_no; // stores students roll number (integer)
	 float marks; // stores students total marks (floating_point number)
	 char grade; // stores student's grade (single character)	 
}; 

int main()
{
	// declare a structure variable to store student details
	struct student stud; 

	// prompt user to enter student name
	printf("Enter student name: \n"); 
	scanf("%s",stud.name); // Read the name and store it in stud.name

	// promt user to enter student roll no 
	printf("Enter student roll no:\n"); 
	scanf("%d",&stud.roll_no); 

	// prompt user to enter student marks
	printf("Enter total marks: "); 
	scanf("%f",&stud.marks); 

	// prompt user to enter student grade
    printf("Enter Grade: \n"); 
    scanf(" %c",&stud.grade); // Read the grade and store it in stud.grade

    // Display student details
    printf("\n --- students details ---\n"); 
    printf("Name : %s\n",stud.name); // print student name
    printf("Roll no: %d\n",stud.roll_no); // print student roll no
    printf("Marks: %.2f\n",stud.marks); // print total marks
    printf("Grade: %c\n",stud.grade); // print grade

    return (0); // return 0 to indicate successful excecution 
}

