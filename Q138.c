#include <stdio.h>

enum Weekday {
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};

int main() {
    enum Weekday day;

    const char *names[] = {
        "SUNDAY", "MONDAY", "TUESDAY", "WEDNESDAY",
        "THURSDAY", "FRIDAY", "SATURDAY"
    };

    printf("Enum Names and Values:\n");
    
    for (day = SUNDAY; day <= SATURDAY; day++) {
        printf("%s = %d\n", names[day], day);
    }

    return 0;
}

