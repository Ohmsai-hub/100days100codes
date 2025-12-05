#include <stdio.h>

enum Gender {
    MALE,
    FEMALE,
    OTHER
};

struct Person {
    char name[50];
    enum Gender gender;
};

int main() {
    struct Person p;

    // Input name
    printf("Enter name: ");
    scanf("%s", p.name);

    // Input gender choice
    printf("Enter gender (0 = MALE, 1 = FEMALE, 2 = OTHER): ");
    scanf("%d", &p.gender);

    printf("\nPerson Details:\n");
    printf("Name: %s\n", p.name);

    // Print gender
    switch (p.gender) {
        case MALE:
            printf("Gender: Male\n");
            break;
        case FEMALE:
            printf("Gender: Female\n");
            break;
        case OTHER:
            printf("Gender: Other\n");
            break;
        default:
            printf("Invalid gender\n");
    }

    return 0;
}

