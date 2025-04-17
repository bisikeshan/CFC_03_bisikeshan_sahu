/* S.G.M.P 
 * @file: code_01.c
 * @brief: Industrial Implementation and use of Struct
 * @author: bisikeshan sahu(bisikeshan567@gmail.com)
 * @date: 12-03-2025 5:09 PM
 */

// Headers
#include <stdio.h>

// struct type definition 
struct Vegetable
{
	int vegName; 
	short vegAvailable; 
	float vegPrice; 

}; 

// struct object definition 
struct Vegetable vegetable_list[5]; 

// functions declarations

void ShowAllVegetableData();
void InitializeVegetableElements(); 
void ShowVegetableName(int vegetableNumber); 
void UserSelection();  

int main(void)
{
	// code
	InitializeVegetableElements(); 
	ShowAllVegetableData(); 
	UserSelection();
	 
	return (0);
}

void ShowAllVegetableData()
{
   // code
	for(int le = 0; le < 5; le++)
	{
      printf("vegetable No = %d\n",le + 1);

      if( 1 == vegetable_list[le].vegAvailable)
      {
      	 ShowVegetableName(vegetable_list[le].vegName); 
      	 printf("Vegetable Available = %hd\n",vegetable_list[le].vegAvailable); 
      	 printf("Vegetable Price = %f\n",vegetable_list[le].vegPrice); 
      	 printf("\n"); 
      }  
      else
      {
      	 printf("vegetable Not Availabe\n\n"); 
      }
    }
}

void InitializeVegetableElements()
{
	// code
	// peace meal initialization 
	vegetable_list[0].vegName = 1; 
	vegetable_list[0].vegAvailable = 1;
	vegetable_list[0].vegPrice = 25.5f; 

	vegetable_list[1].vegName = 3; 
	vegetable_list[1].vegAvailable = 0; 
	vegetable_list[1].vegPrice = 11.05f; 

	vegetable_list[2].vegName = 4; 
	vegetable_list[2].vegAvailable = 1; 
	vegetable_list[2].vegPrice = 15.64f; 

	vegetable_list[3].vegName = 0; 
	vegetable_list[3].vegAvailable = 0; 
	vegetable_list[3].vegPrice = 21.4f; 

	vegetable_list[4].vegName = 5; 
	vegetable_list[4].vegAvailable = 1; 
	vegetable_list[4].vegPrice = 100.2f; 

}

void ShowVegetableName(int vegetableNumber)
{
	// code
	switch(vegetableNumber)
	{
		 case 0: 
		 	printf("Vegetable Name = Tomato\n"); 
		 	break; 

		 case 1: 
		 	printf("Vegetable Name = potato\n"); 
		 	break; 

		 case 2: 
		 	printf("Vegetable Name = Bhindi\n"); 
            break; 

         case 3: 
         	printf("Vegetable Name = Vange\n "); 
         	break;

         case 4: 
         	printf("Vegetable Name = palak\n"); 
         	break; 

         case 5: 
         	printf("Vegetable Name = Methi\n"); 
         	break; 

         default: 
         	printf("Ashi Bhajich nahi aahe\n"); 
         	break; 
	}
}

void UserSelection()
{
	 // variable definition 
	 int userchoice; 

	 // code
	 printf("Enter your choice = "); 
	 scanf("%d",&userchoice); 
    
    // error checking 
	 if(userchoice < 1)
	 {
	 	 printf("Jiv De\n"); 
	 }
	 else if(userchoice > 5)
	 {
	 	printf("2 vela Jiv De \n"); 
	 }
	 else
	 {
	 	 int VegetableIndex = userchoice - 1; 

	 	 if( 1 == vegetable_list[VegetableIndex].vegAvailable)
	 	 {
	 	 	 printf("vegetable Available to buy \n"); 
	 	 	 ShowVegetableName(vegetable_list[VegetableIndex].vegName);

	 	 }
	 	 else
	 	 {
	 	 	printf("vegetable not available to buy\n"); 
	 	 }
	 }
}