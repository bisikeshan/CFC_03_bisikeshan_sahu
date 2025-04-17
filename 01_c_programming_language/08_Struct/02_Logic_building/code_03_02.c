/* S.G.M.P 
 * @file: car_inventory.c
 * @brief: This program stores and displays car details using strucutres.
 * @description: 
 * This program defines a 'struct car' to store details of a car.
 * The structure contains four members: 
 * - 'carModel' (character array) to store the car model name. 
 * - 'carYear' (integer) to store the manufacturing year.
 * - 'carPrice' (float) to store the car's price.
 * - 'carColor' (character array) to store the color of the car.
 * 
 * The program prompts the user to enter these details, stores them in a
 * structure variable, and then displays the entered information in a structured format.
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 20-03-2025 11:57 am
 */
 
 #include <stdio.h> // standard input output library

// structure Definition for car
 struct Car
 {
 	char carModel[50]; // stores car model name (string of 50 characters)
 	int carYear; // stores manufacturing year (intger)
 	float carPrice; // stores car price (floating-point number)
 	char carColor[20]; // stores car color (string of max 20 characters)

 }; 

 int main()
 {
 	 //Declare a structure variable to store car details 
 	 struct Car myCar; 

 	 // prompt user to enter car model 
 	 printf("Enter carModel\n"); 
 	 scanf("%s",&myCar.carModel); // Read the model and store it in myCar.carModel 

 	 // prompt user to enter car manufacturing year 
 	 printf("Enter carYear\n"); 
 	 scanf("%d",&myCar.carYear); // Read the year and store it in myCar.carYear)

 	 // prompt uer to enter car price
 	 printf("Enter carPrice\n"); 
 	 scanf("%f",&myCar.carPrice); // Read the price and store it in myCar.carPrice

 	 // prompt user to enter carColor
     printf("Enter car Color:\n"); 
     scanf("%s",&myCar.carColor);


     // Display car details
     printf("\n--- Car Details ---\n"); 
     printf("Model: %s\n",myCar.carModel); // print car model
     printf("Year: %d\n",myCar.carYear);   // print car year
     printf("Price: %.2f\n",myCar.carPrice); // print car price
     printf("Color: %s\n",myCar.carColor);  // print car carColor


     // return 0 to indicate successful excecution 

     return (0); 

 }

