#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // Total sum from 1 to n
    int total = n * (n + 1) / 2;

    // Find x such that sum(1..x) = sum(x..n)
    // sum(1..x) = x*(x+1)/2
    // sum(x..n) = total - (x*(x-1)/2)
    // Condition: x*(x+1)/2 == total - (x*(x-1)/2)

    for (int x = 1; x <= n; x++) {
        int leftSum = x * (x + 1) / 2;
        int rightSum = total - (x * (x - 1) / 2);

        if (leftSum == rightSum) {
            printf("%d", x);
            return 0;
        }
    }

    printf("-1");
    return 0;
}

