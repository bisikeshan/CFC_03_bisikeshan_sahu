/* S.G.M.P 
 * @file: book_inventory.c
 * @brief: This program stores and displays book details using structures.
 * @description: 
 * This program defines a 'struck book' to store details of a book. 
 * The strucutre contains four members: 
 * - 'bookTitle' (character array) to store the books title
 * - 'bookAuthor' (character array) to store the author's name.
 * - 'bookYear' (integer) to store the year of publication.
 * - 'bookPrice' (float) to store the price of the book
 * 
 * The program prompts the user to enter these details , stores them in a
 * structure variable, and then displays the entered information in a structured format.
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 20-03-2025 2:03 PM 
 */

 #include <stdio.h> // standard input output library
 
 // strucutre Definition for book 
struct Book 
{
	char bookTitle[100]; // store book title (string of max 100 characters)
	char bookAuthor[50]; // stores author's name (string of max 50 characters)
	int  bookYear; // stores year of publication (integer)
	float bookPrice; // stores book price (floating-point number)
}; 

int main()
{
	// Declare a structure variable to store book details
	struct Book myBook; 

	// prompt user to enter book title 
	printf("Enter book Title: \n"); 
	scanf("%s",myBook.bookTitle); // read the title and store it in myBook.bookTitle

	//prompt user to enter book author
	printf("Enter book Author: \n"); 
	scanf("%s",myBook.bookAuthor); // Read the title and store it in myBook.bookAuthor

	//prompt user to enter book Year
	printf("Enter book year: \n"); 
	scanf("%d",&myBook.bookYear); // stores year of publication (integer)

	//prompt user to enter bookPrice
	printf("Enter book price:\n"); 
	scanf("%f",&myBook.bookPrice); // stores book price (floating-point number)

	// Display books details
    printf("\n --- Book details ---\n"); 
    printf("Title: %s\n",myBook.bookTitle); // print book title
    printf("Author: %s\n",myBook.bookAuthor); // print Author name
    printf("price: %.2f\n",myBook.bookPrice); //print book price
    printf("Year: %d\n",myBook.bookYear); // print book year


    // return 0 to indicate successful excecution 
    return (0); 
}