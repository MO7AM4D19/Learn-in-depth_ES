/**
 * @file EX6.c
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
    float num1,num2;
    printf("Enter value of a: ");
    scanf(" %f",&num1);
    printf("Enter value of b: ");
    scanf(" %f",&num2);
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    printf("After swapping, value of a = %.3f\n",num1);
    printf("After swapping, value of b = %.3f",num2);
}