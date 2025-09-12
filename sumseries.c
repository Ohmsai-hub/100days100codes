#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;

    printf("Enter number of terms (n): ");
    scanf("%d", &n);

    int numerator = 1, denominator = 2;  // start values

    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            sum += 1;   // first term is just 1
        } else {
            sum += (double)numerator / denominator;
        }
        numerator += 2;
        denominator += 2;
    }

    printf("Sum of series up to %d terms = %.4f\n", n, sum);

    return 0;
}