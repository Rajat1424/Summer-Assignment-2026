#include<stdio.h>
int armstrong(int n)
{
    int sum=0, rem, temp;
    temp=n;
    while(temp!=0)
    {
        rem=temp%10;
        sum+=rem*rem*rem;
        temp/=10;
    }
    if(sum==n)
        return 1;
    else
        return 0;
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(armstrong(n))
        printf("%d is an Armstrong number.\n", n);
    else
        printf("%d is not an Armstrong number.\n", n);
    return 0;
}