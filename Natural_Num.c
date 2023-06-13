//Print natural numbers and sum of natural number till n 
#include<stdio.h>
int main(){
    int n,sum;
    printf("Enter The Number :- ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        printf("%d ",i);
        sum=sum+1;
    }
    printf("\nThe Sum Of All Natural Numbers :- ");
    printf("%d ",sum);
    
    return 0;
}