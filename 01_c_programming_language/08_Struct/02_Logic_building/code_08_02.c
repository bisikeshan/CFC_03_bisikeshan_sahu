/* S.G.M.P 
 * @file: car_owner.c
 * @brief: This program stores and display car and owner details using structures.
 * @description:
 * This program defines two structures: 'struct Owner' and 'struct car'.
 * - 'struct Owner' contains: 
 * - 'ownerId' (integer) for owner Id.
 * - 'ownerName' (character array ) for owner's name.
 * - 'ownerContact' (character array) for contact number.
 * - 'struct Car' contains: 
 * - 'carId' (integer) for car ID.
 * - 'carModel' (character array) for car model.
 * - 'carYear' (integer) for manufacturing year.
 * - 'carOwner' (structure of type 'Owner') for owner's details.
 * 
 * The program prompts the user to enter details for a car and its owner,
 * then displays the information in a structured format.
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 21-03-2025 4:11pm 
 */

#include <stdio.h> // standard input-output library

// structure Definition for owner
struct Owner
{
	int ownerId; // stores owner Id
	char ownerName[50]; // stores owner name
	char ownerContact[15]; // stores owner contact number
}; 

// strucutre definition for car
struct Car
{
	 int carId; // stores car Id
	 char carModel[50]; // stores car model 
	 int carYear; // stores manufacturing year
	 struct Owner carOwner; // stores owner details (nested struct)
}; 

int main()
{
	// declare a structure variable to store car details
	struct Car myCar; 

	// prompt user to enter car Id
	printf("Enter car Id:\n"); 
	scanf("%d",&myCar.carId); // read and store car id

	// prompt user to enter car model 
	printf("Enter car model: \n"); 
	scanf("%s",myCar.carModel); // read and store car model

	// promt user to enter manfacturnig year
	printf("Enter manufacturing year: \n"); 
	scanf("%d",&myCar.carYear);  // read and store car manufacturing year

	// prompt user to enter owner Id
	printf("Enter owner Id:\n"); 
	scanf("%ed",&myCar.carOwner.ownerId); 
	// read and stores owner Id

	// prompt user to enter owner name 
	printf("Enter owner name: \n"); 
	scanf("%s",myCar.carOwner.ownerName); 

	// prompt user to enter owner contact number
	printf("Enter owner contact number: \n"); 
	scanf("%s",myCar.carOwner.ownerContact);  // read and store owner contact

	// display car and owner details
	printf("\n--- car Details ---\n"); 
	printf("Car Id: %d\n",myCar.carId); 
	printf("Model : %s\n",myCar.carModel); 
	printf("Year: %d\n",myCar.carYear); 
	printf("\n--- owner details ---\n"); 
	printf("owner Id: %d\n",myCar.carOwner.ownerId); 
	printf("owner Name: %s\n",myCar.carOwner.ownerName); 
	printf("contact Number: %s\n",myCar.carOwner.ownerContact); 

	return(0); // return 0 to indicate successful excecution  
}