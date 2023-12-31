#include <stdio.h>
int factorial(int num);
void main()
{
    int num;
    printf("please enter a number: ");
    scanf(" %d",&num);
    printf("factorial of %d is %d",num,factorial(num));
}
int factorial(int num)
{
    if (num>1)
    {
        return num*factorial(num-1);
    }
}