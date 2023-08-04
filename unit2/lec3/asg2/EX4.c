/**
 * @file EX4.c
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
    float num;
    printf("Enter a number: ");
    scanf(" %f",&num);
    if(num>0)
    {
        printf("%f is positive",num);
    }
    else if(num<0)
    {
        printf("%f is negative",num);
    }
    else
    {
        printf("you entered a zero");
    }
}