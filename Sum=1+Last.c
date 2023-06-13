//Program to sum first and last-digit of a number
#include<stdio.h>
int main(){
    int num;
    printf("Enter Number To Operate :- ");
    scanf("%d", &num);

    int lastdigit=num%10;
    while(num>9){
        num=num/10;
    }
    int sum=lastdigit+num;
    printf("%d", sum);
    return 0;
}