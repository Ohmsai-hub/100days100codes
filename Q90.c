#include <stdio.h>
#include <ctype.h>  // for islower(), isupper(), tolower(), toupper()

int main() {
    char str[100];
    int i;

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Toggle case
    for (i = 0; str[i] != '\0'; i++) {
        if (islower(str[i]))
            str[i] = toupper(str[i]);
        else if (isupper(str[i]))
            str[i] = tolower(str[i]);
    }

    // Output modified string
    printf("Toggled case string: %s", str);

    return 0;
}

