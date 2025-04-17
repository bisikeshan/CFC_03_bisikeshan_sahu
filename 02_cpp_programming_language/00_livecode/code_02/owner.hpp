 

#pragma once


// Headers & namespace
#include <iostream>
#include <string>


class Owner
{   
 // public members
 public:

 // default constructor
 Owner(): m_sOwnerName(""),m_dOwnerIncome(0.0),m_iOwnerAge(0) 
 {
 	// code
 } 

 // parameterized constructor
 Owner(std::string in_sOwnerName,int in_iOwnerAge,double in_dOwnerIncome):
  m_sOwnerName(in_sOwnerName),m_dOwnerIncome(in_dOwnerIncome),m_iOwnerAge(in_iOwnerAge)
 {
 	// code

 }

 // getter functions
 std::string GetOwnerName()
 {  
    //code
 	return(this->m_sOwnerName);
 }

 int GetOwnerAge()
 {
 	// code
 	return(this->m_iOwnerAge);
 }

 double GetOwnerIncome()
 {
 	// code
 	return(this->m_dOwnerIncome);
 }

 // setter functions
 void SetOwnerName(std::string in_sOwnerName)
 {
    // code
    this->m_sOwnerName = in_sOwnerName;
 }

  void SetOwnerIncome(double in_dOwnerIncome)
  {
    //code
    this->m_dOwnerIncome = in_dOwnerIncome;
  }

  void SetOwnerAge(int in_iOwnerAge)
  {
     //code
    this->m_iOwnerAge = in_iOwnerAge;
  }

 double IncrementOwnerIncome()
 {
 	// code
    m_dOwnerIncome += 1000;
    return(this->m_dOwnerIncome);
 }

 double DecrementOwnerIncome()
 {
 	// code
 	m_dOwnerIncome -= 5000;
 	return(this->m_dOwnerIncome);
 }




 // private members
 private:
 	std::string m_sOwnerName;
 	int m_iOwnerAge;
 	double m_dOwnerIncome;



};