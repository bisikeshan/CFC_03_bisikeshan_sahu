/* S.G.M.P
 * @file: Transaction.hpp
 * @brief: Handles book recording and returning for library members
 * @Author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 15-05-2025 11:12am
 */

 #pragma once
 #include "book.hpp"
 #include "member.hpp"
 #include <iostream>

 class Transaction
 {
 // public members
 public:
 	// code
 	void BorrowBook(Member* in_pMember, Book* in_pBook)
 	{
 		std::cout << in_pMember->GetName()
 				  << "Borrowed the book:"
 				  << in_pBook->GetTitle()
 				  << std::endl; 
 	}

 	void ReturnBook(Member* in_pMember, Book* in_pBook)
 	{
 		std::cout << in_pMember->GetName()
 				  << "returned the book:"
 				  << in_pBook->GetTitle()
 				  << std::endl; 
 	}

 }; 