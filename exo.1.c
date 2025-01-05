#include <stdio.h>
#include <stdbool.h>
#include <math.h>

// Function to check if a number is prime
bool isPrime(int N) {
    // Handle edge cases
    if (N <= 1) return false; // 1 and below are not prime numbers
    if (N <= 3) return true;  // 2 and 3 are prime numbers
    if (N % 2 == 0 || N % 3 == 0) return false; // Divisible by 2 or 3

    // Check for factors from 5 to sqrt(N) in steps of 6
    int i ;
    for ( i = 5; i * i <= N; i ++) {
        if (N % i == 0 || N % (i + 2) == 0) return false;
    }

    return true; // No divisors found, N is prime
}

int main() {
    int N;
    printf("Enter an integer: ");
    scanf("%d", &N);

    if (isPrime(N)) {
        printf("%d is a prime number.\n", N);
    } else {
        printf("%d is not a prime number.\n", N);
    }
}
