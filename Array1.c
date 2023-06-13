//Input elements of array and print the elements
#include<stdio.h>
int main(){
    int arr[10],i;
    printf("Enter 10 Elements:- ");
    for(i=0; i<10; i++){
        scanf("%d", &arr[i]);
        printf("%d\n", arr[i]);
    }
    return 0;
}