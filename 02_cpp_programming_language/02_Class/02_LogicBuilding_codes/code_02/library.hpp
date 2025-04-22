// author : bisikeshan sahu  

#pragma once

// Headers & namespaces
#include "Book.hpp"

class Library
{
// public members
public:
	// constructor to initialize library with zero books
	Library(): m_iBookCount(0){}

	
	// function to add a book to the library collection 
	void AddBook(const Book& in_book)
	{
		// code
		if(this->m_iBookCount < MAX_BOOKS)
		{
			this->m_books[this->m_iBookCount] = in_book; 
			this->m_iBookCount++; // Increment the book count
		}
		else
		{
			std::cout << "library is full!" << std::endl; 
			// library is full, no more books can be added
		}
	} 

	// function to display all books in the library
	void DisplayBooks()
	{
		// code
		for(int le = 0; le < this->m_iBookCount; le++)
		{
			this->m_books[le].DisplayDetails();
		}
	}
// private members
private: 
	// maximum numbers of books allowed in the library
	static const int MAX_BOOKS = 10;  // array of Book objects
	Book m_books[MAX_BOOKS]; 
	int m_iBookCount;  // Numbers of book currenty in the library
}; 