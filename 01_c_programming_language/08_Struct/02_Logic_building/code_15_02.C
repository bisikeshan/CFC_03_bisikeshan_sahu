/* S.G.M.P 
 * @file: university_management.c
 * @brief: This program stores and displays university, faculty, department, professor, 
 * @description: 
 * This program defines six structures: 'struct University', 'struct faculty', 'struct Department'
 * - 'struct University' contains: 
 * - 'uniId' (integer) for university ID.
 * - 'uniName' (character array) for university name.
 * - 'struct Faculty contains:'
 * - 'facId' (integer) for faculty Id.
 * - 'facName' (character array) for faculty name.
 * - 'parentUniversity' (struct of type 'University') for university details
 * - 'struct Department' contains: 
 * - 'deptId' (integer) for department Id.
 * - 'deptName' (character array) for department name.
 * - 'parent faculty' (structure of type 'Faculty' for faculty details)
 * - 'struct profesor ' contains: 
 * - 'profId' (integer) for professor Id
 * - 'profName' (character array) for professor name
 * - 'profDept' (structure of type 'Department') for department details
 * 'struct Course' contains: 
 * - 'courseId' (integer) for course ID.
 * - 'courseName' (character array) for course name.
 * - 'courseProfessor' (structure of type 'Professor') for  professor details
 * - 'struct Student' contains: 
 * 'studId' (integer) for student ID.
 * 'stuName' (character array) for student name.
 * 'stuCourse' (structure of type 'course') for course details
 * 
 * The program prompts the user to enter details for a university, faculty, department,
 * then displays the information in a structured format.
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 28-03-2025 7:14 AM PM 
 */

 #include <stdio.h>

 struct University
 {
 	 int uniId; 
 	 char uniName[100];
 }; 

 struct Faculty
 {
 	 int facId; 
 	 char facName[50]; 
 	 struct University parentUniversity; 
 }; 

 struct Department
 {
 	 int deptId; 
 	 char deptName[50]; 
 	 struct Faculty parentFaculty; 
 }; 

 struct Professor
 {
 	 int profId; 
 	 char profName[50]; 
 	 struct Department profDept; 
 }; 

 struct Course
 {
 	 int courseId; 
 	 char courseName[50]; 
 	 struct Professor courseProfessor; 
 }; 

 struct Student
 {
 	 int stuId; 
 	 char stuName[50]; 
 	 struct Course stuCourse; 
 }; 

 int main()
{ 
    struct Student student; 

    // university details

    printf("Enter university ID: \n"); 
    scanf("%d",&student.stuCourse.courseProfessor.profDept.parentFaculty.parentUniversity.uniId); 

    printf("Enter University Name: \n"); 
    scanf(" %[^\n]s",student.stuCourse.courseProfessor.profDept.parentFaculty.parentUniversity.uniName); 

    // faculty details

    printf("Enter faculty Id: \n"); 
    scanf("%d",&student.stuCourse.courseProfessor.profDept.parentFaculty.facId); 

    printf("Enter faculty Name: \n"); 
    scanf(" %[^\n]s",student.stuCourse.courseProfessor.profDept.parentFaculty.facName); 

    // enter department details

    printf("Enter Department Id: \n"); 
    scanf("%d",&student.stuCourse.courseProfessor.profDept.deptId); 

    printf("Enter Department Name: \n"); 
    scanf(" %[^\n]s",student.stuCourse.courseProfessor.profDept.deptName); 

    // professor details
    printf("Enter professor ID: \n"); 
    scanf("%d",&student.stuCourse.courseProfessor.profId); 

    printf("Enter professor Name: \n"); 
    scanf(" %[^\n]s",student.stuCourse.courseProfessor.profName); 

    // course details

    printf("Enter course Id: \n"); 
    scanf("%d",&student.stuCourse.courseId);
 
    printf("Enter course Name: \n"); 
    scanf(" %[^\n]s",student.stuName);

    // student details

    printf("Enter student ID:\n"); 
    scanf("%d",&student.stuId); 

    printf("Enter student Name: \n"); 
    scanf(" %[^\n]s",student.stuName); 

    // university details
    printf("\n --- university details ---\n");  
    printf("University Id: %d\n",student.stuCourse.courseProfessor.profDept.parentFaculty.parentUniversity.uniId);
    printf("university name %s\n",student.stuCourse.courseProfessor.profDept.parentFaculty.parentUniversity.uniName); 

    // faculty details
    printf("\n --- faculty details ---\n"); 
    printf("faculty Id: %d\n",student.stuCourse.courseProfessor.profDept.parentFaculty.facId);
    printf(" Faculty Name: %s\n",student.stuCourse.courseProfessor.profDept.parentFaculty.facName);

    // department details
    printf("\n --- department details ---\n"); 
    printf(" Department Id: %d\n",student.stuCourse.courseProfessor.profDept.deptId);
    printf("Department Name: %s\n",student.stuCourse.courseProfessor.profDept.deptName); 

    // professor details
    printf("\n --- professor details ---\n"); 
    printf(" professor ID: %d\n",student.stuCourse.courseProfessor.profId);
    printf("professor Name: %s\n",student.stuCourse.courseProfessor.profName);

    // course details
    printf("\n --- course details ---\n"); 
    printf("Course Id: %d\n",student.stuCourse.courseId);
    printf("course Name: %s\n",student.stuName);

    // student details 
    printf("\n --- student details ---\n"); 
    printf("student ID %d\n",student.stuId);
    printf("Student Name: %s\n",student.stuName);  

 	return 0; 
 }


