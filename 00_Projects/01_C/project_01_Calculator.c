//************************************* Calculator_Project *****************************************//

// Headers
#include <stdio.h>
#include <math.h>

// data definition
// calculator mode 
char normal_calculator = '1'; 
char scientific_calculator = '2'; 
char programmer_calculator = '3'; 

// num1 num2 and operations
int  inum1 = 0; 
int  inum2 = 0; 
int  return_value = 0; 
int  result = 0; 
// fnum1 fnum2 and fresult for division

float fnum1 = 0; 
float fnum2 = 0; 
float fresult = 0; 
float freturn_value = 0; 

// nth power 

int exponent = 0; 
double base = 0;
double dresult = 0; 
double dreturn_value = 0;  

// for calculator type 1 for normal ** 2 for scientific ** 3 for programmer 
int calculator_type = 0;

// input integer for operation which is given to particular operations serial no  

// input single character like + - *
char operations_char;
char normal_char_operations; 




// Function declarations for normal calculator

 
int addition( int  inum1, int inum2);
int subtraction(int inum1, int inum2);
int multiplication(int inum1,int inum2);
float division(float fnum1,float fnum2);
int division_remainder(int inum1, int inum2);
int square(int inum1);  // input operation for square is 's' or 'S'
int cube(int inum1); // input operation for cube is 'c' or 'C'
int fourth_power(int inum1); // input operation for 4th power is '4'
int fifth_power(int inum1); // input operation for 5th power is '5'
float percentage(float fnum1,float fnum2); // fnum1 = obtained mark and fnum2 = total marks input operation is 'P' or 'p'

// scienfic calculator function declaration 
double nth_power(double base,int exponent); // num1 = base and num2 = exponent
int factorial(int inum1); 
int reverse_number(int inum1);

// programmer calculator function declaration
void decimal_to_binary_01(int inum1);// 'D'
int bitwise_AND(int inum1,int inum2);// '&'
int bitwise_OR(int inum1,int inum2); // '|'
int bitwise_XOR(int inum1,int inum2);// '^'
int bitwise_right_shift (int inum1,int inum2); // 'R'
int bitwise_left_shift(int inum1,int inum2); // 'L'
int bitwise_NOT(int inum1); //'~'





