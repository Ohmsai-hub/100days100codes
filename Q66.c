#include <stdio.h>
int main() {
    int n, i, key, pos;
    printf("Enter the number of elements in the sorted array: ");
    scanf("%d", &n);
    int arr[n + 1]; 
    printf("Enter %d elements in sorted order:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to insert: ");
    scanf("%d", &key);
    pos = 0;
    while (pos < n && arr[pos] < key) {
        pos++;
    }
    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = key;
    n++; 
    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
