/* S.G.M.P 
 * @file: driver.cpp
 * @brief: 
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 18-04-2025 
 */

// Headers & Namespace
#include "Library.hpp"

int main()
{
	// Create Book objects
	Book objBook1("1984","George orwell",1949); 
	Book objBook2("To kill a MockingBird","Harper Lee",1960); 

	// Create library object
	Library objLibrary; 

	// Add Books to the library
	objLibrary.AddBook(objBook1); 
	objLibrary.AddBook(objBook2);

	// Display Books in the library
	objLibrary.DisplayBooks(); 

	// checkout and returnbooks
	objBook1.Checkout(); 
	objBook2.Return(); 

	return (0); // Ent of the program 
}