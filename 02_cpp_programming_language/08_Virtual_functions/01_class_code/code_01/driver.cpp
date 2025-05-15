/* S.G.M.P 
 * @file: driver.cpp
 * @brief: 
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 */

// include headers and namespaces
#include <iostream>

#include "alpha.hpp"
#include "beta.hpp"

// Global object Definition

int main(void)
{
	// code

	Alpha alpha; 
    Beta beta; 

    std::cout << std::endl << std::endl; 
    alpha.DoSomethingImportant(10,20,1234343434l,23.4f); 

    std::cout << std::endl << std::endl; 
    beta.DoSomethingImportant(44,55,787l,9.8756f); 

    std::cout << std::endl << std::endl;
    // Alpha(class) beta(BETA object)

    // 
    ((Alpha)beta).DoSomethingImportant(44,50,787l,10.0f ); 
     
    // isme alpha ke samne tabhi * lagana hai jab beta ka address liya hua ho 
    // ((Alpha*)&beta).DoSomethingImportant(44,50,787l,10.0f ); 



    return(0); 

}
