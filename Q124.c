#include <stdio.h>

int main() {
    FILE *src, *dest;
    char sourceFile[100], destFile[100];
    int ch;

    // Get file names from user
    printf("Enter source filename: ");
    scanf("%s", sourceFile);

    printf("Enter destination filename: ");
    scanf("%s", destFile);

    // Open source file
    src = fopen(sourceFile, "r");
    if (src == NULL) {
        printf("Error: Unable to open source file.\n");
        return 1;
    }

    // Open destination file
    dest = fopen(destFile, "w");
    if (dest == NULL) {
        printf("Error: Unable to create destination file.\n");
        fclose(src);
        return 1;
    }

    // Copy content character by character
    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    // Close both files
    fclose(src);
    fclose(dest);

    printf("File copied successfully.\n");

    return 0;
}

