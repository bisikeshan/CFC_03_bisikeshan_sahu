

// Headers & namespaces
#include <iostream>
#include "restaurant.hpp"

// global variable definition
Restaurant myRestaurant("mamakadhabhaRestaurant","BisikeshanSahu",50,500000.00);


// Entry point function 

int main(void)
{   
	//code

	std::cout << myRestaurant.GetRestaurantName() << std::endl;
	std::cout << myRestaurant.GetRestaurantOwnerName() << std::endl;
	std::cout << myRestaurant.GetRestaurantOwnerAge() << std::endl;
	std::cout << myRestaurant.GetRestaurantOwnerIncome() << std::endl; 
    myRestaurant.IncrementRestaurantOwnerIncome();
    std::cout << myRestaurant.GetRestaurantOwnerIncome() << std::endl;
    myRestaurant.DecrementRestaurantOwnerIncome();
    std::cout << myRestaurant.GetRestaurantOwnerIncome() << std::endl;


	return(0);
}