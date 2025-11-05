#include <stdio.h>
#include <string.h>
#include <ctype.h> // for tolower()

int is_palindrome(char str[]) {
    int start = 0;
    int end = strlen(str) - 1;

    // Compare characters from both ends
    while (start < end) {
        // Ignore non-alphanumeric characters (optional)
        while (!isalnum(str[start]) && start < end) start++;
        while (!isalnum(str[end]) && start < end) end--;

        // Compare lowercase versions for case insensitivity
        if (tolower(str[start]) != tolower(str[end]))
            return 0; // Not a palindrome

        start++;
        end--;
    }

    return 1; // It is a palindrome
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    if (is_palindrome(str))
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}

