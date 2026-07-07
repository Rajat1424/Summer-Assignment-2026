#include <stdio.h>
#include <string.h>
int main()
{
    char str[50];
    int choice;
    printf("Enter String: ");
    scanf("%s",str);
    printf("\n1.Length");
    printf("\n2.Reverse");
    printf("\nEnter Choice: ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            printf("Length = %d",strlen(str));
            break;
        case 2:
            printf("Reverse = %s",strrev(str));
            break;
        default:
            printf("Invalid Choice");
    }
    return 0;
}