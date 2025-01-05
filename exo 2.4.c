#include <stdio.h>

// Function to calculate the sum of squares
long long sum_of_squares(int N) {
    return (long long)N * (N + 1) * (2 * N + 1) / 6;
}

int main() {
    int N;
    long long result;

    // Input the value of N
    printf("Enter the value of N: ");
    scanf("%d", &N);

    // Call the function
    result = sum_of_squares(N);

    // Output the result
    printf("The sum of the squares of the first %d natural numbers is: %lld\n", N, result);

    return 0;
}