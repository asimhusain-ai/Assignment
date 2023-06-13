//Reversing an Array
#include<stdio.h>
int main(){
    int arr[10];
    printf("Enter The Elements of Array :- ");
    for(int i=0; i<10; i++){
        scanf("%d", &arr[i]);
    }
    printf("Reverse Elements Are:- \n");
    for(int i=9; i>=0; i--){
        printf(" %d", arr[i]);
    }
    return 0;
}