//Entry point function 
int main(void)
{
    
    // choices for calculator mode 

 // chocies of calculator type konsa choose krna hai 
printf("*****************************< Calculator >*************************************\n");
printf(" Enter 1 for normal calculator\n");
printf(" Enter 2 for scientific calculator\n");
printf(" Enter 3 for programmer calculator\n");

printf(" Enter value here: \n");
scanf(" %c",&operations_char);

// normal calculator block 
 if(operations_char == normal_calculator )
 { // normal calculator starting bracket
    
    printf("***** Normal Calculator ****\n");
    printf("***** mannual to use calculator***\n");             
    printf(" addition   =  +\n");                              
    printf(" subraction =  -\n");                                
    printf(" multiplicaiton = * \n");                           
    printf(" division quotient = / result in float value\n");     
    printf(" division remainder = %%\n");                         
    printf(" small s letter for square\n");                     
    printf(" small c letter for cube \n");                      
    printf(" 4 integer number for fourth power\n");  
    printf(" 5 integer number for fifth  power\n"); 
    printf(" small letter p for percentage\n");
    printf(" total 10 operations performed by normal calculator\n");
    printf("**********************************\n");
     // operations  
    printf("Enter operations here: \n");

     //input operations 
    scanf(" %c",&operations_char);

    if(operations_char == '/' || operations_char == 'p' )
    {
    // for division operations

     printf("Enter first number: \n");

     scanf("%f",&fnum1);

     printf("Enter second number: \n");

     scanf("%f",&fnum2);

    }
  
   else if(operations_char == '+' || operations_char == '-' || operations_char == '*' || operations_char == '%' )
   {
   // print enter value for num1 
     printf("Enter first operand\n");

       // input value for num1 
     scanf("%d",&inum1);

        // print enter value for num2 -> output
     printf("Enter second operand \n");

        // input value for num2 
    scanf("%d",&inum2);
   }

  else if(operations_char == 's'  || operations_char == 'c'  || operations_char == '4' || operations_char == '5')
   {
     printf("Enter number \n");
     scanf("%d",&inum1);
   }

   else
   {
      printf("ERROR! ERROR! ERROR!\n");
   }

   // normal calculator    
      if(operations_char == '/')
     {     // 01
          // division function call 
            freturn_value = division(fnum1,fnum2);
            printf("%.2f / %.2f = %.2f\n",fnum1,fnum2,freturn_value);
     }
      else if(operations_char == '+')
     {    // 02
          // addition function call 
             return_value = addition(inum1,inum2);
             printf("%d + %d = %d\n",inum1,inum2,return_value);
     }
     else if(operations_char == '-')
     {    // 03
          // subtraction function call 
            return_value = subtraction(inum1,inum2);
            printf("%d - %d = %d\n",inum1,inum2,return_value);
      }
        else if(operations_char == '*')
     {    // 04
          // multiplication function call 
             return_value = multiplication(inum1,inum2);
             printf("%d * %d = %d\n",inum1,inum2,return_value);
     } 
     else if(operations_char == '%')
     {   // 05
         //  remainder function call 
             return_value = division_remainder(inum1,inum2);
             printf("%d %% %d = %d\n",inum1,inum2,return_value);
     }
     else if(operations_char == 's' )
     {   // 06
         //  square function call 
             return_value = square(inum1);
             printf("%d * %d = %d\n",inum1,inum1,return_value);
     }
     else if(operations_char == 'c' )
     {  // 07
        //  cube function call 
             return_value = cube(inum1);
             printf("%d * %d * %d = %d\n",inum1,inum1,inum1,return_value);
     }

     else if(operations_char == '4')
     {  // 08
        // fourth power function call 
            return_value = fourth_power(inum1); 
            printf("%d * %d * %d * %d = %d\n",inum1,inum1,inum1,inum1,return_value);
     }
     else if(operations_char == '5')
     {  // 09
        // fifth power function call 
            return_value = fifth_power(inum1);
            printf("%d * %d * %d * %d * %d = %d\n",inum1,inum1,inum1,inum1,inum1,return_value);
     }
     else if(operations_char == 'p'|| operations_char == 'P')
     {  // 10 
        // percentage function call 
           freturn_value = percentage(fnum1,fnum2);
           printf("%.2f , %.2f = %.2f %%\n",fnum1,fnum2,freturn_value);
     }
     else
     {
        printf("ERROR! ERROR! ERROR!\n");
     }


 }// normal calculator end bracket
 else if(operations_char == scientific_calculator  )
 {// starting bracket for scientific calculator
      // operations  
    // manual to use scientific calculator 
    printf("******* scientific calculator *****\n");
    printf("********** mannual ****************\n"); 
    printf(" small n use for nth power\n"); 
    printf(" small f use for factorial\n"); 
    printf(" small r use for reverse of number\n");
    printf(" total 3 operations \n"); 
    printf(" **********************************\n");

    printf("Enter operations\n");

   //input operations 
   scanf(" %c", &operations_char);

     // input operations
  if(operations_char == 'f' || operations_char == 'r')
  {
     printf("Enter number \n");
     scanf("%d",&inum1);
  }
  else if(operations_char == 'n')
  {
     printf("Enter base = \n");
     scanf("%lf",&base);

     printf("Enter exponent = \n");
     scanf("%d",&exponent);
  }
  else
  {
     printf("ERROR! ERROR! ERROR!\n");
  }

  // function calls for scientific calculator 
      if(operations_char == 'n')
     {  // 11
        // nth power function call 
         dreturn_value = nth_power(base,exponent);
         printf(" base = %.2f and exponent = %d result = %.2f",base,exponent,dreturn_value);
     }
     else if(operations_char == 'f')
     {
        // 12
        // factorial function call 
        return_value = factorial(inum1);
        printf("factorial of %d = %d\n",inum1,return_value);
     }

     else if(operations_char == 'r')
     {
        // 13
        // reverse number function call 
        return_value = reverse_number(inum1);
        printf("Reversed number of %d = %d\n",inum1,return_value);
     }
     else
     {
        printf("ERROR! ERROR! ERROR!\n");
     }

 }// end bracket of scientific calculator
 else if(operations_char == programmer_calculator  )
 {// starting brackets of programming calculator 
      // operations 
      //*********** instruction to use calculator **********//
   printf("**********  programmer calculator  ***********\n"); 
   printf("**********  mannual  ***********\n");
   printf(" bitwise AND = &\n"); 
   printf(" bitwise  OR = |\n");
   printf(" bitwise XOR = ^\n"); 
   printf(" bitwise NOT = ~\n"); 
   printf(" bitwise RIGHT SHIFT = capital R\n"); 
   printf(" bitwise LEFT SHIFT = capital L\n"); 
   printf(" decimal to binary = captial D\n");
   printf(" total operation 7 performed\n"); 
   printf("**********************************\n"); 
    
   printf("Enter operations\n");
   //input operations 
   scanf(" %c", &operations_char);

   /// inputs

   if( operations_char == '&' || operations_char == '|' || operations_char == 'R'|| operations_char  == 'L')
   {
   // print enter value for num1 
     printf("Enter first operand\n");

       // input value for num1 
     scanf("%d",&inum1);

        // print enter value for num2 -> output
     printf("Enter second operand \n");

        // input value for num2 
     scanf("%d",&inum2);
  }
  else if( operations_char == 'D'|| operations_char == '~')
  {
     printf("Enter number \n");
     scanf("%d",&inum1);
  }
  else
     {
         printf("ERROR!\n");
     }

     // function calls
     if(operations_char == 'D')
     {
        // 20 
        // decimal to binary function call
         
        printf("binary of %d is :",inum1); decimal_to_binary_01(inum1);
     }
     else if(operations_char == '&')
     {  
        printf("****** BITWISE AND *******\n");
        return_value = bitwise_AND(inum1,inum2); 
        printf("\n  inum1 & inum2 => %d binary of result => ",return_value); decimal_to_binary_01(return_value);
        printf("\n  inum1 = %d binary of inum1 => ",inum1); decimal_to_binary_01(inum1);
        printf("\n  inum2 = %d binary of inum2 => ",inum2); decimal_to_binary_01(inum2);
        printf("\n\n"); 
     }
      else if(operations_char == '|')
     {
        printf("***** BITWISE OR *******\n");
        return_value = bitwise_OR(inum1,inum2);
        printf("\n inum1 | inum2 => %d binary of result  => ",return_value); decimal_to_binary_01(return_value);
        printf("\n inum1 = %d binary of inum1 => ",inum1); decimal_to_binary_01(inum1);
        printf("\n inum2 = %d binary of inum2 => ",inum2); decimal_to_binary_01(inum2);
        printf("\n\n");
     }
      else if(operations_char == '^')
     {
        printf("***** BITWISE XOR *******\n");
        return_value = bitwise_XOR(inum1,inum2);
        printf("\n inum1 ^ inum2 => %d binary of result  => ",return_value); decimal_to_binary_01(return_value);
        printf("\n inum1 = %d binary of inum1 => ",inum1); decimal_to_binary_01(inum1);
        printf("\n inum2 = %d binary of inum2 => ",inum2); decimal_to_binary_01(inum2);
        printf("\n\n");
     }

      else if(operations_char == '~')
     {
        printf("***** BITWISE NOT *******\n");
        return_value = bitwise_NOT(inum1);
        printf("\n ~inum1 => %d **** binary of result  => ",return_value); decimal_to_binary_01(return_value);
        printf("\n  inum1 = %d **** binary of inum1 => ",inum1); decimal_to_binary_01(inum1);
        printf("\n\n");
     }
        else if(operations_char == 'R')
     {
        printf("***** BITWISE RIGHT SHIFT *******\n");
        return_value = bitwise_right_shift(inum1,inum2);
        printf("\n  inum1 >> inum2 => %d **** binary of result  => ",return_value); decimal_to_binary_01(return_value);
        printf("\n  inum1 = %d **** binary of inum1 => ",inum1); decimal_to_binary_01(inum1);
        printf("\n  inum2 = %d **** binary of inum2 => ",inum2); decimal_to_binary_01(inum2);
        printf("\n\n");
     }
      else if(operations_char == 'L')
     {
        printf("  ***** BITWISE LEFT SHIFT *******\n");
        return_value = bitwise_left_shift   (inum1,inum2);
        printf("\n  inum1 << inum2 => %d **** binary of result  => ",return_value); decimal_to_binary_01(return_value);
        printf("\n  inum1 = %d **** binary of inum1 => ",inum1); decimal_to_binary_01(inum1);
        printf("\n  inum2 = %d **** binary of inum2 => ",inum2); decimal_to_binary_01(inum2);
        printf("\n\n");
     }
      else
     {
       printf("ERROR!");
     }


 }// Ending bracket of programming calculator
else {
    
    printf("ERROR!");
 }

    return 0; 
}

