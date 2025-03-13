/* S.G.M.P
 * @file: code_01.c
 * @brief: implementatio of basic struct in c
 * @author: bisikeshan567@gmail.com (bisikeshan567@gmail.com)
 * @date: 12-03-2025 1:35 PM 
 */

// Headers
#include <stdio.h>

// struct type definition
struct Data
{
	int inum; 
	float fnum; 
	char ch; 
	double dnum; 
	long long lnum; 
	short snum; 
}; 

// struct object definition 
struct Data demo; 


// Entry point function 
int main()
{
	// value to write members
	demo.inum = 10; 
	demo.fnum = 3.134f; 
	demo.ch = 'M';
	demo.dnum = 3.123442345; 
	demo.lnum = 127893461234l; 
	demo.snum = 56; 

	// value to read from struct data object
	printf("demo.inum = %d\n",demo.inum);
	printf("demo.fnum = %.3f\n",demo.fnum); 
	printf("demo.ch = %d\n",demo.ch); 
	printf("demo.ch = %hhd\n",demo.ch); 
	printf("demo.dnum = %0.21lf\n",demo.dnum); 
	printf("demo.lnum = %lld\n",demo.lnum); 
	printf("demo.snum = %hd\n",demo.snum); 

	return (0);
}