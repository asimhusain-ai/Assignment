//Program to chech palindrome number
#include<stdio.h>
int main(){
    int number,remainder,reverse=0,a;
    printf("Enter The Value :- ");
    scanf("%d",&number);
    a=number;

    while(number>0){
        remainder=number%10;
        reverse=reverse*10+remainder;
        number=number/10;
    }
    if(a==reverse){
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }
    
    return 0;
}