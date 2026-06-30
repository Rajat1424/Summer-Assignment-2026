#include<stdio.h>
int main()
{
    char str[100], ch;
    int i=0, count=0;
    printf("Enter a string: ");
    gets(str);
    printf("Enter a character to Search: ");
    scanf(" %c", &ch);
    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i]==ch)
        {
            count++;
        }
    }
    printf("The character '%c' appears %d times in the string.", ch, count);
    return 0;
}