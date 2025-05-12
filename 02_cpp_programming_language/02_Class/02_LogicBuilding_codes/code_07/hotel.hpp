/* S.G.M.P 
 * @file: hotel.hpp
 * @brief: Header file for Hotel class to manage multiple rooms.
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 25-04-2025 5:00pm 
 */


#pragma once

// Entry point function 
#include "room.hpp"

class Hotel 
{
// public members
public:
	// Constructor to initialize hotel with no rooms
	Hotel(): m_iRoomCount(0)
	{
		// code
	}

	// function to add a room to the hotel 
	void AddRoom(const Room& in_room)
	{
		// code
		if(this->m_iRoomCount < MAX_ROOMS) // Check if there is space for more rooms
		{
			this->m_rooms[this->m_iRoomCount] = in_room; 
			this->m_iRoomCount++; // Increment romm count
		}
		else
		{
			std::cout << "Hotel is full!" << std::endl; // Hotel is full
		}
	}

	// function to display all rooms in the hotel 
	void DisplayRooms()
	{
		// code
		for(int le = 0; le < this->m_iRoomCount; le++) // loop through all rooms
		{
			this->m_rooms[le].DisplayRoomDetails(); 
		}
	}

	// function to book a room by room number
	bool BookRoomByNumber(int in_roomNumber)
	{
		// code
		for(int le = 0; le < this->m_iRoomCount; le++) // loop through all rooms
		{
			if(this->m_rooms[le].getRoomNumber() == in_roomNumber) // find the room by number
			{
				return this->m_rooms[le].BookRoom(); // Book the room 
			}
		}
		std::cout << "Room not found in hotel!" << std::endl; // Room not found
		return false; 
	}
// private members
private: 
	static const int MAX_ROOMS = 30; // maximum number of rooms in the hotel 
	Room m_rooms[MAX_ROOMS]; // array of room objects
	int m_iRoomCount; // Number of rooms in the hotel 
};

