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
 * @date: 24-03-2025 9:23 am
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
	 struct University parentUniversity; // stores univesity details (nested struct)
}; 

// structure definition for professor 
struct Professor 
{
	int profId; // stores professor ID
	char profName[50]; // stores profressor name 
	float profSalary; // stores professor salary
	struct Department profDept; // stores department details (nested struct)

}; 

int main()
{
	// Declare a structure variable to store professor details 
	 struct Professor professor; 

	 // prompt  user to enter university ID
	 printf("Enter University ID: \n"); 
     scanf("%d",&professor.profDept.parentUniversity.uniId); // Read and stores university ID

     // promt user to enter university Name
     printf("Enter University Name: \n"); 
     scanf(" %[^\n]s",professor.profDept.parentUniversity.uniName); // Read and store university name

     // prompt user to enter department ID
     printf("Enter Department ID: \n"); 
     scanf("%d",&professor.profDept.deptId); // Read and store department ID 

     // prompt user to enter department name 
     printf("Enter department name: \n"); 
     scanf(" %[^\n]s",&professor.profDept.deptName); // Read and store department name  


     // prompt user to enter profressor ID
     printf("Enter professor ID: \n"); 
     scanf("%d",&professor.profId);

     // prompt user to enter professor Name
     printf("Enter professor Name:\n"); 
     scanf(" %[^\n]s",professor.profName); // Read and store professor name

     // prompt user to enter professor salary
     printf("Enter professor salary: "); 
     scanf("%f",&professor.profSalary); // Read and store professor salary

     // Display university, department, and professor details 
     printf("\n --- university details ---\n"); 
     printf("university ID: %d\n",professor.profDept.parentUniversity.uniId); 
     printf("University name: %s\n",professor.profDept.parentUniversity.uniName); 
     printf("\n--- Department details ---\n"); 
     printf("Deparment ID: %d\n",professor.profDept.parentUniversity.uniId); 
     printf("Deparment Name: %s\n",professor.profDept.deptName); 
     printf("\n--- professor details ---\n"); 
     printf(" professor ID: %d\n",professor.profId); 
     printf(" professor Name: %s\n",professor.profName); 
     printf(" Salary: %.2f\n",professor.profSalary); 

     return(0); // return 0 to indicate successful excecution 

}