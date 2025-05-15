/* s.g.m.p 
 * @file: librarytransaction.hpp
 * @brief: Handles library transactions like borrowing and returning books.
 * @author: bisikeshan sahu(bisikeshan567@gmail.com)
 * @date: 14-05-2025 7:40pm 
 */

 #pragma once
 #include "library.hpp"
 #include "member.hpp"

 class LibraryTransaction
 {
 public:
 	// code
 	void BorrowBook(Library* in_pLibrary,
 		       Member* in_pMember,
 		       std::string in_book)
 	{
 		in_pMember->BorrowBook(in_book); 
 	}
  
    // code
    void ReturnBook(Library* in_pLibrary,
    	            Member* in_pMember,
    	            std::string in_book)
    {
    	in_pMember->ReturnBook(in_book); 
    }

    // code
    void ShowLibraryBooks(Library* in_pLibrary)
    {
    	in_pLibrary->ShowBooks(); 
    }

    void ShowMemberBooks(Member* in_pMember)
    {
    	in_pMember->ShowBorrowedBooks(); 
    }


 }; 