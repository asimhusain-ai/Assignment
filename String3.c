//Program to reverse string
#include <stdio.h>
#include<stdlib.h>
int main(){
char str[50];
printf("Input the string : ");
scanf("%s",&str);
printf("The length of string is : %s\n", strrev(str));
return 0;
}