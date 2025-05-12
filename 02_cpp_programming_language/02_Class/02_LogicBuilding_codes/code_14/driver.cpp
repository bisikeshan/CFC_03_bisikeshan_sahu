/*S.G.M.P 
 * @file: driver.cpp
 * @brief: Driver program for gym membership management sytem. Demonstrates real-world membership activation, deactivation, and list display. Uses class encapsulation, loops, branching logic, and no vector. Style-aligned header comments and in-function explanations maintained for clear understanging and maintainability
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 09-05-2025 11:32am 
 */

// Headers
#include "gym.hpp"
#include <iostream>

int main()
{
	// Create Gym object
	Gym objGym; 

	// Add members
	objGym.AddMember(Member("Alice",28)); 
	objGym.AddMember(Member("Bob",35)); 
	objGym.AddMember(Member("Charlie",24));

	// Display current member list
	std::cout << "\nCurrent Gym Members:\n"; 
	objGym.DisplayMembers();

	// Activate  a member subscription
	objGym.ActivateMember(1); 

	// Display list after activation 

	std::cout << "\nMembers after Activation:\n";
	objGym.DisplayMembers(); 

	// Deactivate the same member subscription
	objGym.DeactivateMember(1); 

	// Display list after deactivation
	std::cout << "\nMember After Deactivation:\n"; 
	objGym.DisplayMembers();

	return (0);
}