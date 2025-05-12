/* S.G.M.P 
 * @file:driver.cpp
 * @brief: 
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 23-04-2025 10:06pm 
 */

// Headers and namespaces
#include "inventory.hpp"

// Entry point function 
int main()
{
	// create product objects
	Product objProduct1("Laptop",1500.00,10); 
	Product objProduct2("phone",800.00,20); 

	// create inventory object
	Inventory objInventory; 

	// Add products to the inventory
	objInventory.AddProduct(objProduct1); 
	objInventory.AddProduct(objProduct2);


	// Display all products in the invnentory
	objInventory.DisplayProducts(); 

	// update product stock and display updated details
	objInventory.UpdateProductStock("Laptop",5); 
	objInventory.DisplayProducts(); 

	// update product price and display details
	objProduct2.UpdatePrice(850.00); 
	objInventory.DisplayProducts(); 

	return (0); // End of the program 
}