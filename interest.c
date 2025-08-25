//Simple Interest and Compound Interest
#include <stdio.h>
#include <string.h>
int main() {
char command[10];
int principal, interest , time , si , ci ;
printf("Enter the principal amount: \n");
scanf("%d" , &principal);
printf("Enter the rate of interest: \n");
scanf("%d" , &interest);
printf("Enter the time : \n");
scanf("%d" , &time);
printf("Simple Interest or Compound Interest\n");
scanf("%s" , command);
if (strcmp(command , "SimpleInterest") == 0){
si = (principal*interest*time)/100;
printf("Simple Interest is : %d\n",si);
}
else if (strcmp(command , "CompoundInterest") == 0){
ci = (principal*(1+interest/100)^time)-principal;
printf("Compound Interest is : %d\n",ci);
}
else {
printf("Invalid command");
}
return 0;
}



