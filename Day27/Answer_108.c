#include <stdio.h>
int main()
{
    int m1,m2,m3,total;
    float per;
    printf("Enter marks of 3 subjects: ");
    scanf("%d%d%d",&m1,&m2,&m3);
    total = m1+m2+m3;
    per = total/3.0;
    printf("\nTotal Marks = %d",total);
    printf("\nPercentage = %.2f",per);
    if(per>=40)
        printf("\nResult: Pass");
    else
        printf("\nResult: Fail");
    return 0;
}