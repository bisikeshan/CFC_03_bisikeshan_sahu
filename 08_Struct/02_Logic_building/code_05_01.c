/* S.G.M.P 
 * @file: hotel_management.c
 * @brief: This program stores and displays hotel room details using structures.
 * @descriptions: 
 * This program defines a 'struct HotelRoom' to store details of a hotel room.
 * The structure contains four members: 
 * - 'roomNumber' (intger) to store the room number.
 * - 'roomType' (character array) to store the type of room.
 * - 'roomPrice' (float) to store the price per night.
 * - 'roomStatus' (character) to indicate wheter the room is occupied ('Y' or 'N')
 *
 * The program prompts the user to enter these details, stores them in a
 * strucutre variable, and then displays the entered  information ina structured format
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 20-03-2025 4:36 PM 
 */ 

 #include <stdio.h> // standard input output path 

 // structure Definition for hotel Room 
 struct HotelRoom 
 {
 	 int roomNumber; // stores the room number (integer)
 	 char roomType[30]; // stores the type of room (e.g , Deluxe, suite , Standard)
 	 float roomPrice; // stores the price per night (floating point number)
 	 char roomStatus; // stores the occupancy status ('Y' for occupied , 'N' for vacant)
 } ; 

 int main()
 {
 	// Declare a structure variable to store hotel room details 
 	struct HotelRoom myRoom; 

 	// prompt user to enter room number
 	printf("Enter Room number: \n"); 
 	scanf("%d",&myRoom.roomNumber); // Read and store room number

 	// prompt user to enter room type
 	printf("Enter Room type: \n"); 
 	scanf("%s",myRoom.roomType); // Read and store room type 

 	// prompt user to enter room price per night 
 	printf("Enter room price per night:\n"); 
 	scanf("%f",&myRoom.roomPrice); // Read and stores room price 

 	// prompt user to enter room status
 	printf("Is the room Occupied ? (y/n):\n"); 
 	scanf(" %c",&myRoom.roomStatus); // Read and store room occupancy status

 	// Display room details
 	printf("\n --- Hotel Room Details ---\n");
 	printf(" Room Number: %d\n",myRoom.roomNumber); // print room number
 	printf(" Room Type: %s\n",myRoom.roomType); // print price per night 
 	printf("price/night: %.2f\n",myRoom.roomPrice); // print price per 
 	printf("occupied: %c\n",myRoom.roomStatus); // print occupancy status
  
    // Return 0 to indicate successful excecution 
 	return (0); 
 }