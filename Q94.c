#include <stdio.h>
#include <string.h>

int main() {
    char sentence[200];
    char longest[50] = "";
    char current[50];
    int i = 0, j = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    while (sentence[i] != '\0') {
        if (sentence[i] != ' ' && sentence[i] != '\n') {
            current[j++] = sentence[i];
        } else {
            current[j] = '\0';
            if (strlen(current) > strlen(longest)) {
                strcpy(longest, current);
            }
            j = 0;
        }
        i++;
    }

    // Check last word if sentence doesn't end with space
    current[j] = '\0';
    if (strlen(current) > strlen(longest)) {
        strcpy(longest, current);
    }

    printf("Longest word: %s\n", longest);
    printf("Length: %lu\n", strlen(longest));

    return 0;
}

