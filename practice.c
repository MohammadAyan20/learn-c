#include<stdio.h>

int main() {
    int isPrime;
    int n;
     printf("Enter the value of n:");
     scanf("%d",&n);
    printf("Prime numbers between 0 and n are:\n");
    for (int i = 2; i <= n; i++) {
        isPrime = 1; // Assume the number is prime

        for (int j = 2; j <= i / 2; j++) { // Check divisors up to half of i
            if (i % j == 0) {
                isPrime = 0; // Not a prime number
                break;
            }
        }

        if (isPrime) {
            printf("%d ", i);
        }
    }

    return 0;
}

