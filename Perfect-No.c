//Program to find perfect number
#include <stdio.h>
int main(){
    int n, sum = 0;
    printf("Enter the num to check :- ");
    scanf("%d", &n);
    for (int i = 1; i <= n/2; i++){
        if (n % i == 0){
            sum = sum + i;
        }
    }
    if(sum == n){
        printf("Perfect");
    }
    else{
        printf("Not Perfect");
    }
    return 0;
}