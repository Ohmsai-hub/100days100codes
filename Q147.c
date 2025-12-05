#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee e[3], temp;
    FILE *fp;
    int i;

    // Input employee data
    printf("Enter details of 3 employees:\n");
    for (i = 0; i < 3; i++) {
        printf("\nEmployee %d\n", i + 1);

        printf("Enter name: ");
        scanf("%s", e[i].name);

        printf("Enter ID: ");
        scanf("%d", &e[i].id);

        printf("Enter salary: ");
        scanf("%f", &e[i].salary);
    }

    // Write to binary file
    fp = fopen("employees.dat", "wb");
    if (fp == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    fwrite(e, sizeof(struct Employee), 3, fp);
    fclose(fp);

    printf("\nData written to binary file successfully.\n");

    // Read from binary file
    fp = fopen("employees.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    printf("\nEmployee Records Read from File:\n");

    while (fread(&temp, sizeof(struct Employee), 1, fp)) {
        printf("\nName: %s\n", temp.name);
        printf("ID: %d\n", temp.id);
        printf("Salary: %.2f\n", temp.salary);
    }

    fclose(fp);

    return 0;
}

