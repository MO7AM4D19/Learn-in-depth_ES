/**
 * @file EX8.c
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
    char operation;
    float num1,num2;
    printf("enter operator either + or - or * or /");
    scanf(" %c",&operation);
    printf("enter two operands: ");
    scanf(" %f %f",&num1,&num2);
    printf("%.2f %c %.2f =",num1,operation,num2);
    switch (operation)
    {
    case '+':
        num1 = num1+num2;
        break;
    case '-':
        num1 = num1-num2;
        break;
    case '*':
        num1 = num1*num2;
        break;
    case '/':
        num1 = num1/num2;
        break;
    }
    printf(" %.3f",num1);
}