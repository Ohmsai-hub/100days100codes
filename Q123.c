#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char ch;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0;

    fp = fopen("info.txt", "r");

    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        characters++; // Count characters

        // Count lines
        if (ch == '\n')
            lines++;

        // Detect words
        if (!isspace(ch)) {
            if (!inWord) {  // Start of a new word
                inWord = 1;
                words++;
            }
        } else {
            inWord = 0; // End of word
        }
    }

    fclose(fp);

    printf("Total Characters: %d\n", characters);
    printf("Total Words: %d\n", words);
    printf("Total Lines: %d\n", lines);

    return 0;
}

