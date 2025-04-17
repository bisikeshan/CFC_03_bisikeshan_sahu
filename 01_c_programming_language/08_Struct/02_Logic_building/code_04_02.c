/* S.G.M.P 
 * @file: book_inventory.c
 * @brief: This program stores and displays book details using structures.
 * @descriptions: 
 * This program defines a 'struct book' to store details of a book 
 * The structure contains four members: 
 * - 'bookTitle' (character array) to store the books title
 * - 'bookAuthor' (character array) to store the author's name.
 * - 'bookYear' (integer)  to store the year of publication.
 * - 'bookPrice' (float) to store the price of the book.
 * 
 * The program prompts the user to enter these details, stores them in a 
 * structure variabie, and then displays the entered information in a structured formatn.
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 20-03-2025 3:57 PM 
 */ 
#include <stdio.h> // Standard input output libary

// Structure Definition for book 
struct Book 
{
	char bookTitle[100]; // stores book title (string of max 100 charcters)
	char bookAuthor[50]; // stores author's name (string of max 50 characters)
	int  bookYear; // stores year of publication(integer)
	float bookPrice; // stores book price (floating point number)

}; 

int main()
{
	 // declare a structure variable to store book details 
	 struct Book myBook; 

	 // prompt user to enter book Title 
	 printf("Enter book Title: \n"); 
	 scanf("%s",myBook.bookTitle); // Read the title and store it in myBook.bookAuthor

	 // prompt user to enter book Author
	 printf("Enter Author Name: \n"); 
	 scanf("%s",myBook.bookAuthor); // Read the title and store it in myBook.bookAuthor

	 // prompt user to enter yeaer of publication 
	 printf("Enter year of publication: \n"); 
     scanf("%d",&myBook.bookYear);  // Read the title and store int in myBook.bookYear

     // prompt user to enter book price 
     printf("Enter book price: \n"); 
     scanf("%f",&myBook.bookPrice); // Read the title and store float in myBook.bookPrice 

     // Display Books details
     printf("\n --- Book Details ---\n"); 
     printf("Title: %s\n",myBook.bookTitle); // print book title
     printf("Book Author: %s\n",myBook.bookAuthor); // print book Author
     printf("Year: %d\n",myBook.bookYear); // print book year
     printf("price: %.2f\n",myBook.bookPrice); // print book price

     // return 0 to indicate sucessful excecution 
     return 0; 
	 

}