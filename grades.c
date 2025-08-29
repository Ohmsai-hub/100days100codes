//Program to find the grades based on percentage
#include <stdio.h>
int main() {
int percentage;
printf("Enter the percentage: \n");
scanf("%d" , &percentage);
if (percentage < 33){
printf("Grade is F.\n");
}
else if (34 < percentage < 50){
printf("Grade is E.\n");
}
else if ( 51 < percentage < 70){
printf("Grade is D.\n");
}
else if ( 71 < percentage < 80){
printf("Grade is C.\n");
}
else if ( 81 < percentage < 90){
printf("Grade is B.\n");
}
else if ( 91 < percentage < 100){
printf("Grade is B.\n");
}
else {
printf("Invalid Command");
}
return 0;
}
