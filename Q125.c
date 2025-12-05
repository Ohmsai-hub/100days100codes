#include <stdio.h>

int main() {
    FILE *fp;
    char filename[50];
    char text[200];

    // Get filename from user
    printf("Enter filename to append to: ");
    scanf("%s", filename);
    getchar();  // Clear leftover newline

    // Open file in append mode
    fp = fopen(filename, "a");

    if (fp == NULL) {
        printf("Error: File not found or cannot open.\n");
        return 1;
    }

    // Get text to append
    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);

    // Append text to file
    fputs(text, fp);

    fclose(fp);

    printf("Text successfully appended to %s\n", filename);

    return 0;
}

