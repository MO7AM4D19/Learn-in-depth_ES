/**
 * @file EX1.c
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
    int num;
    printf("enter the integer you want to check: ");
    scanf(" %d",&num);
    if(num%2==0)
    {
        printf("%d is even",num);
    }
    else
    {
        printf("%d is odd",num);
    }
}