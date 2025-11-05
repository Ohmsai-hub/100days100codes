#include <stdio.h>
#include <string.h>

void reverse_string(char str[]) {
    int start = 0;
    int end = strlen(str) - 1;
    char temp;

    // Swap characters from start to end
    while (start < end) {
        // Swap characters at start and end
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        // Move towards the middle
        start++;
        end--;
    }
}

int main() {
    char str[100];
    
    // Read input string from the user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the trailing newline character if present
    str[strcspn(str, "\n")] = '\0';

    // Reverse the string
    reverse_string(str);

    // Print the reversed string
    printf("Reversed string: %s\n", str);

    return 0;
}

