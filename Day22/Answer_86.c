#include<stdio.h>
int main()
{
    char str[200];
    int i=0, words=1;
    printf("Enter a sentence: ");
    gets(str);
    if(str[0]=='\0')
    {
        printf("Number of words in the sentence: 0");
        return 0;
    }
    while(str[i]!='\0')
    {
        if(str[i]==' ' && str[i+1]!=' ' && str[i+1]!='\0')
        {
            words++;
        }
        i++;
    }
    printf("Number of words in the sentence: %d", words);
    return 0;
}