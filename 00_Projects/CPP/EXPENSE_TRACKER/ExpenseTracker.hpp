/* S.G.M.P 
 * @file: ExpenseTracker.hpp
 * @date: 06-07-2025
 */
#pragma once

#include <iostream>
#include <vector>
#include <string>

// Expense class definition
class Expense
{
public: 
	Expense(double amount,const std::string &description,const std::string &date = "2025-07-03"):m_dAmount(amount),m_strDescription(description),m_strDate(date)
	{		
	}

	double getAmount() const
	{
		return(m_dAmount);
	}

	const std::string &getDescription() const
	{
		return(m_strDescription);
	}

	const std::string &getDate() const
	{
		return(m_strDate);
	}

private:
	double m_dAmount; 
	std::string m_strDescription;
	std::string m_strDate;
};

// Expense Tracker Class Definition
class ExpenseTracker
{
public:
	ExpenseTracker();  // constructor
	void AddExpense();
	void ViewExpenses() const; 
	double GetTotalExpenses() const;
		

	
private:
	std::vector <Expense> m_vExpenses;
	void SaveExpensesToFile() const;
	void LoadExpensesFromFile();

};