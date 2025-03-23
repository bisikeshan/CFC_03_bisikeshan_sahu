/* S.G.M.P 
 * @file: employee_department.c
 * @brief: This program stores and displays employee and department details using strucutres
 * @description: 
 * This program defines two structures: 'struct Department' and 'struct Employee'.
 * - 'struct Department' contains: 
 * - 'deptId ' (integer) for department ID.
 * - 'deptName' (character array) for department name.
 * - 'struct Employee' contains: 
 * - 'empId' (integer) for employee ID.
 * - 'empName' (character array) for employee's name.
 * - 'empSalary' (float) for employee salary.
 * - 'empDept' (structure fo type 'Department') for department details
 * 
 * The program prompts the user to enter details for an employee and their department,
 * then displays the information in a structured format.
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 22-03-2025 4:52 PM 
 */

#include <stdio.h> // standard input-out library

// structure definition for department
struct Department
{
	 int deptId; // stores department ID
	 char deptName[50]; // stores department name 
}; 

// structure definition for employee

struct Employee
{
	 int empId; // stores employee ID
	 char empName[50]; // stores employee name 
	 float empSalary; // stores employee salary
	 struct Department empDept; // stores department details (nested struct)
}; 

int main()
{
	// Declare a structure variable to store employee details
	 struct Employee employee; 

	 //prompt user to enter employee ID
	 printf("Enter Employee Name: \n"); 
	 scanf("%[^\n]s",employee.empName); // read and store employee name

	 //prompt user to enter employee salary
	 printf("Enter employee salary:\n"); 
	 scanf("%f",&employee.empSalary); // read and store employee salary

	 // prompt user to enter department ID
	 printf("Enter Department ID: \n"); 
	 scanf("%d",&employee.empDept.deptId); // read and store department ID

	 //promtp user to enter department name 
	 printf("Enter department name: \n"); 
	 scanf(" %[^\n]s",employee.empDept.deptName); 

	 // prompt user to enter department name 
     printf("\n--- Employee Details ---\n"); 
     printf("Employee ID: %d\n",employee.empId); 
     printf("Name: %s\n",employee.empName); 
     printf("Salary: %.2f\n",employee.empSalary); 
     printf("\n--- Department Details ---\n"); 
     printf("Department ID: %d\n",employee.empDept.deptId); 
     printf("Department: %s\n",employee.empDept.deptName); 

     return(0); // to indicate successful excecution 
}
