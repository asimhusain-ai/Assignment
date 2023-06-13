//Program to convert minutes into hours
#include<stdio.h>
int main(){
    int mins,hrs;
    printf("Enter The Value Of Minutes :- ");
    scanf("%d",&mins);
    
    hrs=mins/60;
    printf("Hours:- %d\n", hrs);
    mins=mins%60;
    printf("Minutes:- %d\n", mins);
    return 0;
}