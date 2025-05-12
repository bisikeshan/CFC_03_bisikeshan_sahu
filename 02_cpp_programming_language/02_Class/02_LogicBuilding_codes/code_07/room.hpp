/* S.G.M.P 
 * @file: room.hpp
 * @brief: Header file for room class to manage room details
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 25-04-2025 1:08pm 
 */


#pragma once

// Entry point function 
#include <iostream>
#include <string>

class Room
{
// public members
public:
	// default constructor 
	Room():m_iRoomNumber(0),m_sRoomType(""),m_bIsAvailable(0)
	{
		// code
	} 

	Room(int in_roomNumber, std::string in_roomType, bool in_isAvailable)
		: m_iRoomNumber(in_roomNumber),m_sRoomType(in_roomType),m_bIsAvailable(in_isAvailable)
		{
			// code
		}

	// function to display room details
		void DisplayRoomDetails()
		{
			// code
			std::cout << "Room number" << this->m_iRoomNumber << std::endl; 
			std::cout << "Room Type" << this->m_sRoomType << std::endl; 
			std::cout << "Availability" << (this->m_bIsAvailable ? "Available" : "Not Available" )<< std::endl; 
		}

	// function to book the room (mark it as unavailable)
	bool BookRoom()
	{
		// code
		if(this->m_bIsAvailable) // check if room is available
		{
			this->m_bIsAvailable = false; 
			std::cout << "Room booked successfully!" << std::endl; 
			return true; 
		}
		else
		{
			std::cout << "Room is already booked." << std::endl; 
			return false; 
		}
	}

	// function to cancel the room booking (mark it as available)
	void CancelBooking()
	{
		// code
		this->m_bIsAvailable = true; 
		std::cout << "Room booking cancelled." << std::endl; 
	}

	// Accessor
	int getRoomNumber()
	{
       return(this->m_iRoomNumber); 
	}
	
// private members
private: 
	int m_iRoomNumber; // room number
	std::string m_sRoomType; // room type (e.g, Single, Double)
	bool m_bIsAvailable; 
};