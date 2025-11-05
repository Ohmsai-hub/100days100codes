#include <stdio.h>
#include <string.h>
#include <ctype.h>  // for tolower()

int main() {
    char str[100], result[100];
    int i, j = 0;

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character from fgets
    str[strcspn(str, "\n")] = '\0';

    // Traverse the string
    for (i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);  // make comparison case-insensitive
        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u') {
            result[j++] = str[i];  // copy non-vowel characters
        }
    }

    result[j] = '\0';  // null-terminate the new string

    // Display result
    printf("String after removing vowels: %s\n", result);

    return 0;
}

