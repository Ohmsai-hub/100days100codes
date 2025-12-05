#include <stdio.h>

enum Role {
    ADMIN,
    USER,
    GUEST
};

int main() {
    enum Role r;

    // Example role assignment (you can change it)
    r = USER;  

    switch (r) {
        case ADMIN:
            printf("Welcome, Admin! You have full access.\n");
            break;
        case USER:
            printf("Welcome, User! You have limited access.\n");
            break;
        case GUEST:
            printf("Welcome, Guest! Please sign in for more options.\n");
            break;
        default:
            printf("Invalid role!\n");
    }

    return 0;
}

