#include <stdio.h>
void main()
{
    int size,location,element;
    printf("please enter the number of elements: ");
    scanf(" %d",&size);
    int arr[size];
    printf("enter the elements:\n");
    for(int i=0;i<size;i++)
    {
        printf("%d:",i+1);
        scanf(" %d",&arr[i]);
    }
    printf("enter the element:");
    scanf(" %d",&element);
    for(int i=0;i<size;i++)
    {
        if(arr[i] == element)
        {
            location = i+1;
            break;
        }
    }
    printf("element is found in location number: %d",location);
}