#include <stdio.h>

// Function to compute the GCD using Euclidean algorithm
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int A, B;

    // Input two integers
    printf("Enter two integers: ");
    scanf("%d %d", &A, &B);

    // Compute and display the GCD
    printf("The GCD of %d and %d is: %d\n", A, B, gcd(A, B));

    return 0;
}