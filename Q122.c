#include <stdio.h>

int main() {
    FILE *fp;
    char line[200];

    // Open file in read mode
    fp = fopen("info.txt", "r");

    if (fp == NULL) {
        printf("Error opening file or file does not exist.\n");
        return 1;
    }

    printf("Contents of info.txt:\n");

    // Read and display lines until EOF
    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }

    fclose(fp);  // Close file

    return 0;
}

