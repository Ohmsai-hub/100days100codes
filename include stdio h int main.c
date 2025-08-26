#include <stdio.h>
int main() {
int num1 , num2 , sum , difference , product , division ;
printf("Enter the first number: ");
scanf("%d" , &num1);
printf("Enter the second number: ");
scanf("%d" , &num2);
sum = num1 + num2;
difference = num1 - num2;
product = num1*num2;
division = num1/num2;
printf("The sum of two numbers is : %d\n", sum);
printf("The difference of two numbers is : %d\n", difference);
printf("The product of two numbers is : %d\n", product);
printf("The division of two numbers is : %d\n", division);
return 0;
}
