#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int maxSum = arr[0];
    int currentSum = arr[0];

    for (int i = 1; i < n; i++) {

        // If currentSum becomes worse than starting fresh from arr[i]
        if (currentSum + arr[i] < arr[i]) {
            currentSum = arr[i];
        } else {
            currentSum += arr[i];
        }

        // Update global maximum
        if (currentSum > maxSum) {
            maxSum = currentSum;
        }
    }

    printf("%d", maxSum);
    return 0;
}

