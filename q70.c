#include <stdio.h>

int main() {
    int arr[100], n, k, i;
    int temp[100];

    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter k (number of positions to rotate): ");
    scanf("%d", &k);

    // Handle cases where k > n
    k = k % n;

    // Copy last k elements to the beginning of temp
    for (i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }

    // Copy the first n-k elements after them
    for (i = 0; i < n - k; i++) {
        temp[k + i] = arr[i];
    }

    // Copy back to original array
    for (i = 0; i < n; i++) {
        arr[i] = temp[i];
    }

    printf("Array after rotating right by %d positions: ", k);
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}



