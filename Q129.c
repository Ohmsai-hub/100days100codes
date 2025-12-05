#include <stdio.h>

int main() {
    FILE *fp;
    int num, count = 0;
    long sum = 0;

    fp = fopen("numbers.txt", "r");
    if (fp == NULL) {
        printf("Error: Cannot open numbers.txt\n");
        return 1;
    }

    // Read integers until EOF
    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(fp);

    if (count == 0) {
        printf("No numbers found in file.\n");
    } else {
        printf("Sum = %ld\n", sum);
        printf("Average = %.2f\n", (double)sum / count);
    }

    return 0;
}

