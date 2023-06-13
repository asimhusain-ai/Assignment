//Addition and Multiplication using function
#include<stdio.h>
int func(int a, int b){
    int sum=0,multiple;
    sum = a + b;
    multiple = a * b;
    printf("The Sum Is:- %d\n",sum);
    printf("The Multiple Is:- %d\n",multiple);
    return 0;
}
int main(){
    int a,b;
    printf("Enter The Value Of A and B :- ");
    scanf("%d%d",&a,&b);
    func(a,b);
    return 0;
}