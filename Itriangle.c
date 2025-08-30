//Identifying triangles
#include <stdio.h>
int main() {
int side1 , side2 , side3 ;
printf("Enter the length of the side 1 of triangle: \n");
scanf("%d" , &side1);
printf("Enter the length of the side 2 of triangle: \n");
scanf("%d" , &side2);
printf("Enter the length of the side 3 of triangle: \n");
scanf("%d" , &side3);
if (side1 != side2 && side2 != side3 && side1 != side3){
printf("It is a scalene triangle.\n");
}
else if(side1 == side2 && side2 == side3){
printf("It is an equilateral triangle.\n");
}
else {
printf("It is an isosceles triangle.\n");
}
return 0;
}
