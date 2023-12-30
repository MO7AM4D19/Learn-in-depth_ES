#include <stdio.h>
void main()
{
    int size;
    printf("please enter the the size of array: ");
    scanf(" %d",&size);
    float arr[size],sum=0;
    for(int i=0;i<size;i++)
    {
        printf("%d. Enter a number: ",i);
        scanf(" %f",&arr[i]);
        sum+=arr[i];
    }
    printf("the average = %f",sum/size);
}