#include <stdio.h>
#include <string.h>
void replace_spaces_with_hyphens(char str[]) {
    // Loop through the string
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            str[i] = '-';  // Replace space with hyphen
        }
    }
}

int main() {
    char str[100];

    // Read input string from user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    // Call function to replace spaces with hyphens
    replace_spaces_with_hyphens(str);

    // Output the modified string
    printf("Modified string: %s\n", str);

    return 0;
}

