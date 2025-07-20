

/* S.G.M.P 
 * @file: ms_string.h
 * @brief: Header file implemenation for mv_string interface function declarations
 * @author: bisikeshan sahu(bisikeshan567@gmail.com)
 * @date: 08 june 2025 10:48am 
 */

#ifndef _MV_STRING_H
#define _MV_STRING_H


// mv_string function declaration 

// function to get length of string 
extern long long mv_strlen(char* str);

extern long long mv_strcpy(char* dest,char* src); 

extern char* mv_strcat(char* dest,char* src); 

extern int mv_strcmp(char* str1,char* str2); 

extern char* mv_strncpy(char* dest,char* src,long long nr_characters); 

extern int mv_strncmp(char* str1,char* str2,long long nr_characters);


#endif // _MV_STRING_H