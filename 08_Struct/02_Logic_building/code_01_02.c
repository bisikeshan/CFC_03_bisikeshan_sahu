/* S.G.M.P 
 * @file: employee_management.c
 * @brief: This program stores and display employee details using structures.
 * @description: 
 * This program defines a 'struct Employee' to store details of an employee: 
 * The structure contains four members:
 * - 'name' (character array) to store the employees name
 * - 'age' (integer) to store the employee age
 * - 'salary' (float) to store the salary amount.
 * - 'department' (character array) to store the department name.
 * 
 * The progress prompts the user to enter these details, stores them in a
 * structure variable, and then dislays the entered information in a structured form 
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 19-03-2025 2:44 PM 
 */

#include <stdio.h> // standard input-output library

// strucuture definition for employee
struct Employee
{
	char name[50]; // stores employee's name (string of max 50 characters)
	int age; // stores employee's age (integer)
	float salary; // stores employee's salary (float-point number)
	char department[30]; // stores demployee's department (string of max 30 characters)

}; 

int main()
{
	 // Declare a structure variable to store employee details
	 struct Employee emp; 

	 // prompt user to enter employee name
	 printf("Enter Employee Name: \n"); 
	 scanf("%s",emp.name); // Read the name and store it in emp.name

	 // prompt user to enter employee age
	 printf("Enter Employee Age: \n"); 
	 scanf("%f",&emp.age); // read the salary and store it in emp.salary

	 // prompt user to enter employee salary
	 printf("Enter employee salary:"); 
	 scanf("%f",&emp.salary); // read the salary and store it in emp.salary

	 // prompt user to enter employee department
	 printf("Enter Employee Department:"); 
	 scanf("%s",emp.department); // Read the department and store it in emp.department

	 // Display employee details

	 printf("\n --- Employee Details ---\n"); 
	 printf("Name : %s\n",emp.name); // print employee name
	 printf("AGe : %d\n",emp.age); // print employee age
	 printf("salary : %.2f\n",emp.salary); // print employee salary
	 printf("Department: %s\n",emp.department); // print employee department


	 return (0); // return 0 to indicate successful excecution 


}