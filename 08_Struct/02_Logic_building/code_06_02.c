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
 * @date: 21-03-2025 1:20 PM
 */ 
 
 #include <stdio.h> // standar input output path 

 // strucuture definition for Department 
 struct Department 
 {
 	 int deptId; // store Deparment ID
 	 char deptName[50]; // store Department Name 
 }; 

 // structure definition for employee
 struct Employee
 {
 	 int empId; // stores employee ID
 	 char empName[50]; // stores employee name 
 	 float empSalary; // stores employee salary
 	 struct Department empDept; // stores Department detais (nested struct)

 }; 
 
 int main()
 {
 	  struct Employee emp; 
 	  // prompt user to enter employee Id
 	 printf("Enter employee ID: \n"); 
 	 scanf("%d",&emp.empId); // read and store employee id

 	 // prompt user to enter employee name
 	 printf("Enter employee Name : \n"); 
 	 scanf("%s",&emp.empName); // read and store employee name 


 	 // prompt user to enter emloyee salary
 	 printf("Enter employee salary: \n"); 
 	 scanf("%f",&emp.empSalary); // read and store employee salary

 	 // prompt user to enter department Id

 	 printf("Enter department Id: \n"); 
     scanf("%d",&emp.empDept.deptId); // read and store department ID

     // prompt suer to enter department Name 
     printf("Enter department Name : \n"); 
     scanf("%s",&emp.empDept.deptName); 


     // display employee details 
     printf("\n--- Employee Details ---\n"); 
     printf("Employee ID: %d\n",emp.empId); 
     printf("Name: %s\n",emp.empName); 
     printf("salary: %.2f\n",emp.empSalary); 
     printf("department ID:\n ",emp.empDept.deptId); 
     printf("department: %s\n",emp.empDept.deptName); 

     return (0); // return 0 to indicate successful excecution 

 }