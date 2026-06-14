#include<stdio.h>
int main()
{
    int x, n, i, result=1;
    printf("Enter a number: ");
    scanf("%d", &x);
    printf("Enter the power: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        result = result * x;
    }
    printf("Result= %d", result);
    return 0;
}