/* S.G.M.P 
 * @file: inventory.hpp
 * @brief: Header file for inventory class to manage multiple product
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 23-04-2025 9:41pm 
 */

#pragma once

// Headers & namespaces
#include "product.hpp"

class Inventory
{
// public members
public: 
	// constructor to initialise inventory with no products
	Inventory(): m_iProductCount(0)
	{
		// code
	}

	// function to add a product to the inventory
	void AddProduct(const Product& in_product)
	{
		// code 
		// check if there is space for more products

		if(this->m_iProductCount < MAX_PRODUCTS)
		{
			this->m_products[this->m_iProductCount] = in_product; 
			this->m_iProductCount++; // Increment product count
		}
		else
		{
			std::cout << "Inventory is full!" << std::endl; // inventory is full 
		}
	}

	// function to display all products in the inventory
	void DisplayProducts()
	{
		// code
		// loop through all products
		for(int le = 0; le < this->m_iProductCount; le++)
		{
			this->m_products[le].DisplayProductDetails(); 
		}
	}

	// function to update the stock of a product by name
	void UpdateProductStock(std::string in_name, int in_stockchange)
	{
		// code
		// loop through all products
		for(int le = 0; le < this->m_iProductCount; le++)
		{
			if(this->m_products[le].getProductName() == in_name)
			{
				this->m_products[le].UpdateStock(in_stockchange);  // update stock 
				return; 
			}
		}

		std::cout << "product not found in inventory!" << std::endl; // product not found 
	}
// private members
private:
	static const int MAX_PRODUCTS = 50; // maximum numbers of products in the inventory
	Product m_products[MAX_PRODUCTS]; // array of product objects
	int m_iProductCount; // numbers of products in the inventory
};