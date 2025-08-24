//Swapping of two numbers without using third variable
#include <stdio.h>
int main() {
int num1 , num2 ;
printf("Enter the first number: ");
scanf("%d", &num1);
printf("Enter the second number: ");
scanf("%d" , &num2);
num1 = num1+num2;
num2 = num1-num2;
num1= num1-num2;
printf("the new first number is : %d\n" , num1);
printf("the new second number is : %d\n" , num2);
return 0;
}
