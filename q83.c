#include <stdio.h>
#include <ctype.h>  // for tolower()

int main() {
    char str[100];
    int i = 0;
    int vowels = 0, consonants = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        char ch = tolower(str[i]);  // convert to lowercase

        if ((ch >= 'a' && ch <= 'z')) { // check if alphabet
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
        i++;
    }

    printf("Number of vowels = %d\n", vowels);
    printf("Number of consonants = %d\n", consonants);

    return 0;
}

