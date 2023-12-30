#include <stdio.h>
#include <string.h>
void main()
{
    char arr[100];
    int i=0;
    printf("please enter a string: ");
    gets(arr);
    while(arr[i]!='\0')
    {
        i++;
    }
    printf("size is %d",i);
}