/* S.G.M.P 
 * @file: car_inventory.c
 * @brief: This program stores and displays car details using structures.
 * @description: 
 * This program defines a 'struct Car' to store details of a car.
 * The structure contains four members:
 * - 'carModel' (character array) to store the car model name
 * - 'carYear' (integer) to store the manufacturing year
 * - 'carPrice' (float) to store the car's price.
 * - 'carColor' (character array) to store the color of the car.
 * 
 * The program prompts the user to enter these details, stores them in a 
 * structure variable, and then displays the entered information in a structured format.
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 20-03-2025 9:41 am 
 */

#include <stdio.h> // standar input-output library

// structure definition for car
struct car
{
	 char carModel[50]; // stores car model name (string of max 50 characters)
	 int carYear; // stores manufacturing year(integer)
	 float carPrice; // stores car price (floating-point number)
	 char carColor[20]; // stores car color (string of max 20 characters)

}; 

int main()
{
	// Declare a structure variable to store car details
	struct car myCar; 

	// prompt user to enter car model 
	printf("Enter car model \n"); 
    scanf("%s", myCar.carModel); // read the model and store it in myCar.carModel

    // promtp user to enter car Year
    printf("Enter car Year \n");
    scanf("%d", &myCar.carYear); // read the year and store it in myCar.Year

    // prompt user to enter car Price
    printf("Enter car price: \n"); 
    scanf(" %f",&myCar.carPrice); 
     	

    // prompt user to enter carColor
    printf("Enter car color: \n"); 
    scanf("%s", myCar.carColor); 


    // Display the car details
    printf("\n --- car Details ----\n"); 
    printf("Model: %s\n",myCar.carModel); 
    printf("Year: %d\n",myCar.carYear); 
    printf("Price: %.2f\n",myCar.carPrice); 
    printf("Color: %s\n",myCar.carColor); 

    return(0); 
}