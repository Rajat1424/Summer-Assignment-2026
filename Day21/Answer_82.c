#include<stdio.h>
int main()
{
    char str[100], rev[100];
    int i=0, j=0;
    printf("Enter a string: ");
    gets(str);
    while(str[i]!='\0')
    {
        i++;
    }
    j=i-1;
    i=0
    while(j>=0)
    {
        rev[i]=str[j];
        i++;
        j--;
    }
    rev[i]='\0';
    printf("Reversed string is: %s", rev);
    return 0;
}