/* S.G.M.P 
 * @file: driver.cpp
 * @brief: Driver for the Parking Lot and vehicle management program.
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 4:26pm 08-05-2025
 */

// Headera and namespaces
#include "parkinglot.hpp"

// Entry point function 
int main()
{
	// Create ParkingLot object
	ParkingLot objLot; 

	// Create vehicle objects
	Vehicle objV1("DL01AB1234","Car"); 
	Vehicle objV2("DL02CD5678","Bike"); 
	Vehicle objV3("DL03EF9012","Truck"); 

	// Add vehicles to the parking lot 
	objLot.AddVehicle(objV1);
	objLot.AddVehicle(objV2); 
	objLot.AddVehicle(objV3);

	// Display all parked vehicles
	std::cout << "Current Vehicles in Parking Lot:" << std::endl; 
	objLot.DisplayAllVehicles(); 

	return (0); 

}