#include <stdio.h>

int main() {
    int n, k;
    if (scanf("%d %d", &n, &k) != 2) return 0;

    if (n <= 0 || k <= 0) return 0;

    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    if (k > n) { // no full window exists
        return 0;
    }

    int q[n];      // will store indices of negative numbers
    int front = 0, back = -1;

    for (int i = 0; i < n; i++) {
        // if current element is negative, add its index to queue
        if (arr[i] < 0) {
            q[++back] = i;
        }

        // once we've processed k elements, start outputting results
        if (i >= k - 1) {
            int windowStart = i - k + 1;

            // remove indices that are out of the current window
            while (front <= back && q[front] < windowStart) {
                front++;
            }

            // print first negative or 0 if none
            if (front <= back)
                printf("%d ", arr[q[front]]);
            else
                printf("0 ");
        }
    }

    printf("\n");
    return 0;
}

