#include <stdio.h>

int main() {
    char str[100];
    int count = 0;
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // read string including spaces

    // Count characters until null character
    while (str[i] != '\0') {
        if (str[i] != '\n') {  // ignore newline from fgets
            count++;
        }
        i++;
    }

    printf("Number of characters in the string = %d\n", count);

    return 0;
}

