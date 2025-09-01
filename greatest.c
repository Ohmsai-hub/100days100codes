#include <stdio.h>
int main() {
int num1 , num2 , num3 , max;
printf("Enter the first number: ");
scanf("%d" , &num1);
printf("Enter the second number: ");
scanf("%d" , &num2);
printf("Enter the third number: ");
scanf("%d" , &num3);
max = num1;
if (max<num2) {
max = num2;
}
if (max<num3) {
max = num3;
}
printf("The maximum number is %d.\n" , max);
return 0;
}
