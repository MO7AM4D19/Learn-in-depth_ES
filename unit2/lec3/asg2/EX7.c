/**
 * @file EX7.c
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
    int num,fac=1;
    printf("Enter an integer: ");
    scanf(" %d",&num);
    if(num<0)
    {
        printf("Error!! Factorial for a negative number doesn't exist.");
    }
    else
    {
        while(num>0)
        {
            fac*=num;
            num--;
        }
        printf("factorial = %d",fac);
    }
}