

// Headers & namepaces
#include <iostream>
#include "demo.hpp"

// globle variable definition
Demo obj1(26,97);
Demo obj2(200,100);

// Entry point function 
int main(void)
{
	// code
	std::cout << "value1 of obj1 =  " << obj1.GetValue01() << std::endl;
	std::cout << "value2 of obj1 =  " << obj1.GetValue02() << std::endl;

	std::cout << std::endl;

	std::cout << "value1 of obj2 = " << obj2.GetValue01() << std::endl; 
	std::cout << "value2 of obj2 = " << obj2.GetValue02() << std::endl;

	std::cout << std::endl;

	std::cout << "Addition(obj1) = " << obj1.AdditionOperation() << std::endl;
	std::cout << "subtraction(obj1) = " << obj1.SubtractionOperation() << std::endl;
	std::cout << "Multiplicatin(obj1) = " << obj1.MultiplicationOperation() << std::endl;
	std::cout << "Division Quotient(obj1) = " << obj1.DivisionQuotientOperation() << std::endl;
	std::cout << "Divsiion Remainder(obj1) = " << obj1.DivisionRemainderOperation() << std::endl;

	std::cout << std::endl;

	std::cout << "Addition(obj2) = "  << obj2.AdditionOperation() << std::endl;
	std::cout << "subtraction(obj2) = " << obj2.SubtractionOperation() << std::endl;
	std::cout << "Multiplicatin(obj2) = " << obj2.MultiplicationOperation() << std::endl;
	std::cout << "Division Quotient(obj2) = " << obj2.DivisionQuotientOperation() << std::endl;
	std::cout << "Division Remainder(obj2 = " << obj2.DivisionRemainderOperation() << std::endl;


   return (0);

}