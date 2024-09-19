#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    // Iterating from 1 to N
    for(int i = 1; i <= n; i++) {
        sum += i;  // Accumulating the sum
    }

    printf("The sum of first %d natural numbers is: %d\n", n, sum);
    return 0;
}
