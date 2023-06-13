//Program to find largest number among three numbers
#include<stdio.h>
int main(){
    int n1,n2,n3;
    printf("Enter three numbers:- ");
    scanf("%d %d %d", &n1, &n2, &n3);
    if(n1>n2 && n1>n3){
        printf("%d", n1);
    }
    else if(n2>n1 && n2>n3){
        printf("%d", n2);
    }
    else(n3>n1 && n3>n2);
        printf("%d", n3);
    return 0;
}