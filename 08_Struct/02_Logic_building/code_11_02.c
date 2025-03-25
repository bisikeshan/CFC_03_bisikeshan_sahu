 /* S.G.M.P 
 * @file: university_management.c
 * @brief: This program stores and displays university, department, and profressor details
 * @description: 
 * This program defines three structures: 'struct University','struct Department', and 
 * - 'uniId' (integer) for university ID.
 * - 'uniName' (character array) for university name.
 * - 'struct Department' contains: 
 * - 'deptId' (integer) for university ID. 
 * - 'deptName' (character array) for department name.
 * - 'parentUniversity' (structure of type 'University') for university details.
 * - 'struct Professor' contains: 
 * - 'profId' (integer) for professor ID. 
 * - 'profName' (character array) for professor name. 
 * - 'profSalary' (float) for profressor salary.
 * - 'profDept' (structure of type 'Department') for department details. 
 * 
 * The program prompts the user to enter details for a university, department, and professors
 * then displays the information in a structured format. 
 * @author: bisikeshan567@gmail.com 
 * @date: 24-03-2025 5:12 PM 
 */

#include <stdio.h> // standard input-output library

// structure definition for university

struct University
{
	int uniId; // stores university ID
	char uniName[100]; // stores university name
}; 

// structure definition for Department 

struct Department
{
	int deptId; // stores department ID
	char deptName[50]; // stores department name
	struct University parentUniversity; // stores university detail (nested struct)
}; 

// structure definition for professor 
struct Professor
{
	 int profId; // stores professor ID
	 char profName[50]; // stores professor name
	 float profSalary; // stores professor salary
	 struct Department profDept; // stores department details (nested struct)

}; 

int main()
{
	// declare a strucutre variable to store professor details
	struct Professor professor; 

	// prompt user to enter university ID
	printf("Enter University ID: \n"); 
	scanf("%d",&professor.profDept.parentUniversity.uniId); //  read and store university ID

	// prompt user to enter university name 
	printf("Enter university Name: \n"); 
    scanf(" %[^\n]s",professor.profDept.parentUniversity.uniName); // read and store univesity name 

	// prompt user to enter department ID
	printf("Enter Department ID: \n"); 
	scanf("%d",&professor.profDept.deptId); // read and store department ID

	// prompt user to enter Department name 
	printf("Enter Deparment Name:\n"); 
	scanf(" %[^\n]s",&professor.profDept.deptName); // read and store department name 

	// prompt user to enter professor ID
	printf("Enter professor ID:\n"); 
	scanf("%d",&professor.profId); // read and store professor Id

	// prompt user to enter professor name 
	printf("Enter Professor name: \n"); 
	scanf(" %[^\n]s",professor.profName); // read and store professor name 

	// prompt user to enter professor salary
	printf("Enter professor salary: \n"); 
	scanf("%f",&professor.profSalary); // Read and store professor salary

	// Display university, department, and professor details
	printf("\n--- University Details ---\n"); 
	printf("University ID: %d\n",professor.profDept.parentUniversity.uniId); 
	printf("University :%s\n",professor.profDept.parentUniversity.uniName); 


	printf("\n--- Department Details ---\n");
	printf("Department ID: %d\n",professor.profDept.deptId); 
	printf("Department: %s\n",professor.profDept.deptName); 

	printf("\n--- Professor Details ---\n"); 
	printf("Professor ID: %d\n",professor.profId); 
	printf("Professor Name: %s\n",professor.profName); 
	printf("Salary : %.2f\n",professor.profSalary); 

	return(0); // return 0 to indicate successful excecution 	
}