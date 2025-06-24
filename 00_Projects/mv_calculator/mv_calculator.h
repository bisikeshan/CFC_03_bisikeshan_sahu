/* S.G.M.P && M.V
 * @FILE:  mv_calculator.c
 * @BREIF: HEADER FILE FOR FUNCTIONS DECLARATION
         * MAIN CHOICE
         * MENUS
         * NORMAL FUNCTIONS FOR BASIC ARTIHMEITCS
         * SCIENTIFIC FUNCTIONS
         * PROGRAMMERS FUNCTIONS 
 * @AUTHOR: bisikeshan sahu (bisikeshan567@gmail.com)
 * @DATE: 19 JUNE 2025 8:35AM 
 */

#ifndef _MV_CALCULATOR_H
#define _MV_CALCULATOR_H

// MAIN CHOICE
void mv_choice(); 

// MENUS
int mv_menuChoice();
int mv_ncOptions(); 
int mv_scOptions(); 
int mv_pcOptions(); 


// NORMAL CALCULATOR FUNCTIONS DECLARTATION
void mv_normalcalculator();

void mv_addition(); 
void mv_subtraction(); 
void mv_multiplication();
void mv_division(); 
void mv_divisionremainder(); 
void mv_square(); 
void mv_cube();
void mv_fourthpower();
void mv_fifthpower();
void mv_percentage();

// SCIENTIFIC CALCULATOR FUNCTIONS DECLARATION
void mv_scientificcalculator();

void mv_nth_power(); // num1 = base and num2 = exponent
void mv_factorial();
void mv_reversenumber();

// PROGRAMMER CALCULATOR FUNCTIONS DECLARATION
void mv_programmercalculator();

void mv_decimal_to_binary();
void mv_decimalToBinary();
void mv_bitwiseAnd(); 
void mv_bitwiseOr(); 
void mv_bitwiseXor();
void mv_bitwiseRightShift();
void mv_bitwiseLeftShift();
void mv_bitwiseNot(); 

#endif // _MV_CALCULATOR_H