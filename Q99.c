#include <stdio.h>
#include <string.h>

int main() {
    char input[20], output[20];
    char day[3], year[5];

    printf("Enter date in dd/04/yyyy format: ");
    scanf("%s", input);

    // Extract day and year from the input
    strncpy(day, input, 2);
    day[2] = '\0';

    strncpy(year, input + 5, 4);
    year[4] = '\0';

    // Create output in dd-Apr-yyyy format
    sprintf(output, "%s-Apr-%s", day, year);

    printf("Converted date: %s\n", output);

    return 0;
}

