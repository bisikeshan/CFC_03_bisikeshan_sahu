/* S.G.M.P 
 * @file: library.hpp
 * @brief: Main class that holds and manages the libarary system.
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 15-05-2025 11:18am 
 */

#pragma once
#include "book.hpp"
#include "member.hpp"
#include "transaction.hpp"

class Library
{
// public member
public:
	void PerformTransaction(Member* in_pMember,Book* in_pBook,int in_choice)
	{
		Transaction objTransaction; 

		if(in_choice == 1)
		{
			objTransaction.BorrowBook(in_pMember,in_pBook); 
		}
		else if(in_choice == 2)
		{
			objTransaction.ReturnBook(in_pMember,in_pBook); 
		}
		else
		{
			std::cout << "Invalid choice!" << std::endl; 
		}
	}

}; 