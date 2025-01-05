#include <stdio.h>

// Function to calculate factorial of a number
double factorial(int n) {
    double fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Function to calculate the sum of the exponential series
double exponential_series(double x, int N) {
    double sum = 1.0;  // First term is always 1
    for (int i = 1; i <= N; i++) {
        sum += (pow(x, i) / factorial(i));
    }
    return sum;
}

int main() {
    double x;
    int N;

    // Input real number x and integer N
    printf("Enter the value of x: ");
    scanf("%lf", &x);
    printf("Enter the number of terms N: ");
    scanf("%d", &N);

    // Calculate the sum of the exponential series
    double result = exponential_series(x, N);

    // Output the result
    printf("The sum of the first %d terms of the exponential series e^%.2lf is: %.6lf\n", N, x, result);

    return 0;
}