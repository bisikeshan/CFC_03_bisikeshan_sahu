/* S.G.M.P 
 * @file: code_30_01.c
 * @brief: Calculate total and average marks for multiple students
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 17-03-2025 3:13 PM 
 */

// Headers
#include <stdio.h>

// Entry point function 
int main()
{
	 int students,subjects,ole,ile; // variables for interation 
	 float marks[100][10],total,average; // 2D array for marks

	 //prompt user for number of students and subjects
	 printf("Enter number of students: \n"); 
	 scanf("%d",&students); 

	 printf("Enter number of subjects:\n"); 
	 scanf("%d",&subjects); 

	 // loop to take marks input

	 for(ole = 0; ole < students; ole++)
	 {
	 	 printf("Enter marks for students %d:\n",ole+1); 

	 	 for(ile = 0; ile < subjects; ile++)
	 	 {
	 	 	 scanf("%f",&marks[ole][ile]); 
	 	 }
	 }

	 // Display total and average marks for each students 

	 printf("\n student-wise Total and Average Marks: \n"); 

	 for(ole = 0; ole < students; ole++)
	 {
	 	 total = 0; 
	 	 for(ile = 0; ile < subjects; ile++)
	 	 {
	 	 	 total += marks[ole][ile]; 
	 	 }

	 	 average = total / subjects; 
	 	 printf("students %d - Total: %.2f , Average : %.2f\n",ole + 1,total,average); 

	 }

	 // Return 0 to indicate successful excecution 

	 return (0);

}