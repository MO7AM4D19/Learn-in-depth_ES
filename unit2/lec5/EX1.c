#include <stdio.h>
int isPrime(int num);
void main()
{
    int start,end;
    printf("enter two numbers: ");
    scanf("%d %d",&start,&end);
    printf("prime numbers between %d and %d are:\n",start,end);
    for(int i=start+1;i<end;i++)
    {
        if(isPrime(i))
        {
            printf("%d ",i);
        }
    }
}

int isPrime(int num)
{
    int out = 1;
    for(int i=2;i<10;i++)
    {
        if(num%i == 0)
        {
            out = 0;
        }
    }
    return out;
}