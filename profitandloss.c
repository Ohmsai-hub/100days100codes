//Profit percent and Loss Percent
#include <stdio.h>
int main() {;
float cp , sp , profit , loss , profitper , lossper ;
printf("Enter the cost price: \n");
scanf("%f", &cp);
printf("Enter the selling price: \n");
scanf("%f", &sp);
if (cp > sp) {
loss = cp - sp ;
lossper = (loss/cp)*100;
printf("The loss percent is %.2f%%.\n", lossper);
}
else if (sp > cp) {
profit = sp - cp ;
profitper = (profit/cp)*100;
printf("The profit percent is %.2f%%.\n", profitper);
}
else if (sp = cp) {
printf("Their is neither profit or loss.\n");
}
else {
printf("Invalid statement.\n");
}
return 0;
}
