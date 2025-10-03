#include <stdio.h>

int main() {
    int rows, cols, i, j;
    int matrix[100][100];
    int unique = 1;  // assume diagonal elements are unique

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    if (rows != cols) {
        printf("Matrix is not square. Diagonal uniqueness can only be checked in a square matrix.\n");
        return 0;
    }

    printf("Enter elements of the matrix (%d x %d):\n", rows, cols);
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check uniqueness of diagonal elements
    for (i = 0; i < rows; i++) {
        for (j = i + 1; j < cols; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                unique = 0;
                break;
            }
        }
        if (!unique) break;
    }

    if (unique) {
        printf("All diagonal elements are unique.\n");
    } else {
        printf("Diagonal elements are not unique.\n");
    }

    return 0;
}

