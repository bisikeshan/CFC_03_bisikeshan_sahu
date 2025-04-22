/* S.G.M.P 
 * @file: Book.hpp
 * @brief: Header file for Book class representing a library book.
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 18-04-2025 12:41PM
 */

#pragma once


// Headers & Namespace
#include <iostream>
#include <string>

class Book
{
// public members
public:

	// default constructor
	Book():m_sTitle(""),m_sAuthor(""),m_iYear(0){}

	// contructor to initialize Book object with title, author , and year
	Book(std:: string in_sTitle, std::string in_sAuthor,int in_iYear):
	m_sTitle(in_sTitle),m_sAuthor(in_sAuthor),m_iYear(in_iYear),m_bIsCheckedOut(false){}

	// function to checkout a book
	void Checkout()
	{
		// code
		if(!this->m_bIsCheckedOut)
		{
			this->m_bIsCheckedOut = true; 
			std::cout << "check out:" << this->m_sTitle << std::endl; 
		}
		else
		{
			std::cout << "Book already checked out! " << std::endl; // Book already checked out
		}
	}

	// function to return a book
	void Return()
	{
		// code
		if(this->m_bIsCheckedOut) // if the book is currently checked out
		{
			this->m_bIsCheckedOut = false; 
			std::cout << "Returned: " << this->m_sTitle << std::endl; 
		}
		else
		{
			std::cout << "Book not checked out!" << std::endl; /// Book is not checked out
		}
	}

	// function to display details of the book 
	void DisplayDetails()
	{
		// code
		std::cout << "Title" << this->m_sTitle << std::endl; 
		std::cout << "Author" << this->m_sAuthor << std::endl; 
		std::cout << "Year:" << this->m_iYear << std::endl; 
		std::cout << (this->m_bIsCheckedOut? "checked out": "Availabe") << std::endl; 

	}


// priave members
private: 
	std::string m_sTitle; // Book title
	std::string m_sAuthor; // Author name 
	int m_iYear; // publication year
	bool m_bIsCheckedOut; // wheather the book is checked out or not

}; 