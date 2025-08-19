#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <stdexcept>
#include <exception>
#include "ExpenseTracker.hpp"

// Public Function definition of ExpenseTrackers class

/* 
 * @function: ExpenseTracker
 * @brief: Contructor for the ExpenseTracker class. It initializes the expense tracker by loading expenses from a file. 
 * @params: None
 * @return: None
 */
ExpenseTracker::ExpenseTracker()
{
	// code
	// Load expenses from a file
	LoadExpensesFromFile(); 

}

/*
 * @function: AddExpense
 * @brief: This functions allows the user to add a new expense by entering the amount and description.
 * @params: None
 * @return: None
 */

void ExpenseTracker::AddExpense()
{
	// Variable Declaration
	double dAmount; 
	std::string strDescription; 
	std::string strDate; 

	// code
	// Input amount
	std::cout << "Enter expense amount: "; 
	std::cin >> dAmount; 
	if(std::cin.fail() || dAmount < 0 )
	{
		throw(std::runtime_error( "Invalid amount entered. Please enter a positive number.")); 
	}

	// Input description
	std::cout << "Enter expense description: "; 
	std::cin.ignore(); // Clear the newline character from the input buffer
	std::getline(std::cin,strDescription); 
	if(strDescription.empty()) // Check if description is not empty
	{
		throw(std::runtime_error("Description cannot be empty. Please enter a valid description."));
    }
	// Input Date
	std::cout << "Enter expnese date (YYYY-MM-DD): "; 
	std::getline(std::cin,strDate); 

	if(strDate.empty())
	{
		throw(std::runtime_error("Date cannot be empty. Please enter a valid date.")); 
	}
	// Create expense object and add to vector
	m_vExpenses.push_back(Expense(dAmount,strDescription,strDate)); 

	// Save the expense to file
	SaveExpensesToFile(); 

	std::cout << "Expense added successfully!" << std::endl; 
	
}

/**
 * @function: LoadExpensesFromFile
 * @brief: This function loads expenses from a file into the vector.
 * It reads each line, splits it into components, and creates Expense objects.
 * @params: None
 * @return: None
 */


void ExpenseTracker::ViewExpenses() const
{
	// code
	// Display expenses
	std::cout << "Expenses:" << std::endl; 
	for(const auto &expense:m_vExpenses) // for each loop 
		// for(long le = 0; le < m_vExpenses.size(); ++le ) // normal for loop 
	{
		// auto expense = m_vExpenses[le]; // for normal for loop 
		std::cout << "Amount:" << expense.getAmount()
		          << ", Description: " << expense.getDescription()
		          << ", Date: " << expense.getDate() << std::endl; 
	}

	// Display total expenses
	std::cout << "Total expenses: " << GetTotalExpenses() << std::endl; 

}

/** 
 * @function: GetTotalExpenses
 * @brief: This function calculates the total amount of all expenses recorded in the tracker.
 * @params: None
 * @return: The total amount of expenses as a double
 */

double ExpenseTracker :: GetTotalExpenses() const
{
	// variable declaration

	double dTotal = 0.0; 

	// calculatre total expenses

	for(const auto &expense : m_vExpenses)
	{
		dTotal += expense.getAmount(); 
	}

	return dTotal; 
}


/**
 * @function: LoadExpensesFromFile
 * @brief: This function loads expenses from a file into the vector.
 * It reads each line, splits it into components, and creates Expense objects.
 * @params: None
 * @return: None
 */

void ExpenseTracker:: SaveExpensesToFile() const
{
   // variable declaration
	std::ofstream file("expenses.txt");

	// code

	// check if file is open
	if(!file.is_open())
	{
		throw(std::runtime_error("Could not open expenses file for writing."));
	}
	// Write each expense to the file
	for(const auto &expense : m_vExpenses)
	{
		file << expense.getAmount() << "" << expense.getDescription() << "," << expense.getDate() << std::endl; 

	}

	file.close(); 

}


void ExpenseTracker::LoadExpensesFromFile()
{
	// Variable Declaration
	std::ifstream file("expenses.txt");
	std::string line; 

	// code

	// check if file is open 
	if(!file.is_open())
	{
		throw(std::runtime_error("Could not open expenses file for reading."));
	}

	// Read each line from the file
	while(std::getline(file,line))
	{
		std::istringstream iss(line); 
		double amount; 
		std::string description,date; 


		/** 
		 * The line is of the format: "amount,description,date"
		 * Example: "100.50 Lunch, 2025-07-03"
		 * This code will parse the line into amount, description, and date.
         */

		// Parse the line into components
		bool isAmountValied = false; 
		isAmountValied = (bool)(iss >> amount); // Read amount and check if it is valid
      
      bool isDescriptionValied = false;
      std::getline(iss,description,','); // Read description until the first comma
      isDescriptionValied = !description.empty(); // check if description is not empty
      
		bool isDateValied = false; 
		std::getline(iss,date); // Read date until the end of the line
		isDateValied = !date.empty(); // Check if date is not empty

		if(!isAmountValied || !isDescriptionValied || !isDateValied)
		{
			throw(std::runtime_error("Invalid expense format in file. Please check the file content.")); 
		}
		m_vExpenses.emplace_back(amount,description,date); 
	}

	file.close(); 
}


