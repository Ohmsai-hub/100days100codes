#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];      // You can increase this size if needed
    int lastIndex[256];
    int i;

    // Initialize all last indices as -1 (character not seen yet)
    for (i = 0; i < 256; i++) {
        lastIndex[i] = -1;
    }

    // Input string (reads till space/newline)
    // Use fgets if you want to read spaces as well.
    printf("Enter a string: ");
    scanf("%s", s);

    int n = strlen(s);
    int maxLen = 0;
    int start = 0;   // start index of current window (substring)

    for (i = 0; i < n; i++) {
        unsigned char ch = s[i];

        // If character seen and index is within current window, move start
        if (lastIndex[ch] >= start) {
            start = lastIndex[ch] + 1;
        }

        // Update last seen index of this character
        lastIndex[ch] = i;

        // Update max length
        int currLen = i - start + 1;
        if (currLen > maxLen) {
            maxLen = currLen;
        }
    }

    printf("Length of longest substring without repeating characters: %d\n", maxLen);

    return 0;
}

