#include <stdio.h>
void main()
{
    int iMax,jMax;
    printf("please enter thesize of the matrix:");
    scanf("%d %d",&iMax,&jMax);
    float arr[iMax][jMax],trans[jMax][iMax];
    printf("the first matrix:\n");

    for(int i=0;i<iMax;i++)
    {
        for(int j=0;j<jMax;j++)
        {
            printf("please enter arr1[%d,%d]: ",i+1,j+1);
            scanf(" %f",&arr[i][j]);
        }
    }

    for(int i=0;i<iMax;i++)
    {
        for(int j=0;j<jMax;j++)
        {
            trans[j][i]=arr[i][j];
        }
    }

    printf("transpose of matrix:\n");
    for(int i=0;i<jMax;i++)
    {
        for(int j=0;j<iMax;j++)
        {
            printf(" %f\t",trans[i][j]);
        }
        printf("\n");
    }
}