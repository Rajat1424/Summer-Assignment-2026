#include<stdio.h>
int reverse(int n)
{
    if(n == 0)
    {
        return 0;
    }
    return reverse(n / 10) * 10 + n % 10;
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Reverse=%d", reverse(n));
    return 0;
}