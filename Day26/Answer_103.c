#include <stdio.h>
int main() {
    int pin, choice;
    float balance = 5000, amount;
    printf("Enter PIN: ");
    scanf("%d", &pin);
    if(pin == 1234) {
        printf("1. Check Balance\n");
        printf("2. Withdraw Money\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        if(choice == 1) {
            printf("Balance = %.2f", balance);
        }
        else if(choice == 2) {
            printf("Enter amount: ");
            scanf("%f", &amount);
            if(amount <= balance) {
                balance = balance - amount;
                printf("Withdraw Successful\n");
                printf("Remaining Balance = %.2f", balance);
            }
            else {
                printf("Insufficient Balance");
            }
        }
        else {
            printf("Invalid Choice");
        }
    }
    else {
        printf("Wrong PIN");
    }
    return 0;
}