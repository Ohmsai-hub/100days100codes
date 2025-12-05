#include <stdio.h>

int main() {
    FILE *fp;
    char name[50];
    int age;

    // Open file in write mode
    fp = fopen("info.txt", "w");

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Taking input from user
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter your age: ");
    scanf("%d", &age);

    // Write to file using fprintf
    fprintf(fp, "Name: %s", name);
    fprintf(fp, "Age: %d\n", age);

    fclose(fp);  // Close file

    printf("Data successfully saved to info.txt\n");

    return 0;
}

