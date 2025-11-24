#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    char first[50], surname[50];

    printf("Enter your full name (first name and surname): ");
    fgets(name, sizeof(name), stdin);

    // Split into words
    sscanf(name, "%s %s", first, surname);

    // Print initial + surname
    printf("%c. %s\n", first[0], surname);

    return 0;
}

