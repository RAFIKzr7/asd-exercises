#include <stdio.h>

// Function to calculate the GCD using the Euclidean algorithm
long long gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to calculate the LCM
long long lcm(long long a, long long b) {
    return (a / gcd(a, b)) * b;
}

int main() {
    long long a, b;
    printf("Enter two integers: ");
    scanf("%lld %lld", &a, &b);

    if (a < 1 || b < 1 || a > 1000000000 || b > 1000000000) {
        printf("Input values must be between 1 and 10^9.\n");
        return 1;
    }

    printf("LCM of %lld and %lld is: %lld\n", a, b, lcm(a, b));
    return 0;
}