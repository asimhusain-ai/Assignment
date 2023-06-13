//Program to find factorial of a number using recursion
#include<stdio.h>
int fac(int n){
    if(n<=1){
        return 1;
    }
    else
    return n*fac(n-1);
}
int main(){
    int n,f;
    printf("Enter The Number :- ");
    scanf("%d", &n);
    f=fac(n);
    printf("%d", f);
    return 0;
}