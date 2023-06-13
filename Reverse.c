//Program to find reverse of a number
#include<stdio.h>
int main(){
    int number,remainder,reverse=0;
    printf("Enter The Value :- ");
    scanf("%d",&number);

    while(number>0){
        remainder=number%10;
        reverse=reverse*10+remainder;
        number=number/10;
    }
    printf("%d",reverse);
    
    return 0;
}