/* S.G.M.P 
 * @file: code_02.c
 * @brief: Implementation and printing size of all types
 * @author: bisikeshan567@gmail.com (bisikeshan567@gmail.com)
 * @date: 12-03-2025 2:10 PM 
 */

// Header
#include <stdio.h>

// struct type definition 
struct Data
{
	int age; // 4
	char gender; // 1 + 3
	float salary; //4
	char name[5]; // 5 + 3
}; 

struct Data2
{
	char cnum; //1
	short snum; // 2 + 1
	int inum; // 4
	double dnum; // 4 + 4

}; 

struct Demo
{
	char cnum;  // 1
	short snum; // 2 + 1
	int  inum;  // 4 
	double dnum; // 4 + 4
}; 


// Entry point function 
int main()
{
	// code
	printf("size of char = \t\t %zd \n",sizeof(char)); 
	printf("size of short = \t %zd \n",sizeof(short)); 
	printf("size of int = \t\t %zd \n",sizeof(int)); 
	printf("size of float = \t %zd \n",sizeof(float)); 
	printf("size of long = \t\t %zd \n",sizeof(long)); 
	printf("size of double = \t %zd \n",sizeof(double)); 
	printf("size of long long = \t %zd \n",sizeof(long long)); 

	printf("size of struct data 2 =  %zd \n",sizeof(struct Data2)); // 20 
	printf("size of struct demo = \t %zd \n",sizeof(struct Demo)); // 14 

	return (0);

}