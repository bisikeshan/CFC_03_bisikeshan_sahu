/* S.G.M.P 
 * @file: product.hpp
 * @brief: Header file for product class to manage product details
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 23-04-2025 9:23pm 
 */

#pragma once

// Headers & namespaces
#include <iostream>
#include <string>

class Product
{
// public members
public: 
	// default constructor
	Product(): m_sName(""),m_dPrice(0.0),m_iStock(0)
	{
		// code
	}

	// parameterised constructor
    Product(std::string in_sName,double in_dPrice,int in_iStock): m_sName(in_sName),m_dPrice(in_dPrice),m_iStock(in_iStock)
    {
    	// code
    }

    // Function to display proeduct details
    void DisplayProductDetails()
    {
    	// code
    	std::cout << "Product Name" << this->m_sName << std::endl; 
    	std::cout << "price" << this->m_dPrice << std::endl; 
    	std::cout << "Stock:" << this->m_iStock << std::endl; 

    }

    // function to update the stock of the product
    void UpdateStock(int in_iStockChange)
    {
    	// code
    	this->m_iStock += in_iStockChange; 
    	if(this->m_iStock < 0 )// check if stock is negative
    	{
    		this->m_iStock = 0; 
    	}
    }

    // function to update product price
    void UpdatePrice(double in_dNewPrice)
    {
    	// code
    	this->m_dPrice = in_dNewPrice; 
    }

    // Accessor
    std::string getProductName()
    {
        return(this->m_sName); 
    }
// private members
private:
	std::string m_sName; // product name
	double m_dPrice; // product price
	int m_iStock; // product stock count

}; 