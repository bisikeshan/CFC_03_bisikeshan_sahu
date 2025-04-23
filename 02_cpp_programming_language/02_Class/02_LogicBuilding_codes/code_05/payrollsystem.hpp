/* S.G.M.P 
 * @file: payrollsystem.hpp
 * @brief: header file for payrollsytem class to manage employees and calculate payroll
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 23-04-2025 4:30pm 
 */ 


#pragma once

// Headers & namespaces
#include "employee.hpp"

class Payrollsystem 
{
// public members
public:
	// constructor to initialize the payroll system with no employees
	Payrollsystem(): m_iEmployeeCount(0){}

	// function to code a new employee to the payroll system 
	void AddEmployee(const Employee& in_employee)
	{
		// code
		// check if there is space for more employees
		if(this->m_iEmployeeCount < MAX_EMPLOYEES)
		{
			this->m_employees[this->m_iEmployeeCount] = in_employee; 
			this->m_iEmployeeCount++; 
		}
		else
		{
			std::cout << "payroll system is full!" << std::endl; // payroll system is full 
		}
	}
// function to display all employee's payroll details
	void DisplayEmployees()
	{
		// code
		for(int le = 0; le < this->m_iEmployeeCount;le++)
		{
			this->m_employees[le].DisplayDetails(); 
		}
	}
// private members
private:
	static const int MAX_EMPLOYEES = 10; // maximum numbers of employees allowed in the payroll system 
	Employee m_employees[MAX_EMPLOYEES]; // array of employee objects to store employees
	int m_iEmployeeCount; // numbers of emloyees currently in the payroll system  
}; 