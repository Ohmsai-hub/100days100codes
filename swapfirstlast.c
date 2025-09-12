#include <stdio.h>
#include <math.h>

int main() {
    int num, firstDigit, lastDigit, digits, swappedNum;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Count number of digits
    digits = (int)log10(num);

    // Extract first and last digits
    firstDigit = num / pow(10, digits);
    lastDigit = num % 10;

    // If number has only one digit, no need to swap
    if (digits == 0) {
        printf("Swapped number = %d\n", num);
        return 0;
    }

    // Remove first digit
    int middlePart = num % (int)pow(10, digits);
    middlePart /= 10;

    // Construct new number after swapping
    swappedNum = lastDigit * pow(10, digits) + middlePart * 10 + firstDigit;

    printf("Number after swapping first and last digits = %d\n", swappedNum);

    return 0;
}