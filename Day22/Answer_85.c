#include<stdio.h>
int main()
{
    char str[100], rev[100];
    int i=o, j, len=0, flag=0;
    printf("Enter a string: ");
    gets(str);
    while(str[len]!='\0')
    {
        len++;
    }
    j=len-1;
    while(j>=0)
    {
        rev[i]=str[j];
        i++;
        j--;
    }
    rev[i]='\0';
    for( i=0; str[i]!='\0'; i++)
    {
        if(str[i]!=rev[i])
        {
            flag=0;
            break;
        }
    }
    if(flag==1)
    {
        printf("The string is a palindrome.\n");
    }
    else
    {
        printf("The string is not a palindrome.\n");
    }
    return 0;
}