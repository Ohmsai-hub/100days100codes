// Finding roots of the quadratic equation
#include <stdio.h>
#include <math.h>
int main() {
double a , b , c , r1, r2 , d , rp , ip ;
printf("Enter the coefficient of x^2 : \n");
scanf("%lf", &a);
printf("Enter the coefficient of x : \n");
scanf("%lf" , &b);
printf("Enter the value of c in equation : \n");
scanf("%lf", &c);
d = b*b-4*a*c;
if (d>0){
r1 = (-b+sqrt(d))/(2*a);
r2 = (-b-sqrt(d))/(2*a);
printf("Roots are real and distinct.\n");
printf("The first root of the equation is %lf. \n", r1);
printf("The second root of the equation is %lf. \n", r2);
}
else {
rp = -b/(2*a);
ip = sqrt(-d)/(2*a);
printf("Roots are complex and imaginary. \n");
printf("The root 1 is = %.2lf + %.2lfi\n", rp , ip);
printf("The root 2 is = %.2lf - %.2lfi\n", rp , ip);
}
return 0;
}
