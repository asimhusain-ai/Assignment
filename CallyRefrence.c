//Call By Reference
#include<stdio.h>
void swap(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int a,b;
    printf("Enter the values:- ");
    scanf("%d%d",&a,&b);
    printf("Before:- %d , %d", a,b);
    swap(&a,&b);
    printf("\nAfter:- %d , %d", a, b);
    return 0;
}