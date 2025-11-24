#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool isRotation(const char *s1, const char *s2) {
    if (!s1 || !s2) return false;

    size_t n1 = strlen(s1);
    size_t n2 = strlen(s2);

    if (n1 != n2) return false;            // lengths must match
    if (n1 == 0) return true;              // two empty strings -> rotation

    // allocate buffer for s1 + s1 (plus terminating NUL)
    char *concat = malloc(2 * n1 + 1);
    if (!concat) {
        perror("malloc");
        exit(EXIT_FAILURE);
    }

    // build s1s1
    strcpy(concat, s1);
    strcat(concat, s1);

    // check if s2 is substring of concat
    bool result = (strstr(concat, s2) != NULL);

    free(concat);
    return result;
}

int main(void) {
    char s1[1000], s2[1000];

    printf("Enter first string: ");
    if (!fgets(s1, sizeof(s1), stdin)) return 0;
    printf("Enter second string: ");
    if (!fgets(s2, sizeof(s2), stdin)) return 0;

    // remove trailing newline if present
    s1[strcspn(s1, "\n")] = '\0';
    s2[strcspn(s2, "\n")] = '\0';

    if (isRotation(s1, s2))
        printf("\"%s\" IS a rotation of \"%s\"\n", s2, s1);
    else
        printf("\"%s\" is NOT a rotation of \"%s\"\n", s2, s1);

    return 0;
}

