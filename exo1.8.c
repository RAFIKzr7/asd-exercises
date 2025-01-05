#include <stdio.h>
#include <math.h>

// Function to compute the sum of all divisors of N
long long sum_of_divisors(int n) {
    long long sum = 0;

    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            // i is a divisor
            sum += i;

            // Add the corresponding divisor (n / i) if it's different from i
            if (i != n / i) {
                sum += n / i;
            }
        }
    }

    return sum;
}

int main() {
    int n;
    printf("Enter a number (1 ≤ N ≤ 10^6): ");
    scanf("%d", &n);

    if (n < 1 || n > 1000000) {
        printf("Invalid input! Please enter a number between 1 and 10^6.\n");
        return 1;
    }

    printf("Sum of divisors of %d is: %lld\n", n, sum_of_divisors(n));
    return 0;
}