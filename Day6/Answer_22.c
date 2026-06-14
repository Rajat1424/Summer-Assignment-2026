#include<stdio.h>
int main()
{
    int n, decimal[32], i=0;
    printf("Enter a binary number: ");
    scanf("%d", &n);
    while(n > 0)
    {
        decimal[i] = n % 10;
        n = n / 10;
        i++;
    }
    printf("Decimal number: ");
    for(int j = i - 1; j >= 0; j--)
    {
        printf("%d", decimal[j]);
    }
    printf("\n");
    return 0;
}