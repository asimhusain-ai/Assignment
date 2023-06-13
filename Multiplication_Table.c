//Program to print multiplication table of a number
#include<stdio.h>
int main(){
    int n;
    printf("Enter The Value :- ");
    scanf("%d", &n);

    for(int i=1; i<=10; i++){
        printf("%d * %d = %d\n",n,i,(i*n));
    }
    return 0;
}