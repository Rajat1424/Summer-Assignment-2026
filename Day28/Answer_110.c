#include <stdio.h>
struct Account
{
    int acc_no;
    char name[50];
    float balance;
};
int main()
{
    struct Account a;
    printf("Enter Account Number: ");
    scanf("%d",&a.acc_no);
    printf("Enter Name: ");
    scanf("%s",a.name);
    printf("Enter Balance: ");
    scanf("%f",&a.balance);
    printf("\nBank Account Details\n");
    printf("Account No: %d\n",a.acc_no);
    printf("Name: %s\n",a.name);
    printf("Balance: %.2f",a.balance);
    return 0;
}