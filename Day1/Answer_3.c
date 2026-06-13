#include <stdio.h>
int main()
{
    int number, i;
    long long factorial = 1;
    printf("Enter a number: ");
    scanf("%d", &number);
    if(number < 0)
    {
        printf("Factorial does not exist for negative numbers.\n");
    }
    else
    {
        for(i = 1; i <= number; i++)
        {
            factorial = factorial * i;
        }
        printf("Factorial of %d = %lld\n", number, factorial);
    }
    return 0;
}