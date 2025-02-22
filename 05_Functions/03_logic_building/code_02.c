// program to calculate the cube of a number

// Headers

#include <stdio.h>

 int cube_number(int number)
 {
 	return number * number * number;
 }

// Entry point function 
 int main()
 {
 	  int number = 4; 
 	  printf("cube: %d\n",cube_number(number));
 	  return 0; 

 }