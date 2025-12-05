#include <stdio.h>

int main() {
    int n, k;
    if (scanf("%d %d", &n, &k) != 2) return 0;

    if (n <= 0 || k <= 0 || k > n) {
        // invalid input: no subarray of size k exists
        printf("-1\n");
        return 0;
    }

    long long arr[n];
    for (int i = 0; i < n; ++i) {
        scanf("%lld", &arr[i]);
    }

    // compute sum of first window
    long long windowSum = 0;
    for (int i = 0; i < k; ++i) windowSum += arr[i];

    long long maxSum = windowSum;

    // slide the window
    for (int i = k; i < n; ++i) {
        windowSum += arr[i];        // add new element
        windowSum -= arr[i - k];    // remove element leaving the window
        if (windowSum > maxSum) maxSum = windowSum;
    }

    printf("%lld\n", maxSum);
    return 0;
}

