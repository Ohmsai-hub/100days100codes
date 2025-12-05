#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements (only one repeated): ", n);

    int xor_all = 0, xor_array = 0;

    // Read input, and XOR all values
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        xor_array ^= arr[i];
    }

    // XOR expected numbers from 1 to n-1 
    // because array contains one extra duplicate in that range
    for (int i = 1; i < n; i++) {
        xor_all ^= i;
    }

    int repeated = xor_array ^ xor_all;

    printf("Repeated element: %d\n", repeated);

    return 0;
}

