#include <stdio.h>
#include <string.h>
#include <ctype.h>

void reverse_range(char *s, int i, int j) {
    while (i < j) {
        char t = s[i];
        s[i++] = s[j];
        s[j--] = t;
    }
}

void reverse_words(char *s) {
    int n = strlen(s), start = 0;
    for (int i = 0; i <= n; ++i) {
        if (s[i] == ' ' || s[i] == '\0') {
            reverse_range(s, start, i - 1);
            start = i + 1;
        }
    }
}

int main() {
    char str[] = "Hello world from C";
    reverse_words(str);
    printf("%s\n", str); // "olleH dlrow morf C"
    return 0;
}

