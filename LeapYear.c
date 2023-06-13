//Program to check leap year or not a leap year
#include<stdio.h>
int main(){
    int year;
    printf("Enter The Year:- ");
    scanf("%d", &year);

    if(year % 400 == 0){
        printf("Leap Year:- %d", year);
    }
    else if(year % 100 ==0){
        printf("Not Leap Year:- %d", year);
    }
    else if(year % 4 ==0){
        printf("Leap Year:- %d", year);
    }
    else{
        printf("Not Leap Year:- %d", year);
    }
    return 0;
}