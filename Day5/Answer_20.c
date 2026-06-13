#include <stdio.h>
int main() 
{
    int n, i, largest = 0;
    scanf("%d", &n);
    for(i = 2; i <= n; i++) 
{
        while(n % i == 0) 
{
            largest = i;
            n /= i;
        }
    }
    printf("%d", largest);
    return 0;
}