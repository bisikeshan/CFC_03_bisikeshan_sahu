/* S.G.M.P 
 * @file: member.hpp
 * @brief: Represents a library member with borrowed books.
 * @Author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 14-05-2025 5:32pm 
 */

#pragma once
#include <iostream>
#include <string>

class Member
{
// public members
public:
	// code
	Member(std::string in_sName):m_sName(in_sName)
	{
		// code
	}

	void BorrowBook(std::string in_sBook)
	{
		if(this->m_iBookCount < 5)
		{
			this->m_sBorrowedBooks[this->m_iBookCount++] = in_sBook; 

		}
		else
		{
			std::cout << "Cannot borrow more than 5 books.\n"; 
		}

	}

	// code
	void ReturnBook(std::string in_sBook)
	{
		for(int i = 0 ; i < this->m_iBookCount; ++i)
		{
			if(this->m_sBorrowedBooks[i] == in_sBook)
			{
				for(int j = i; j < this->m_iBookCount - 1; ++j)
				{
					this->m_sBorrowedBooks[j] = this->m_sBorrowedBooks[j + 1]; 

				}

				--this->m_iBookCount; 
				std::cout << "Returned:" << in_sBook << std::endl; 
				return; 
			}
		}

		std::cout << "Book not found in borrowed books.\n"; 
	}

	// code

	void ShowBorrowedBooks()
	{
		std::cout << "Books borrowed by " << this->m_sName << ":\n"; 
		for(int i = 0; i < this->m_iBookCount; ++i)
		{
			std::cout << this->m_sBorrowedBooks[i] << std::endl; 
		}

	}

// private members
private:
	std::string m_sName; 
	std::string m_sBorrowedBooks[5]; // Fixed-size array for borrowed books
	int m_iBookCount = 0; // Tracks the number for books borrowed 
}; 