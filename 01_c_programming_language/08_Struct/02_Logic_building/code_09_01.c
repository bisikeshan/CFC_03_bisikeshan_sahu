/* S.G.M.P 
 * @file: book_author.c
 * @brief: This program stores and displays book and author details using structures. 
 * @description: 
 * This program defines two structures: 'struct Author' and 'struct Book'
 * - 'struct Author' contains: 
 * - 'authorId' (integer) for author ID.
 * - 'authorName' (character array) for author's name 
 * - 'authorCountry' (character array) for author's country
 * - 'struct Book' contains: 
 * - 'bookId' (integer) for book title.
 * - 'bookTitle' (character array) for book title.
 * - 'bookPrice' (float) for book price.
 * - 'bookAuthor' (structure of type 'Author') for author's details.
 *
 * The program prompts the user to enter details for a book and its author,
 * then displays the information in a structured format.
 * @author: bisikeshan567@gmail.com (bisikeshan567@gmail.com)
 * @date: 21-03-2025 5:26 PM 
 */
#include <stdio.h> // standard input output library

// structure definition for author
struct Author
{
	int authorId; // stores author Id
	char authorName[50]; // store author's name
	char authorCountry[50]; // stores author's country
}; 

// structure definition for book
struct Book
{
	int bookId; // stores book Id
	char bookTitle[100]; // stores book title
	float bookPrice; // stores book price
	struct Author bookAuthor; // stores author's details (nested struct)
}; 

int main()
{
	// declare a structure variable to store book details 
	struct Book myBook; 

	// prompt user to enter book Id
	printf("Enter book Id:\n"); 
	scanf("%d",&myBook.bookId); // read and store book Id

	// prompt user to enter book title
	printf("Enter book title: \n"); 
	scanf(" %[^\n]s",myBook.bookTitle); // read and store book title (allows spaces)

	// prompt user to enter book price
	printf("Enter Book price:\n"); 
	scanf("%f",&myBook.bookPrice); // read and store book price

	// prompt user to enter author ID
	printf("Enter author ID: \n"); 
	scanf("%d",&myBook.bookAuthor.authorId); // read and store author Id

	// prompt user to enter author name 
	printf("Enter author Name: \n"); 
	scanf(" %[^\n]s",myBook.bookAuthor.authorName); // Read and store author name. 

	// promtp user to enter author country
	printf("Enter author country: \n"); 
	scanf(" %[^\n]s",myBook.bookAuthor.authorCountry); // read and store author country

	// read and store author country

	// display book and author details
	printf("\n---Book details---\n"); 
	printf("Book Id: %d\n",myBook.bookId); 
	printf("Title: %s\n",myBook.bookTitle); 
	printf("price: %.2f\n",myBook.bookPrice); 
	printf("\n --- Author Details ---\n"); 
	printf("Author ID: %d\n",myBook.bookAuthor.authorId);
	printf("Author Name: %s\n",myBook.bookAuthor.authorName); 
	printf("Country: %s\n",myBook.bookAuthor.authorCountry); 

	return(0); // Return (0) to indicate successful excecution 

}