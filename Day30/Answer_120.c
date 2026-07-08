#include <stdio.h>
void display(char name[], int roll)
{
    printf("\nStudent Details");
    printf("\nName: %s",name);
    printf("\nRoll No: %d",roll);
}
int main()
{
    char name[50];
    int roll;
    printf("Enter Student Name: ");
    scanf("%s",name);
    printf("Enter Roll No: ");
    scanf("%d",&roll);
    display(name,roll);
    return 0;
}