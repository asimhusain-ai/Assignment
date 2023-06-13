//Fibonacci Series
#include<stdio.h>
int main(){
    int n;
    printf("Enter The Num :- ");
    scanf("%d",&n);
    int a=0;
    int b=1;
    printf("%d %d ",a,b);
    for (int i =1; i<=n; i++){
        int nextnum=a+b;
        printf("%d ", nextnum);
        a=b;
        b=nextnum;
    }
     
    return 0;
}