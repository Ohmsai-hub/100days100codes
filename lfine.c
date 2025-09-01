//Program to calculate library fine on late submission
#include<stdio.h>
int main() {
int days , fine ;
printf("Enter the amount of days the book has been issued : \n");
scanf("%d" , &days);
printf("The fine for each extra day after 7 days is 10 rupees.\n");
if (days <= 7) {
printf("There is no fine.\n");
}
else {
days = days-7;
fine = days * 10;
printf("The fine for late submission of book is %d . \n", fine);
}
return 0;
}



