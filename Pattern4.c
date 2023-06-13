//Program to print pattern
#include<stdio.h>
int main(){
    int n=4;
    int count = 1;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            printf("%d", count);
            count++;
        }
        printf("\n");
    }
    return 0;
}