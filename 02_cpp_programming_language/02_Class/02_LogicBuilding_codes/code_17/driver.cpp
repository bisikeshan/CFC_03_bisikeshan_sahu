/* S.G.M.P 
 * @file: driver.cpp
 * @brief: Driver for the library system.
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 15-05-2025 7:47pm 
 */

#include "librarytransaction.hpp"

int main()
{
	// code
	Library objLibrary("City Library"); 
	Member objMember1("John Doe"); 
	LibraryTransaction objLibraryTransaction; 

	objLibrary.AddBook("The catcher in the Rye", "J.D Salinger "); 
	objLibrary.AddBook("1984","George Orwell"); 
	objLibrary.AddBook("To kill a Mocking bird","Harper Lee"); 

	int iChoice; 

	while(true)
	{
		std::cout << "\n1. Show Library Books\n2. Show member Borrowed books\n 3.Borrow Book\n4. Return Book\n.5. Exit\n Enter choice: "; 
		std::cin >> iChoice; 

		if(iChoice == 1)
		{
			objLibraryTransaction.ShowLibraryBooks(&objLibrary); 
            
		}
		else if(iChoice == 2)
		{
			objLibraryTransaction.ShowMemberBooks(&objMember1); 

		}
		else if(iChoice == 3)
		{
			std::string sBook; 
			std::cout << "Enter book title to borrow:"; 
			std::cin.ignore(); 
			std::getline(std::cin,sBook); 
			objLibraryTransaction.BorrowBook(&objLibrary,&objMember1,sBook); 
		}
		else if(iChoice == 4)
		{
			std::string sBook; 
			std::cout << "Enter book title to return:"; 
			std::cin.ignore(); 
			std::getline(std::cin,sBook); 
			objLibraryTransaction.ReturnBook(&objLibrary,&objMember1,sBook); 

		}
		else if(iChoice == 5)
		{
			break; 
		}

		else
		{
			std::cout << "Invalid choice. Try again.\n"; 
		}
	}

	return(0); 
}