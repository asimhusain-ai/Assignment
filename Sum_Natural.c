//Program to print numbers and sum of all numbers
#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter the value:- ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        printf("%d\n", i);
        sum = sum + i;
    }
    printf("The Overall Sum is:- %d",sum);
    return 0;
}