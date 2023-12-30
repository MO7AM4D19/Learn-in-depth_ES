#include <stdio.h>
#include <string.h>
void main()
{
    char arr1[100],arr2[100];
    int size = 0;
    printf("please enter a string: ");
    gets(arr1);
    while(arr1[size]!='\0')
    {
        size++;
    }
    for(int i=size,j=0;i>=0 && j<size;i--,j++)
    {
        arr2[j] = arr1[i];
    }
    printf("%s",arr2);

}