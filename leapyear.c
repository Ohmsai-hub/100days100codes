// To check if a year is leap year or not
#include <stdio.h>
int main() {
int year;
printf("Enter the year you want to check: ");
scanf("%d" , &year);
if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
printf("%d is a leap year . \n", year);
}
else {
printf("%d is not a leap year. \n",year);
}
return 0;
}
