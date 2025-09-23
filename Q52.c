#include<stdio.h>
int main(){
int rows[5] ={1,3,5,3,1};
int i,j,k;
    for(i=0;i<5;i++){
        for(j=0;j<rows[i];j++){
           printf("*\n");
        }
        printf("\n");
    }
return 0;
}
