#include <stdio.h>
void main()
{
    float arr1[2][2],arr2[2][2];
    printf("the first matrix:\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("please enter arr1[%d,%d]: ",i+1,j+1);
            scanf(" %f",&arr1[i][j]);
        }
    }
    printf("the second matrix:\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("please enter arr2[%d,%d]: ",i+1,j+1);
            scanf(" %f",&arr2[i][j]);
        }
    }
    printf("sum of matrix 1 and 2:\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            arr1[i][j]+=arr2[i][j];
            printf(" %f\t",arr1[i][j]);
        }
        printf("\n");
    }
}