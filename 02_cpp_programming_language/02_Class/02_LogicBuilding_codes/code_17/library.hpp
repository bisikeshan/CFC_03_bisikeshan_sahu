/* S.G.M.P 
 * @file: library.hpp
 * @brief: Manages a library with books and members. 
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 14-03-2025 5:22pm 
 */

#pragma once

// Entry point function 
#include <iostream>
#include <string>

// class definition
class Library
{
// public members
public:
	// code
	Library():m_sLibraryName("")
	{
		// code
	}
	Library(std::string in_sLibraryName): m_sLibraryName(in_sLibraryName)
	{
		// code
	}

	// code

 void AddBook(std::string in_bookTitle,std::string in_bookAuthor)
	{
		// code
		if(this->m_iBookCount < 10)
		{
			this->m_sBooks[this->m_iBookCount++] = "Title:" + in_bookTitle + ",Author:" + in_bookAuthor; 
		}
		else
		{
			std::cout << "Library full. Cannot add more books.\n"; 
		}
	}

	// code
	void ShowBooks()
	{
		std::cout << "Books in" << this->m_sLibraryName << ":\n"; 
		for(int i = 0; i < this->m_iBookCount; ++i)
		{
			std::cout << this->m_sBooks[i] << std::endl; 
		}

	}
// private members
private: 
	std::string m_sLibraryName; 
	std::string m_sBooks[10]; // Fixed-size array for storing books
	int m_iBookCount = 0; // Tracks the numbers of books in the library

}; 