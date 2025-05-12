/* S.G.M.P 
 * @file: driver.cpp
 * @brief: Driver file to test the Room and Hotel classes.
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 25-04-2025 5:28pm 
 */

// Headers file
#include "Hotel.hpp"

// Entry point function 
int main()
{
	// Create Room objects
	Room objRoom1(101,"Single",true); 
	Room objRoom2(102,"Double",true); 

	// Create Hotel object
	Hotel objHotel; 

	// Add rooms to the hotel 
	objHotel.AddRoom(objRoom1); 
	objHotel.AddRoom(objRoom2); 

	// Display all rooms in the hotel 
	objHotel.DisplayRooms(); 

	// Book a room and Display update details
	objHotel.BookRoomByNumber(101); 
	objHotel.DisplayRooms(); 

	// Cancel a room booking and display update details
	objRoom1.CancelBooking(); 
	objHotel.DisplayRooms(); 

    return (0); // End of the program 
}