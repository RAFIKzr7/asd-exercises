#include <stdio.h>
#include <stdbool.h>

void sieve_of_eratosthenes(int n) {
    // Create an array to mark prime numbers
    bool is_prime[n + 1];
    
    // Initialize all elements to true (assuming all are prime initially)
    for (int i = 0; i <= n; i++) {
        is_prime[i] = true;
    }

    // 0 and 1 are not prime numbers
    is_prime[0] = is_prime[1] = false;

    // Start the sieve process
    for (int i = 2; i * i <= n; i++) {
        if (is_prime[i]) {
            // Mark multiples of i as non-prime
            for (int j = i * i; j <= n; j += i) {
                is_prime[j] = false;
            }
        }
    }

    // Print all prime numbers
    printf("Prime numbers up to %d:\n", n);
    for (int i = 2; i <= n; i++) {
        if (is_prime[i]) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter a number (1 ≤ N ≤ 10^6): ");
    scanf("%d", &n);

    if (n < 1 || n > 1000000) {
        printf("Invalid input! Please enter a number between 1 and 10^6.\n");
        return 1;
    }

    sieve_of_eratosthenes(n);
    return 0;
}