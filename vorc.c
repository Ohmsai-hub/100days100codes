// Code to check if a character is vowel or consonant
#include <stdio.h>
#include <string.h>
int main() {
char character[10];
printf("Enter an english charcater: ");
scanf("%s" , character);
if (strcmp(character ,"a")==0 || strcmp(character ,"i")==0|| strcmp(character ,"e")==0|| strcmp(character ,"o")==0 || strcmp(character ,"u")==0) {
printf("%s is a vowel. \n " , character);
}
else {
printf("%s is a consonant. \n  ", character);
}
return 0;
}
