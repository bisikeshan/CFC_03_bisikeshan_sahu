/* S.G.M.P 
 * @file: driver.cpp 
 * @brief: Driver file to test the employee and payroll system classes
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 23-04-2025 4:46pm 
 */

// Headers & namespaces
#include "payrollsystem.hpp"

int main(void)
{
	// create employee objects
	Employee objEmployee1("John Doe",160,20.0); 
	Employee objEmployee2("Jane Smith",150,22.0); 

	// create Payrollsystem objects
	Payrollsystem objPayroll; 

	// add employees to the payroll system 
	objPayroll.AddEmployee(objEmployee1);
	objPayroll.AddEmployee(objEmployee2);

	// Display all employees in the payroll system 
	objPayroll.DisplayEmployees(); 

	return (0); // End of program 
}