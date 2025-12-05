#include <stdio.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int arr[n];
    int sum = 0, actualSum;

    printf("Enter %d elements (from 0 to %d with one missing): ", n, n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    // Sum of first n natural numbers (0 to n)
    actualSum = n * (n + 1) / 2;

    printf("Missing number is: %d\n", actualSum - sum);

    return 0;
}

