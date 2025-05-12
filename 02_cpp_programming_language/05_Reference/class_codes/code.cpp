/* S.G.M.P 
 * @file: code.cpp
 * @brief: Implementation and Demonstration of reference in cpp
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 30-04-2025 4:16pm
 */

// Headers and namespaces
#include <iostream>

// Global function declarations

// void swap(int num1,int num2)
// {
// 	// code
// 	std::cout << "SWAP function using *PASS BY VAlUE*" << std::endl; 
// 	std::cout << "Inside swap function " << std::endl; 
// 	std::cout << "Before swappoing... " << std::endl; 
// 	std::cout << "num1 = " << num1 << std::endl; 
// 	std::cout << "num2 = " << num2 << std::endl; 
// 	std::cout << std::endl; 

// 	// logic for swapping num1 and num2
// 	int temp = num1; 
// 	num1 = num2; 
// 	num2 = temp; 

//     std::cout << "After Swapping" << std::endl; 
//     std::cout << "num1 = " << num1 = << std::endl; 
//     std::cout << "num2 = " << num2 = << std::endl; 
//     std::cout << std::endl; 

//     std::cout << "Exiting SWAP Function.." << std::endl; 
//     std::cout << std::endl; 
// }
void swap(int *iptr1, int *iptr2)
{
	// function local variable definition
	int temp = 0; 

	std::cout << "Inside Swap() Type 02" << std::endl; 
	std::cout << std::endl; 

	std::cout << "Before Swapping..." << std::endl; 
	std::cout << "Value1 =" << *iptr1 << std::endl; 
	std::cout << "Value2 =" << *iptr2 << std::endl; 
	std::cout << std::endl; 

	// swap logic 
	temp = *iptr1; 
	*iptr1 = *iptr2; 
	*iptr2 = temp; 

	std::cout << "After Swapping... " << std::endl; 
	std::cout << "value1 = " << *iptr1 << std::endl; 
	std::cout << "value2 = " << *iptr2 << std::endl; 
	std::cout << std::endl; 

	std::cout << "Exiting Swap() Type 02..." << std::endl; 
}

// Swap function type 03
void swap(int& in_inum1,int& in_inum2)
{
	// local variable definition
	int temp = 0; 

	// code 
	std::cout << "Inside swap() type 03 " << std::endl; 
	std::cout << std::endl; 

	std::cout << "Before Swapping... " << std::endl; 
	std::cout << "value1 = " << in_inum1 << std::endl; 
	std::cout << "value2 = " << in_inum2 << std::endl; 
	std::cout << std::endl; 

	// swap logic
	temp = in_inum1; 
	in_inum1 = in_inum2; 
	in_inum2 = temp; 

	std::cout << "After swapping..." << std::endl; 
	std::cout << "value1 = " << in_inum1 << std::endl; 
	std::cout << "value2 = " << in_inum2 << std::endl; 
	std::cout << std::endl; 
}


// Entry pointf function 
int main(void)
{
	// function local variable definition
	int main_inum1; 
	int main_inum2; 

	// // code
	// std::cout << std::endl << std::endl; 
	// std::cout << "Before calling SWAP()" << std::endl; 
	// std::cout << "main_inum1 = " << main_inum1 << std::endl; 
	// std::cout << "main_inum2 = " << main_inum2 << std::endl;
    
    // use of swap type 01 
    // swap(main_inum1,main_inum2);  

	// std::cout << "After calling swap()" << std::endl; 
	// std::cout << "main_inum1 = " << main_inum1 << std::endl; 
	// std::cout << "main_inum2 = " << main_inum2 << std::endl; 
	// std::cout << std::endl; 


	// std::cout << "*________________________________________*" << std::endl; 

	// use of swap type 02
	main_inum1 = 121; 
	main_inum2 = 862; 

	std::cout << "Before calling swap() type 02..." << std::endl; 
	std::cout << "main_inum1 = " << main_inum1 << std::endl; 
	std::cout << "main_inum2 = " << main_inum2 << std::endl; 

	// call to swap() type 02
	swap(&main_inum1,&main_inum2); 

	std::cout << "After calling Swap() Type 02..." << std::endl; 
	std::cout << "main_inum1 = " << main_inum1 << std::endl; 
	std::cout << "main_inum2 = " << main_inum2 << std::endl; 
	std::cout << std::endl; 


	std::cout <<"_______________________" << std::endl;

	// use of swap type 03

	main_inum1 = 454; 
	main_inum2 = 656; 

	std::cout << "Before calling swap() type 03" << std::endl; 
	std::cout << "main_inum1 = " << main_inum1 << std::endl; 
	std::cout << "main_inum2 = " << main_inum2 << std::endl; 
	std::cout << std::endl; 

    swap(main_inum1,main_inum2); 
    
    std::cout << "After calling swap() Type 03..." << std::endl; 
    std::cout << "main_inum1 = " << main_inum1 << std::endl;
    std::cout << "main_inum2 = " << main_inum2 << std::endl; 
    std::cout << std::endl; 

    std::cout << "Exiting Main function..." << std::endl; 

    return (0); 
	
}
