/* S.G.M.P 
 * @file: employee.hpp
 * @brief: Header file for employee class to store and calculate payroll information 
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 23-04-2025 4:16pm
 */


#pragma once

// Headers and namespaces
#include <iostream>
#include <string>

class Employee
{
// public members
public: 
	// Default constructor
	Employee(): m_sName(""),m_dHoursWorked(0.0),m_dHourlyRate(0.0)
	{
		// code
	}

	// parameterised constructor
	Employee(std::string in_sName,double in_dHoursWorked, double in_dHourlyRate):
	m_sName(in_sName),m_dHoursWorked(in_dHoursWorked),m_dHourlyRate(in_dHourlyRate)
	{
		// code
	} 

	// function to calculate the total salary of the employee 
	double CalculateSalary()
	{
		// code
		return(this->m_dHoursWorked * this->m_dHourlyRate); // multiply hours worked by hourly rate
	}

	// function to display employee details and salary
	void DisplayDetails()
	{
		// code
		std::cout << "Employee" << this->m_sName << std::endl; 
		std::cout << "HoursWorked:" << this-> m_dHoursWorked << std::endl; 
		std::cout << "Hourly Rate : rs " << this->m_dHourlyRate << std::endl; 
		std::cout << "Salary: rs" << this->CalculateSalary() << std::endl; 
	}
// private members
private: 
	std::string m_sName; // Employee Name 
	double m_dHoursWorked; // Numbers of hours worked
	double m_dHourlyRate; // Hourly rate
}; 