//********************** function definition for normal calculator **************************

// 01_addition
int addition(int inum1,int inum2)
{
   
   result = inum1 + inum2; 
   return(result);
}

// 02_subtraction
int subtraction(int inum1,int inum2)
{
    
    result = inum1 - inum2; 
    return(result); 
}

// 03_multiplication

int multiplication(int inum1,int inum2)
{

    result = inum1 * inum2; 
    return(result);

}

// 04_division
float division(float fnum1,float fnum2)
{
     if(fnum2 == 0 )
     {
         printf("Error! Division by zero is not allowed\n");
         return 0; 
     }
     fresult = fnum1/fnum2; 
     return (fresult);
}

// 05_remainder

int division_remainder(int inum1,int inum2)
{
    result = inum1 % inum2; 
    return(result);
}

// 06_square

int square(int inum1)
{
    result = inum1 * inum1; 
    return(result);
}

// 07_cube

int cube(int inum1)
{
    result = inum1* inum1* inum1; 
    return(result);
}

// 08_fourth_power

int fourth_power(int inum1)
{
    result = inum1 * inum1 * inum1 * inum1; 
    return(result);
}

// 09_fifth_power

int fifth_power(int inum1)
{
    result = inum1 * inum1 * inum1 * inum1 * inum1; 
    return(result);
}

