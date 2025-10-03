#include <stdio.h>

int main() {
    int n, i, j;
    int matrix[100][100];
    int sum = 0;

    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    printf("Enter elements of the matrix (%d x %d):\n", n, n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate sum of diagonal elements
    for (i = 0; i < n; i++) {
        sum += matrix[i][i];  // only diagonal elements
    }

    printf("Sum of diagonal elements = %d\n", sum);

    return 0;
}

