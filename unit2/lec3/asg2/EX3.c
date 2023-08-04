/**
 * @file EX3.c
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
    int num1,num2,num3;
    printf("Enter Three numvers: ");
    scanf(" %d %d %d",&num1,&num2,&num3);
    if(num2>num1)
    {
        num1=num2;
    }
    if(num3>num1)
    {
        num1 = num3;
    }
    printf("Largest Number: %d",num1);
}