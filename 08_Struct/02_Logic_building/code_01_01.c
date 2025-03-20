/* S.G.M.P 
 * @file: employee_management.c
 * @brief: This program stores and displays employee details using structures.
 *description: 
 * This program defines a "struct employee" to store details of an employee.
 * The structure contains four members: 
 * - 'name' (character array) to store the employees name
 * - 'age' (integer) to store the employee's age
 * - 'salary' (float) to store the salary amount.
 * - 'department' (character array) to store the department name.
 * 
 * The program prompts the user to enter these details,store them in a 
 * structure variable, and the displays the entered information in a structured format.
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 19-03-2025 11:14 am 
 */

#include <stdio.h> // standar input-output library

// structure definition for employee
struct Employee
{
	 char name[50]; // stores employee's name (string of max50 characters)
	 int age; // stores employee's age (Integer)
	 float salary; // stores employee's salary (floating point number)
	 char department[30]; // stores employee department( (string of max 30 characters))
}; 


int main()
{
	 // declare a structure to store employee details
	struct Employee emp;

	// prompt user to enter employee name
	printf("Enter employee name: \n"); 
	scanf(" %s",emp.name); // Read the name and store it in emp.name

	// prompt user to enter employee age
	printf("Enter employee age: \n"); 
	scanf(" %d",&emp.age);  // Read the age and store it in emp-age

	// prompt user to enter employee salary
	printf("Enter employee salary\n"); 
	scanf("  %f",&emp.salary); // read the salary and store it in emp.salary


	// prompt user to enter employee department
	printf("Enter employee department\n"); 
	scanf("  %s", emp.department); // read the department and store it in emp.department 


	// display employeed details

	printf("\n--- Employee details ---\n"); 
	printf("Name: %s\n",emp.name); // print employee name 
	printf("Age: %d\n",emp.age); // print employee age 
	printf("salary: %.2f\n",emp.salary); // print employee salary
	printf("Department: %s\n",emp.department); // print employee department

	// return 0 to indicate successful excecution 

	return 0; 

}