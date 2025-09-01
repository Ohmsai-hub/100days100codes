//Program to calculate electricity bill on units consumed
#include<stdio.h>
int main (){
int units , bill ;
printf("Enter the units of electricity used.\n");
scanf("%d", &units);
bill = units * 9;
printf("The cost of 1 unit of electricity is 9 rupees.\n");
printf("The bill of electricity is %d rupees.\n" , bill);
return 0;
}

