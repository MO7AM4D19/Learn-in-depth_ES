/**
 * @file EX2.c
 * @author Mohamed Khalid Anis (mo.khalid.anis@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-08-04
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>

void main()
{
    char num;
    printf("Enter an alphabet: ");
    scanf(" %c",&num);
    switch (num)
    {
    case 'a':
    case 'i':
    case 'e':
    case 'o':
    case 'u':
        printf("%c is vowel",num);
        break;
    default:
        printf("%c is consonant",num);
        break;
    }
}