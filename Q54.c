#include <stdio.h>

int main() {
    int n = 7; // number of rows (should be odd for symmetry)
    int i, j, space;

    int mid = n / 2; // middle row index

    // upper half including middle
    for (i = 0; i <= mid; i++) {
        // print spaces
        for (space = 0; space < mid - i; space++) {
            printf(" ");
        }
        // print stars
        for (j = 0; j < 2 * i + 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // lower half
    for (i = mid - 1; i >= 0; i--) {
        // print spaces
        for (space = 0; space < mid - i; space++) {
            printf(" ");
        }
        // print stars
        for (j = 0; j < 2 * i + 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
