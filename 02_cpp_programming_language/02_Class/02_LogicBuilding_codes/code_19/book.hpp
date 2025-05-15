/* S.G.M.P 
 * @file: book.hpp
 * @brief: Represents a book in the library system.
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 15-05-2025 11:05am 
 */

#pragma once
#include <string>

class Book
{
// public members
public: 
	Book():m_sTitle(""),m_sAuthor(""),m_iYear(0)
	{
		// code
	}
	Book(std::string in_title,std::string in_author,int in_year)
		: m_sTitle(in_title),m_sAuthor(in_author),m_iYear(in_year)
		{
			// code
		}

		std::string GetTitle()
		{
			return(this->m_sTitle); 
		}

		std::string GetAuthor()
		{
			return(this->m_sAuthor); 
		}

		int GetYear()
		{
			return(this->m_iYear); 
		}


// private members
private: 
	std::string m_sTitle; 
	std::string m_sAuthor; 
	int m_iYear; 
};