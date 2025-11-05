#include <stdio.h>
#include <string.h>

int main() {
    char str[100], ch;
    int i, count = 0;

    // Input string from user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character added by fgets
    str[strcspn(str, "\n")] = '\0';

    // Input character to count
    printf("Enter a character to find its frequency: ");
    scanf("%c", &ch);

    // Count frequency
    for (i = 0; i < strlen(str); i++) {
        if (str[i] == ch) {
            count++;
        }
    }

    // Display result
    printf("Frequency of '%c' = %d\n", ch, count);

    return 0;
}

