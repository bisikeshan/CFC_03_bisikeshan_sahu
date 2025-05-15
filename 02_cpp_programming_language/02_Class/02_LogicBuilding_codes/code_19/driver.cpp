/* S.G.M.P 
 * @file: driver.cpp
 * @brief: Main program to simulate a library management system.
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 15-05-2025 11:23am
 */

 #include "library.hpp"

 int main()
 {
 	// code
 	Book objBook1("1984","George Orwell",1949);
 	Book objBook2("To Kill a mocking bird", "Harper Lee",1960); 

 	Member objMember1("Alice",101); 
 	Member objMember2("Bob",102); 

 	Library objLibrary; 

 	int iChoice; 

 	while(true)
 	{
 		std::cout << "\n1. Borrow Book\n 2.Return Book\n 3.Exit\n Enter choice:"; 
 		std::cin >> iChoice; 

 		if(iChoice == 1)
 		{
 			objLibrary.PerformTransaction(&objMember1, &objBook1, iChoice ); 

 		}
 		else if(iChoice == 2)
 		{
 			objLibrary.PerformTransaction(&objMember2,&objBook2,iChoice ); 
 		}

 		else if(iChoice == 3)
 		{
 			break; 
 		}

 		else
 		{
 			std::cout << "Invalid choice. Try again.\n"; 
 		}
    }

    return 0; 
 } 