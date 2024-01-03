#include <stdio.h>

struct student
{
    char Name[10];
    int role;
    float mark;
}s;
void main()
{
    printf("Enter strudent inforamtion\n");
    printf("Enter Name: ");
    scanf(" %s",&s.Name);
    printf("Enter role: ");
    scanf(" %d",&s.role);
    printf("Enter mark: ");
    scanf(" %f",&s.mark);
    printf("displaying inforamtion\n");
    printf("Name: %s\n",s.Name);
    printf("role: %d\n",s.role);
    printf("mark: %f\n",s.mark);
}