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
    int num,sum=0;
    printf("Enter an integer: ");
    scanf(" %d",&num);
    while(num>=0)
    {
        sum+=num;
        num--;
    }
    printf("sum = %d",sum);
}