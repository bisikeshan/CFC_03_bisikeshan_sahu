/* /* S.G.M.P 
 * @file: emplyee_Department.c
 * @brief: This program stores and displays employee and departments details using strucutre
 * @descriptions: 
 * This program stores and displays employee and department details using structure 
 * This program defines two structures: 'struct Department' and 'struct employee'
 * - 'deptId' (integer) for department ID. 
 * - 'deptName' (character array) for department name
 * -- struct employee conatins: 
 * - empId (integer) for employee Id
 * - empName (character array) for employee name: 
 * - empSalary (float) for salary
 * - empDept (structure of type Department) for department details
 *
 * the program prompts the user to enter details for an employee and their department,
 * then displays the information in a structured format.
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 21-03-2025 1:08 PM
 */ 
  
 #include <stdio.h>  // standard input output libary

// structure definition for department 
struct Department 
{
	 int deptId; // stores department ID
	 char deptName[50]; // stores department Name
}; 

// structure Definition for employee 
struct Employee
{
	 int empId; // stores employee ID
	 char empName[50]; // stores employee name
	 float empSalary; // stores employee salary
	 struct Department empDept; // stores Department details (nested struct)
}; 

int main()
{
	// Declare a structure variable to store employee details 
	struct Employee emp; 

	// promt user to enter employee ID
	printf("Enter employee ID: "); 
	scanf("%d",&emp.empId); // Read and store employee Id

	// prompt user to enter employee nam e
	printf("Enter employee name:\n"); 
	scanf("%s",&emp.empName); // read and store emp name 

	// prompt user to enter employee salary
	printf("Enter employee Salary: \n"); 
	scanf("%f",&emp.empSalary); // read and store emp salary

	// prompt user to enter employee department Id
	printf("Enter department Id: \n"); 
	scanf("%d",&emp.empDept.deptId); 

	// promt user to enter emplyee department
	printf("Enter department name : \n"); 
	scanf("%s",emp.empDept.deptName);

	// Display employee details
	printf("\n--- Employee Details ---\n"); 
	printf("Employee ID: %d\n",emp.empId); 
	printf("Name: %s\n",emp.empName); 
	printf("Salary: %.2f\n",emp.empSalary); 
	printf("Department ID: %d\n",emp.empDept.deptId); 
	printf("Department Name :%s\n",emp.empDept.deptName);  


	// return 0 to indicate successful excecution

	return (0); 
}