// 10_ percentage 

float  percentage(float fnum1,float fnum2)
{
    fresult = (fnum1/fnum2)*100; 
    return(fresult);
}

//*************************** function defnition for scientific calculator **********************************//

// input operation for nth power is 'n'

// 11 nth_power 

double nth_power(double base,int exponent)
{
    dresult = pow(base,exponent);
    return(dresult);
}

// 12 factorial

int factorial(int inum1)
{
   if(inum1 == 0 || inum1 == 1)return 1;
   result = inum1*factorial(inum1-1); 
   return result; 
   
}

// 13 reverse number

int reverse_number(int inum1)
{
     int reversed = 0; 
     while(inum1 != 0)
     {
        reversed = reversed * 10 + inum1 % 10; 
        inum1 /= 10; 
     }

     return reversed; 
}

//**************************** function definition for programmer calculator **************************//
// 20 decimal to binary for one input
void decimal_to_binary_01(int inum1)
{
     if(inum1 > 1)decimal_to_binary_01(inum1 /2);
     printf("%d",inum1 % 2);
}

//  14 bitwise AND

int bitwise_AND(int inum1,int inum2)
{
    result = inum1 & inum1; 
    return result; 
}

//  15 bitwise OR
int bitwise_OR(int inum1,int inum2)
{
    result = inum1 | inum2; 
    return result; 
}

// 16 bitwise XOR

int bitwise_XOR(int inum1,int inum2)
{
    result = inum1 ^ inum2; 
    return result; 
}

// 17 bitwise right shift

int bitwise_right_shift(int inum1,int inum2)
{
    result = inum1 >> inum2; 
    return result; 
}

// 18 bitwise left shift

int bitwise_left_shift(int inum1,int inum2)
{
    result = inum1 << inum2; 
    return result; 
}

// 19 bitwise NOT

int bitwise_NOT(int inum1)
{
    result = ~inum1; 
    return result; 
}

 



