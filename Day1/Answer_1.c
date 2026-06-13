#include <stdio.h>
int main() {
    int n;
    int sum = 0;
    printf("Enter a positive integer (N): ");
    scanf("%d", &n);
    if (n < 1) {
        printf("Error: Please enter a natural number greater than or equal to 1.\n");
        return 1; 
    }
    for (int i = 1; i <= n; i++) {
        sum += i; 
    }
    printf("The sum of the first %d natural numbers is: %d\n", n, sum);
    return 0;
}
