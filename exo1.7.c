#include <stdio.h>

// Function to perform modular exponentiation
long long modular_exponentiation(long long base, long long exp, long long mod) {
    long long result = 1;
    base = base % mod;

    while (exp > 0) {
        // If exp is odd, multiply base with result
        if (exp % 2 == 1) {
            result = (result * base) % mod;
        }
        // Square the base and reduce exp by half
        base = (base * base) % mod;
        exp /= 2;
    }

    return result;
}

// Function to compute (A^B) mod P using Fermat's Little Theorem
long long fermat_mod(long long a, long long b, long long p) {
    if (p <= 1) {
        printf("P must be a prime number greater than 1.\n");
        return -1;
    }

    // Reduce the exponent using Fermat's Little Theorem
    long long reduced_exp = b % (p - 1);
    return modular_exponentiation(a, reduced_exp, p);
}

int main() {
    long long a, b, p;
    printf("Enter A, B, and P (P must be prime): ");
    scanf("%lld %lld %lld", &a, &b, &p);

    if (p <= 1) {
        printf("P must be a prime number greater than 1.\n");
        return 1;
    }

    printf("(A^B) mod P = %lld\n", fermat_mod(a, b, p));
    return 0;
}