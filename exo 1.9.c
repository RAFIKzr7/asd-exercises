#include <stdio.h>

// Function to compute GCD using Euclidean Algorithm
int gcd(int a, int b) {
    if (b == 0) 
        return a;
    return gcd(b, a % b);
}

// Extended Euclidean Algorithm to find x and y
void extendedGCD(int a, int b, int *x, int *y, int *g) {
    if (b == 0) {
        *x = 1;
        *y = 0;
        *g = a;
        return;
    }
    int x1, y1;
    extendedGCD(b, a % b, &x1, &y1, g);
    *x = y1;
    *y = x1 - (a / b) * y1;
}

int main() {
    int A, B, C, x, y, g;
    printf("Enter A, B, and C: ");
    scanf("%d %d %d", &A, &B, &C);

    // Find GCD and check divisibility
    g = gcd(A, B);
    if (C % g != 0) {
        printf("No integer solutions exist.\n");
        return 0;
    }

    // Find one solution using Extended Euclidean Algorithm
    extendedGCD(A, B, &x, &y, &g);
    x *= C / g;
    y *= C / g;

    printf("One solution is: x = %d, y = %d\n", x, y);
    return 0;
}