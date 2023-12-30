#include <stdio.h>
void main()
{
    int size,location,element;
    printf("please enter the number of elements: ");
    scanf(" %d",&size);
    int arr[size+1];
    printf("enter the elements:\n");
    for(int i=0;i<size;i++)
    {
        printf("%d:",i+1);
        scanf(" %d",&arr[i]);
    }
    printf("enter the location:");
    scanf(" %d",&location);
    printf("enter the element:");
    scanf(" %d",&element);
    for(int i=size+1;i>=location;i--)
    {
        arr[i] = arr[i-1];
    }
    arr[location-1] = element;
        for(int i=0;i<size+1;i++)
    {
        printf("%d ",arr[i]);
    }
}