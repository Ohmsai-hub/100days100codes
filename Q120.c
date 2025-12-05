#include <stdio.h>
#include <ctype.h>

int main() {
    char str[200];
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Convert entire string to lowercase first
    while (str[i]) {
        str[i] = tolower(str[i]);
        i++;
    }

    // Convert first character to uppercase if alphabet
    if (str[0] != '\0') {
        str[0] = toupper(str[0]);
    }

    printf("Sentence Case: %s", str);

    return 0;
}

