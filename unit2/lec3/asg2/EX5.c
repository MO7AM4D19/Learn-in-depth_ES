/**
 * @file EX5.c
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
    printf("Enter a character: ");
    scanf(" %c",&num);
    if((num>40 && num<90) || (num>96 && num<123))
    {
        printf("%c is an alphabet",num);
    }
    else
    {
        printf("%c is not an alphabet",num);
    }
}