#include <stdio.h>
#include <string.h>
void main()
{
    char arr[100],find;
    int F=0,i=0;
    printf("please enter a string: ");
    gets(arr);
    printf("please enter a char to get it's frequancy: ");
    scanf(" %c",&find);
    while(arr[i]!='\0')
    {
        if(arr[i] == find)
        {
            F++;
        }
        i++;
    }
    printf("Frequance of %c is %d",find,F);
}