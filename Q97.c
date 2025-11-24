#include <stdio.h>
#include <ctype.h>

int main() {
    char name[100];
    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    // Print first initial (skip spaces)
    if (name[0] != ' ') {
        printf("%c", toupper(name[0]));
    }

    // Print initials after spaces
    for (int i = 1; name[i] != '\0'; i++) {
        if (name[i - 1] == ' ' && name[i] != ' ') {
            printf("%c", toupper(name[i]));
        }
    }

    return 0;
}

