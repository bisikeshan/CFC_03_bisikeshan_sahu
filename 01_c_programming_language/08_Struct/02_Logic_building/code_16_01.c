/* S.G.M.P
 * @file: code_16_01.c
 * @brief: A library management system using structs.
 * This program simulates a library management system where: 
 * - 'struct Author' stores author details (ID, name, nationality).
 * - 'struct Book' stores book details (ID, title, genre, author info).
 * - 'struct Borrower' stores borrower details (ID , name, borrowed book details).
 * - Books can be borrowed and returned by borrowers.
 * - Users array to manage multiple books and borrowers
 * - Implements functions for structured processing.
 * - Implements looping for data entry and retrieval.
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 08-04-2025 5:03PM 
 */

#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 5
#define MAX_BORROWERS 5

// structure to store author details

struct Author
{
	int autId; // author ID
	char autName[50]; // author Name
	char autNationality[30]; // author Nationality
}; 
// structure to store book details

struct Book
{
	int bookId; // book ID
	char bookTitle[100]; // book Title
	char bookGenre[30]; // book Genre
	struct Author bookAuthor; // author details
};

// structure to store borrower details

struct Borrower
{
	int borId; // Borrower Id
	char borName[50]; // Borrower Name
	struct Book borrowedBook; // Borrowed book details
}; 

// Function prototyes
void enterBorrowerDetails(struct Borrower *); 
void displayBorrowerDetails(struct Borrower *,int); 

int main()
{
	struct Borrower borrowers[MAX_BORROWERS]; 
	int numBorrowers,le; 

	// Get number of borrowers
	printf("Enter the number of borrowers (max %d):\n",MAX_BORROWERS); 
	scanf("%d",&numBorrowers); 

	if(numBorrowers > MAX_BORROWERS)
	{
		 printf("Exceeded maximum limit! setting to %d.\n",MAX_BORROWERS); 
		 numBorrowers = MAX_BORROWERS; 
	}

	// loop to get borrower details
	for(le = 0; le < numBorrowers; le++)
	{
		printf("\n---Enter details for borrower details %d ---\n",le+1); 
		enterBorrowerDetails(&borrowers[le]); 
	}

	// Display entered details
	displayBorrowerDetails(borrowers,numBorrowers); 

	return(0); 
}

// function to enter borrower details

void enterBorrowerDetails(struct Borrower *b)
{
	 // Enter Author Detials
	 printf("Enter Author ID: \n"); 
	 scanf("%d", &b->borrowedBook.bookAuthor.autId); 

	 printf("Enter Author Name: \n"); 
	 scanf(" %[^\n]s", b->borrowedBook.bookAuthor.autName); 

	 printf("Enter Author Nationality:\n");
	 scanf(" %[^\n]s", b->borrowedBook.bookAuthor.autNationality); 


	 // Enter book details
	 printf("Enter Book ID: \n"); 
	 scanf("%d",&b->borrowedBook.bookId); 

	 printf("Enter Book Title: \n"); 
	 scanf(" %[^\n]s",b->borrowedBook.bookTitle); 

	 printf("Enter Book Genre:\n"); 
	 scanf(" %[^\n]s",b->borrowedBook.bookGenre); 

	 // Enter Borrower Details
	 printf("Enter Borrower ID:\n"); 
	 scanf("%d", &b->borId); 

	 printf("Enter Borrower Name: \n"); 
	 scanf(" %[^\n]s",b->borName); 

}

// Function to display borrower details

void displayBorrowerDetails(struct Borrower *b,int count)
{
	 int le; 
	 printf("\n--- Library Records ---\n"); 
	 for(le = 0; le < count; le++)
	 {
	 	printf("\nBorrower ID: %d\n",b[le].borId); 
	 	printf("Borrower Name: %s\n",b[le].borName); 
	 	printf("\nBorrowed Book Details:\n"); 
	 	printf("Book ID:%d\n",b[le].borrowedBook.bookId); 
	 	printf("Book Title: %s\n",b[le].borrowedBook.bookTitle); 
	 	printf("Book Genre: %s\n",b[le].borrowedBook.bookGenre); 
	 	printf("\nAuthor Details:\n"); 
	 	printf("Author ID: %d\n",b[le].borrowedBook.bookAuthor.autId);
	 	printf("Author Name: %s\n",b[le].borrowedBook.bookAuthor.autName);
	 }
	 
}



	

