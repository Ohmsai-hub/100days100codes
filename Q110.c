#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int dq[n];   // will store indices
    int front = 0, back = -1;

    for (int i = 0; i < n; i++) {

        // Remove indices from front if they are out of this window
        if (front <= back && dq[front] <= i - k) {
            front++;
        }

        // Remove smaller elements from the back
        while (front <= back && arr[dq[back]] <= arr[i]) {
            back--;
        }

        // Add current element's index
        dq[++back] = i;

        // Print maximum for each valid window
        if (i >= k - 1) {
            printf("%d ", arr[dq[front]]);
        }
    }

    return 0;
}

