//Program to find cube of a number
#include<stdio.h>
int main(){
    int n,sum;
    printf("Enter The Number :- ");
    scanf("%d",&n);

    for(int i=1; i<=n; i++){
       printf("%d\n",(i*i*i));
    }
    return 0;
}