#include <stdio.h>
struct number 
{
    float real;
    float imag;
}n1,n2;
float totalReal,totalImag;
void main()
{
    printf("Enter inforamtion of the fitst number:\n");
    printf("Enter real: ");
    scanf(" %f",&n1.real);
    printf("Enter imaginary: ");
    scanf(" %f",&n1.imag);
    printf("Enter inforamtion of the second number:\n");
    printf("Enter real: ");
    scanf(" %f",&n2.real);
    printf("Enter imaginary: ");
    scanf(" %f",&n2.imag);
    totalReal = n1.real + n2.real;
    totalImag = n1.imag+n2.imag;
    printf("total number is %.3f+%.3fi",totalReal,totalImag);
}