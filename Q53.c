#include<stdio.h>
int main(){
int rows[9]={1,3,5,7,9,7,5,3,1};
int i,j,k;
    for(i=0;i<9;i++){
       for(j=0;j<rows[i];j++){
       printf("*");
       }
   printf("\n");
   }
return 0;
}
