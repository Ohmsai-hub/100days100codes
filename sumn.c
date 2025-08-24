//Sum of first n natural numbers
#include <stdio.h>
int main() {
int n , sum;
printf("Enter a positive integer: ");
scanf("%d" , &n);
if (n<=0) {
printf("Please enter a positive integer greater than 0. \n");
}
else {
sum = (n*(n+1))/2;
printf("The sum of first n natural numbers is : %d \n" , sum);
}
return 0;
}
