#include <stdio.h>
#include <math.h>
#include <string.h>
/*operation on
circles
*/
int main() {
char command[10];
int radius , area , circumference ;
printf("Enter the radius of the circle: ");
scanf("%d", &radius);
area = pi*radius*radius;
circumference = 2*pi*radius;
printf("Area or Circumference: ");
scanf("%s", command);
if (strcmp(command, "Circumference") == 0){
printf("The Circumference of the Circle is : %d", circumference);
}
else if (strcmp(command, "Area") ==0){
printf("The Area of the circle is : %d", area);
}
else{
printf("Invalid Command");
}
return 0;
}

