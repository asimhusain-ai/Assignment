//Swapping using function
#include<stdio.h>
void swap(int a, int b){
    int temp = a;
    a=b;
    b=temp;
    printf("\nAfter Swapping\nA:-%d\nB:-%d", a, b);
}
int main(){
    int a,b;
    printf("Enter Two Numbers:- ");
    scanf("%d %d", &a, &b);
    printf("Before Swapping:-\nA:-%d\nB:-%d",a,b);
    swap(a,b);
    return 0;
}