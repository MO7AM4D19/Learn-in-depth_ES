#include <stdio.h>
struct distance 
{
    int feet;
    int inch;
}d1,d2;
int totalFeet,totalInch;
void main()
{
    printf("Enter inforamtion of the fitst distance:\n");
    printf("Enter feet: ");
    scanf(" %d",&d1.feet);
    printf("Enter inch: ");
    scanf(" %d",&d1.inch);
    printf("Enter inforamtion of the second distance:\n");
    printf("Enter feet: ");
    scanf(" %d",&d2.feet);
    printf("Enter inch: ");
    scanf(" %d",&d2.inch);
    totalFeet = d1.feet+ d2.feet + ((d1.inch+d2.inch)/12);
    totalInch = (d1.inch+d2.inch)%12;
    printf("total distance is %d'%d\"",totalFeet,totalInch);
}