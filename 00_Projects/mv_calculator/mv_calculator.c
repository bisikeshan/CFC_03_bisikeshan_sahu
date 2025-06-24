/*/* S.G.M.P && M.V
 * @FILE:  mv_calculator.c
 * @BREIF: IMPLEMENTATION OF CALCULATOR USING BASIC KNOWLEDEGE OF C PROGRAMMING
           FUNCTIONS, OPERATORS, ARRAY, LOOPING, DATA TYPES ETC
 * @AUTHOR: bisikeshan sahu (bisikeshan567@gmail.com)
 * @DATE: 19 JUNE 2025 8:35AM 
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "mv_calculator.h"

// CHOICE
void mv_choice()
{  
    int bool = 0; 
    while(1){ 

    switch(mv_menuChoice())
    {
        case 1: 
            mv_normalcalculator();
            break; 
        case 2:
            mv_scientificcalculator();
            break; 
        case 3:
            mv_programmercalculator();
            break; 
        case 0:
            bool = 1; 
            break; 
        default:
            printf("Enter Right Value\n"); 
    }

     if(bool == 1)
     {
        break; 
     } 
  }

}


// MENU CHOICE
int mv_menuChoice()
{   
    int inum; 
    printf("\n");  
    printf("------->> mv_calculator <<------\n");
    printf("Enter 1 for Normal Calcualtor.\n");
    printf("Enter 2 for Scientific Calculator.\n");
    printf("Enter 3 for Programmer Calculator.\n");
    printf("Enter 0 for exit\n");
    scanf("%d",&inum);
    return inum; 
}

// OPTIONS FOR NORMAL CALCULATOR
int mv_ncOptions()
{
    printf("\n"); 
    printf("------>> Normal Calculator <<-------\n");
    printf("***********************************\n"); 
    printf(" Enter 1  for addition.\n");
    printf(" Enter 2  for Subtraction.\n");
    printf(" Enter 3  for multiplication.\n");
    printf(" Enter 4  for Quotient.\n");
    printf(" Enter 5  for Remainder.\n");
    printf(" Enter 6  for square.\n");
    printf(" Enter 7  for cube.\n");
    printf(" Enter 8  for fourthpower.\n");
    printf(" Enter 9  for fifthpower.\n");
    printf(" Enter 10 for percentage.\n");
    printf(" Enter 0 for pervious.\n");
    printf("***********************************\n");

    int inum; 
    printf("Enter one value here:\n");
    scanf("%d",&inum);
    return inum; 

}


// NORMAL CALCULATOR OPERATIIONS

void mv_normalcalculator()
{
    int bool = 0; 
    while(1){

     switch(mv_ncOptions())
    {
    case 1:
      mv_addition();
      break; 

    case 2:
      mv_subtraction();
      break;

    case 3:
      mv_multiplication();
      break;  

    case 4:
      mv_division();
      break; 

    case 5:
      mv_divisionremainder();
      break; 

    case 6:
      mv_square();
      break; 

    case 7:
      mv_cube();
      break; 

    case 8:
     mv_fourthpower();
     break; 

    case 9:
     mv_fifthpower();
     break; 

    case 10:
     mv_percentage();
     break;

    case 0:
        bool = 1; 
        break; 

    default: 
        printf("please Enter Correct Value:\n");
    }

    if(bool == 1)
    {
        break; 
    }

    printf("\n\n"); 
}

}

// ADDITION
void  mv_addition()
{
    // local variable
    double dnum1; 
    double dnum2;
    double dresult; 

    printf("ADDITION:\n");
    printf("Enter first number:\n");
    scanf("%lf",&dnum1);
    printf("First number = %.2lf\n",dnum1);
    printf("\n"); 

    printf("Enter second number:\n");
    scanf("%lf",&dnum2);
    printf("Second number: %.2lf\n",dnum2);
    printf("\n"); 
    dresult = dnum1 + dnum2; 
    printf("Result = %.2lf\n",dresult);

}

// SUBTRACTION
void mv_subtraction()
{
    // local variable
    double dnum1; 
    double dnum2;
    double dresult; 

    printf("SUBTRACTION:\n");
    printf("Enter first number:\n");
    scanf("%lf",&dnum1);
    printf("First number = %.2lf\n",dnum1);
    printf("\n"); 
    printf("Enter second number:\n");
    scanf("%lf",&dnum2);
    printf("Second number: %.2lf\n",dnum2);
    printf("\n"); 
    dresult = dnum1 - dnum2; 
    printf("Result = %.2lf\n",dresult);

}

// MULTIPLICATION
void mv_multiplication()
{
    // local variable
    double dnum1; 
    double dnum2;
    double dresult; 

    printf("SUBTRACTION:\n");
    printf("Enter first number:\n");
    scanf("%lf",&dnum1);
    printf("First number = %.2lf\n",dnum1);
    printf("\n");
    printf("Enter second number:\n");
    scanf("%lf",&dnum2);
    printf("Second number: %.2lf\n",dnum2);
    printf("\n");
    dresult = dnum1 * dnum2; 
    printf("Result = %.2lf\n",dresult);

}

// DIVISION
void mv_division()
{
    // local variable
    double dnum1; 
    double dnum2;
    double dresult; 

    printf("DIVISION QUOTIENT:\n");
    printf("Enter first number:\n");
    scanf("%lf",&dnum1);
    printf("First number = %.2lf\n",dnum1);
    printf("\n"); 

    printf("Enter second number:\n");
    scanf("%lf",&dnum2);
    printf("Second number: %.2lf\n",dnum2);
    printf("\n");
    if(0 == dnum2){
        printf("Error! division by zero is not possible\n");
    }
    else{
    dresult = dnum1 / dnum2;
    printf("Result = %.2lf\n",dresult);
    }

    
}


// DIVISION REMAINDER
void mv_divisionremainder()
{
    // local variable
    int inum1; 
    int inum2;
    int iresult; 

    printf("DIVISION REMAINDER \n");
    printf("Enter first number:\n");
    scanf("%d",&inum1);
    printf("First number = %d\n",inum1);
    printf("\n");
    printf("Enter second number:\n");
    scanf("%d",&inum2);
    printf("Second number: %d\n",inum2);
    printf("\n");
    iresult = inum1 % inum2; 
    printf("Result = %d\n",iresult);

}

// SQUARE
void mv_square()
{
    // local variable 
    double dnum; 
    double dresult; 

    printf("SQUARE:\n");
    printf("Enter number:\n");
    scanf("%lf",&dnum);

    printf("number = %.2lf\n",dnum);
    printf("\n");
    dresult = dnum * dnum ; 
    printf(" %.2lf * %.2lf = %.2lf\n",dnum,dnum,dresult);

}

// CUBE
void mv_cube()
{
    // local variable
    double dnum; 
    double dresult; 

    printf("CUBE:\n");
    printf("Enter first number:\n");
    scanf("%lf",&dnum);
    printf("First number = %.2lf\n",dnum);
    printf("\n");
    dresult = dnum * dnum * dnum; 
    printf("%.2lf * %.2lf * %.2lf = %.2lf\n",dnum,dnum,dnum,dresult);

}

// FOURTH POWER

void mv_fourthpower()
{
    // local variable
    double dnum; 
    double dresult; 

    printf("FOURTH POWER:\n");
    printf("Enter number:\n");
    scanf("%lf",&dnum);
    printf("number = %.2lf\n",dnum);
    printf("\n");
    dresult = dnum * dnum * dnum * dnum; 
    printf("%.2lf * %.2lf * %.2lf * %.2lf  = %.2lf\n",dnum,dnum,dnum,dnum,dresult);

}

// FIFTH POWER
void mv_fifthpower()
{
    // local variable
    double dnum; 
    double dresult; 

    printf("FIFTH POWER:\n");
    printf("Enter number:\n");
    scanf("%lf",&dnum);
    printf(" number = %.2lf\n",dnum);
    printf("\n");
    dresult = dnum * dnum * dnum * dnum * dnum; 
    printf("%.2lf * %.2lf * %.2lf * %.2lf * %.2lf = %.2lf\n",dnum,dnum,dnum,dnum,dnum,dresult);

}

// PERCENTAGE
void mv_percentage()
{
    // local variable
    double dnum1; 
    double dnum2;
    double dresult; 

    printf("PERCENTAGE:\n");
    printf("Enter first number:\n");
    scanf("%lf",&dnum1);
    printf("First number = %.2lf\n",dnum1);
    printf("\n");
    printf("Enter second number:\n");
    scanf("%lf",&dnum2);
    printf("Second number: %.2lf\n",dnum2);
    printf("\n");
    if(0 != dnum2){
    dresult = (dnum1 / dnum2)*100; 
    printf("Result = %.2lf\n",dresult);
    }
    else
    {
      printf("second number should not be zero\n");
    }

}


// SCIENTIFIC CALCULATOR


// OPTIONS FOR SCIENTIFIC CALCULATOR
int mv_scOptions()
{   
    int inum; 
    printf("\n"); 
    printf("------->> Scientific Calculator <<----------\n");
    printf("Enter 11 for nth power\n"); 
    printf("Enter 12 for factorial\n"); 
    printf("Enter 13 for reverse number\n");
    printf("Enter 0 for previous\n");
    scanf("%d",&inum); 
    return inum; 

}


// SCIENTFIC CALCULATOR

void mv_scientificcalculator()
{   
    int bool = 0; 

    while(1){
    switch(mv_scOptions())
    {
    case 11:
        mv_nth_power();
        break;

    case 12:
        mv_factorial();
        break;
    case 13:
        mv_reversenumber();    
        break; 
    case 0: 
        bool = 1; 
        break; 
    default: 
        printf("Enter correct value\n");
    }

    if(bool == 1)
    {
        break; 
    }
}
}

// nth POWER
void mv_nth_power()
{   double base;
    double exponent;
    double dresult; 
    
    printf("Nth Power:\n");
    printf("Enter Base:\n");
    scanf("%lf",&base);

    printf("Base = %.2lf\n",base);
    printf("\n");
    printf("Enter exponent:\n");
    scanf("%lf",&exponent);

    printf("Exponent =%.2lf\n",exponent);
    printf("\n");
    dresult = pow(base,exponent);
    printf("Result: = %.2lf\n",dresult);

}

// FACTORIAL
void mv_factorial()
{
    int inum1; 
    int result;

    printf("Factorial:\n");
    printf("Enter First Number:\n");
    scanf("%d",&inum1); 
    printf("first number = %d\n",inum1);
    printf("\n");
    result = 1; 
    // factorial of 5
    for(int le = 1; le <= inum1; ++le)
    {
     result = result * le; 
     }
    printf("Result: %d\n",result);
}

// REVERSE NUMBER
void mv_reversenumber()
{   
    int inum1 = 0; 
    int reversed = 0;
    printf("Reversed Number: \n");
    printf("Enter Number:\n");
    scanf("%d",&inum1);
    printf("Number = %d\n",inum1); 
    printf("\n");
    while(inum1 != 0)
    {
        reversed = reversed * 10 + inum1 % 10;
        inum1 /= 10; 
    }

    printf("Reversed: %d\n",reversed);
}

// PROGRAMMERS CALCULATOR

// OPTIONS FOR PROGRAMMER CALCULATOR

int mv_pcOptions()
{
    int inum; 
    printf("\n"); 
    printf("------>> Programmer Calculator <<-------\n");
    printf("Enter 14 for decimal to binary\n"); 
    printf("Enter 15 for bitwise AND\n"); 
    printf("Enter 16  for bitwise OR\n"); 
    printf("Enter 17 for bitwise XOR\n"); 
    printf("Enter 18 for bitwise Right shift\n"); 
    printf("Enter 19 for bitwise Left shift\n"); 
    printf("Enter 20 for bitiwse Not\n"); 
    printf("Enter 0  for preivous\n"); 
    scanf("%d",&inum); 
    return inum; 
}

// PROGRAMMER CALCULATOR

void mv_programmercalculator()
{
    int bool = 0; 

    while(1)
    {

    switch(mv_pcOptions())
    {
     case 14:
       mv_decimal_to_binary();
       break; 
     case 15:
       mv_bitwiseAnd();
       break; 
     case 16: 
       mv_bitwiseOr();
       break; 
     case 17: 
       mv_bitwiseXor();
       break; 
     case 18:
       mv_bitwiseRightShift();
       break; 
     case 19: 
      mv_bitwiseLeftShift();
      break;
     case 20:  
      mv_bitwiseNot();
     case 0: 
        bool = 1; 
      break; 
    default: 
        printf("Enter correct value:\n"); 
    }

    if(bool == 1)
    {
        break; 
    }

    printf("\n\n"); 
}
}

// DECIMAL TO BINARY
void mv_decimal_to_binary()
{   
     int inum;
     printf("decimal to binary: \n");
     printf("Enter number:\n");
     scanf("%d",&inum);
     printf("number = %d\n",inum);

     // array definition 
     int iarr[100]; 
     int le1 = 0; 
     while(inum > 0)
     {
        // storing remainder in binary array
        iarr[le1] = inum % 2; 
        inum = inum / 2; 
        le1++; 
     }

     printf("Result:\n");
     // printing binary array in reverse order
     for(int le2 = le1-1; le2 >= 0; le2--)
     {
        printf("%d",iarr[le2]); 
     }

}

// DECIMAL TO BINARY 2 FOR PRINT BINARY NUMBER 

void mv_decimalToBinary(int inum)
{
        // array definition 
     int iarr[100]; 
     int le1 = 0; 
if(inum > 0)
{   

     while(inum > 0)
     {
        // storing remainder in binary array
        iarr[le1] = inum % 2; 
        inum = inum / 2; 
        le1++; 
     }

     printf("Binary number: ");
     // printing binary array in reverse order
     for(int le2 = le1-1; le2 >= 0; le2--)
     {
        printf("%d",iarr[le2]); 
     }

}
else
{
    printf("Binary of 0 is 0:\n"); 
}

}


// BITWISE AND
void mv_bitwiseAnd()
{
    int  inum1; 
    int  inum2;
    int  iresult; 
    
    printf("-> Bitwise AND & <- :\n");
    printf("first number:\n");
    scanf("%d",&inum1);
    printf("first number: %d\n",inum1); mv_decimalToBinary(inum1);
    printf("\n"); 

    printf("Enter second number:\n");
    scanf("%d",&inum2);
    printf("second number: %d\n",inum2); mv_decimalToBinary(inum2); 
    printf("\n\n");    

    iresult = inum1 & inum2; 
    printf("Result = %d\n",iresult); mv_decimalToBinary(iresult); 
    printf("\n\n");

}

// BITWISE OR 
void mv_bitwiseOr()
{
    int  inum1; 
    int  inum2;
    int  iresult; 
    
    printf("-> Bitwise OR | <- :\n");
    printf("first number:\n");
    scanf("%d",&inum1);
    printf("first number: %d\n",inum1); mv_decimalToBinary(inum1);
    printf("\n"); 

    printf("Enter second number:\n");
    scanf("%d",&inum2);
    printf("second number: %d\n",inum2); mv_decimalToBinary(inum2); 
    printf("\n");    

    iresult = inum1 | inum2; 
    printf("Result = %d\n",iresult); mv_decimalToBinary(iresult); 
    printf("\n");

}

// BITWISE XOR
void mv_bitwiseXor()
{
    int  inum1; 
    int  inum2;
    int  iresult; 
    
    printf("-> Bitwise XOR ^ <- :\n");
    printf("first number:\n");
    scanf("%d",&inum1);
    printf("first number: %d\n",inum1); mv_decimalToBinary(inum1);
    printf("\n"); 

    printf("Enter second number:\n");
    scanf("%d",&inum2);
    printf("second number: %d\n",inum2); mv_decimalToBinary(inum2); 
    printf("\n");    

    iresult = inum1 ^ inum2; 
    printf("Result = %d\n",iresult); mv_decimalToBinary(iresult); 
    printf("\n");

}

// BITWISE RIGHT SHIFT
void mv_bitwiseRightShift()
{
    int  inum1; 
    int  inum2;
    int  iresult; 
    
    printf("-> Bitwise Right Shift >> <- :\n");
    printf("first number:\n");
    scanf("%d",&inum1);
    printf("first number: %d\n",inum1); mv_decimalToBinary(inum1);
    printf("\n"); 

    printf("Enter second number:\n");
    scanf("%d",&inum2);
    printf("second number: %d\n",inum2); mv_decimalToBinary(inum2); 
    printf("\n");    

    iresult = inum1 >> inum2; 
    printf("Result = %d\n",iresult); mv_decimalToBinary(iresult); 
    printf("\n");

}

// BITIWSE LEFT SHIFT
void mv_bitwiseLeftShift()
{
    int  inum1; 
    int  inum2;
    int  iresult; 
    
    printf("-> Bitwise Left Shift << :\n");
    printf("first number:\n");
    scanf("%d",&inum1);
    printf("first number: %d\n",inum1); mv_decimalToBinary(inum1);
    printf("\n"); 

    printf("Enter second number:\n");
    scanf("%d",&inum2);
    printf("second number: %d\n",inum2); mv_decimalToBinary(inum2); 
    printf("\n");    

    iresult = inum1 << inum2; 
    printf("Result = %d\n",iresult); mv_decimalToBinary(iresult); 
    printf("\n");
}

// BITWISE NOT 
void mv_bitwiseNot()
{
    int  inum;
    int  iresult; 
    
    printf("-> Bitwise NOT ~ :\n");
    printf("first number:\n");
    scanf("%d",&inum);
    printf("first number: %d\n",inum); mv_decimalToBinary(inum);
    printf("\n");     

    iresult = ~inum;
    printf("Result = %d\n",iresult); mv_decimalToBinary(iresult); 
    printf("\n");
}















