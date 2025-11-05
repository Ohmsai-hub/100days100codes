#include <stdio.h>
#include <string.h>

void count_characters(char str[]) {
    int space_count = 0;
    int digit_count = 0;
    int special_count = 0;

    // Loop through each character of the string
    for (int i = 0; str[i] != '\0'; i++) {
        // Check if the character is a space
        if (str[i] == ' ') {
            space_count++;
        }
        // Check if the character is a digit (ASCII 48-57)
        else if (str[i] >= '0' && str[i] <= '9') {
            digit_count++;
        }
        // Check if the character is a special character
        // Alphanumeric characters (letters and digits) are excluded
        else if (!((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z') || (str[i] >= '0' && str[i] <= '9'))) {
            special_count++;
        }
    }

    // Output the counts
    printf("Spaces: %d\n", space_count);
    printf("Digits: %d\n", digit_count);
    printf("Special characters: %d\n", special_count);
}

int main() {
    char str[100];

    // Read input string from user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    // Call the function to count characters
    count_characters(str);

    return 0;
}

