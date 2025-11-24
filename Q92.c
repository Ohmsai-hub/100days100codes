#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int freq[26] = {0};  // Frequency array for 'a' to 'z'
    int i;

    printf("Enter a string: ");
    scanf("%s", str); // reads a single word (no spaces)

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            int index = str[i] - 'a';
            freq[index]++;

            if (freq[index] == 2) {
                printf("First repeating lowercase alphabet: %c\n", str[i]);
                return 0;
            }
        }
    }

    printf("No repeating lowercase alphabet found.\n");
    return 0;
}

