#include <stdio.h>

int main() {
    int rows = 5;
    for (int i = 1; i <= rows; ++i) {
        // print spaces
        for (int s = 0; s < rows - i; ++s) putchar(' ');
        // print stars: (2*i - 1)
        for (int j = 0; j < 2*i - 1; ++j) putchar('*');
        putchar('\n');
    }
    return 0;
}