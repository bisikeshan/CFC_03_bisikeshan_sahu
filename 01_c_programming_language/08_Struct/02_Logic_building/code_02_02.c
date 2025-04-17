/* S.G.M.P 
 * @file: student_record.c
 * @brief: This program store and displays students details uinsg structures.
 * @description: 
 * This program defines a 'struct student' to store details of a student
 * The structure contains four members:
 * - 'name' (character array) to store the students name.
 * - 'roll_no' (intger) to store the student's roll number.
 * - 'marks' (float) to store the student's roll number
 * - 'grade' (character) to store the grade of the students.
 * 
 * The purpose prompts the user to enter these details, stores them in a 
 * structure variable, and then displays the entered information in a structured format
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 19-03-2025 4:10 PM 
 */
#include <stdio.h>

struct Student
{
	char name[50]; //stores student's name (string of max 50 characters)
	int roll_no; // stores student's roll number (integer)
	float marks; // stores student's total marks (floating-point number)
	char grade; // stores student's grade (single character); 
}; 

int main()
{
	 struct Student stud; // declare a strucutre variable to store students details

	 // prompt user to enter student name
	 printf("Enter user name: \n"); 
	 scanf("%s",stud.name); // read the name and store in stud.name

	 // promt user to enter student roll number
	 printf("Enter student roll number: \n"); 
	 scanf("%d",&stud.roll_no); // read the roll_no and store in stud.roll_no

	 // prompt user to enter total marks
	 printf("Enter total marks:\n"); 
	 scanf("%f",&stud.marks); // read the total marks and store in stud.marks

	 // prompt user to enter grade: 
	 printf("Enter student's grade:\n"); 
	 scanf(" %c",&stud.grade); 


	 // Display the student details
	 printf("\n --- Student Details ---\n"); 
	 printf("Name: %s\n",stud.name);  // print student name
	 printf("Roll number: %d\n",stud.roll_no);  // print student roll number
	 printf("Marks: %.2f\n",stud.marks); // print students marks
	 printf("Grade: %c\n",stud.grade); // print students grade

     // return to indicate successful excecution 
	 return (0);  

}
