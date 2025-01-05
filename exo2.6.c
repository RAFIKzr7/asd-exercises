#include <stdio.h>
#include <math.h>

int main() {
    double a, r, sum;
    int N;

    // Input the first term, common ratio, and number of terms
    printf("Enter the first term (a): ");
    scanf("%lf", &a);
    printf("Enter the common ratio (r): ");
    scanf("%lf", &r);
    printf("Enter the number of terms (N): ");
    scanf("%d", &N);

    // Compute the sum
    if (r == 1) {
        sum = a * N;  // Special case when r = 1
    } else {
        sum = a * (1 - pow(r, N)) / (1 - r);
    }

    // Output the result
    printf("The sum of the first %d terms of the geometric series is: %.2lf\n", N, sum);

    return 0;
}