#include <stdio.h>
#include <ctype.h>  // For toupper() function

void to_uppercase(char str[]) {
    int i = 0;
    
    // Iterate over the string until the null character
    while (str[i] != '\0') {
        str[i] = toupper(str[i]);  // Convert each character to uppercase
        i++;
    }
}

int main() {
    char str[100];
    
    // Read a string from the user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Safer way to read a string with spaces

    // Convert to uppercase
    to_uppercase(str);
    
    // Output the result
    printf("Uppercase string: %s", str);

    return 0;
}

