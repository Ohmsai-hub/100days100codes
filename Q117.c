#include <stdio.h>

int main() {
    int m, n;

    printf("Enter size of first sorted array: ");
    scanf("%d", &m);

    int arr1[m];
    printf("Enter %d sorted elements: ", m);
    for(int i = 0; i < m; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter size of second sorted array: ");
    scanf("%d", &n);

    int arr2[n];
    printf("Enter %d sorted elements: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    int merged[m + n];
    int i = 0, j = 0, k = 0;

    // Merge process
    while(i < m && j < n) {
        if(arr1[i] <= arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }

    // Copy remaining elements from arr1, if any
    while(i < m) {
        merged[k++] = arr1[i++];
    }

    // Copy remaining elements from arr2, if any
    while(j < n) {
        merged[k++] = arr2[j++];
    }

    // Print merged array
    printf("Merged sorted array:\n");
    for(int x = 0; x < m + n; x++) {
        printf("%d ", merged[x]);
    }
    printf("\n");

    return 0;
}

