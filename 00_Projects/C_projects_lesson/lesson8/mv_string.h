/* S.G.M.P 
 * @file: ms_string.h
 * @brief: Header file implemenation for mv_string interface function declarations
 * @author: bisikeshan sahu(bisikeshan567@gmail.com)
 * @date: 08 june 2025 10:48am 
 */

#ifndef _MV_STRING_H
#define _MV_STRING_H


// mv_string function declaration 

// STRING LENGTH FUNCTION 
extern long long mv_strlen(char* str);

// STRING COPY FUNCTION
extern long long mv_strcpy(char* dest,char* src); 

// STRING CONCATE FUNCTION
extern char* mv_strcat(char* dest,char* src); 

// STRING COMPARE FUNCTION
extern int mv_strcmp(char* str1,char* str2); 

// STRING COPY N NUMBER OF STRING
extern char* mv_strncpy(char* dest,char* src,long long nr_characters); 


#endif // _MV_STRING_H