/* S.G.M.P 
 * @file: code_30_02.c
 * @brief: calculate total and average marks for multiple students
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 17-03-2025 9:49 pm
 */

// Headers
#include <stdio.h>

// Entry point functions
int main()
{
	 int students,subjects,ole,ile; // variables for iteration 
	 float marks[100] [10],total,average; // 2D array for marks

	 // prompt user for number of students and subjects
	 printf("Enter number of students:"); 
	 scanf("%d",&students); 

     printf("Enter number of subjects:"); 
     scanf("%d",&subjects); 

     // loop to take marks input

     for(ole = 0; ole < students; ole++)
     {
     	 printf("Enter marks for students %d: \n",ole + 1); 

     	 for(ile = 0; ile < subjects; ile++)
     	 {
     	 	scanf("%f",&marks[ole] [ile]); 
     	 }
     }

     // Display total and average marks for each student

     printf("\n student-wise Total and Average marks: \n"); 

     for(ole = 0; ole < students; ole++)
     {
     	 total = 0; 
     	 for(ile = 0; ile < subjects; ile++)
     	 {
     	 	 total += marks[ole] [ile]; 
     	 }
     	  average = total / subjects; 

         printf("students %d - Total: %.2f, Average: %.2f\n",ole+1,total,average); 
     }

    // return 0 to indicate successful excecution 

     return 0; 
}