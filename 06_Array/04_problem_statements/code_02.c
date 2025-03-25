/* S.G.M.P 
 * @file: code_02.c
 * @brief: Student Marks Management System
 * Problem Statement:
 * A school wants to maintain student scores for a particular subject. Write a program that:
 * Stores the marks of N students in a 1D array.
 * Computes and displays the average marks.
 * Finds and displays the highest and lowest marks.
 * Counts how many students scored above and below the average. 
 * Real-Life Application:
 * Used in school report card generation and exam analysis software
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 25-03-2025 12:06 PM 
 */ 

#include <stdio.h>


// initializer list initialization 
// assume marks out of 100
int student_marks[10] = {50,60,70,84,59,30,26,91,97,43 }; // declare an array to store 10 student marks 
int average_marks,sum; 
int highest_marks,lowest_marks,above_average,below_average; 

int main()
{
	// loop to calculate average marks
	for(int le = 0; le < 10; le++)
	{
		 sum += student_marks[le];  
	}

	average_marks = sum/ 10 ; 

	printf("Average marks of student: %d \n",average_marks); 

	highest_marks = lowest_marks = student_marks[0]; 

	for(int le = 1; le < 10; le++)
	{
		if( student_marks[le] > highest_marks)
		{
			highest_marks = student_marks[le];

		}

        if( student_marks[le] < lowest_marks)
		{
			lowest_marks = student_marks[le]; 
		}
	}

	printf("Highest marks : %d\n",highest_marks); 
	printf("lowest marks: %d\n",lowest_marks); 
   
    // loop to calculate above and below marks
   
    for(int le = 0; le < 10; le++)
    {
    	if( student_marks[le] >= average_marks)
    	{
    		above_average++; 
    	}
    	if( student_marks[le] <= average_marks)
    	{
    		below_average++; 
    	}
    }


    printf("student scored above average marks: %d\n",above_average); 
    printf("student scored below average marks: %d\n",below_average); 

    
    return (0); 

}

