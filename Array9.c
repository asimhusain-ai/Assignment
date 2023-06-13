//Program to Transpose of a 3*3 Matrix.
#include<stdio.h>
int main(){
    int arr[2][3],i,j;
    printf("Enter The Elements Of Array:- ");
    for(i=0; i<2; i++){
        for(j=0; j<3; j++){
            scanf("%d", &arr[i][j]);
            printf("%d  ",arr[i][j]);
        }
        printf("\n");
    }
    printf("The Transpose is:- \n");
    for(i=0; i<3; i++){
        for(j=0; j<2; j++){
            printf("%d  ", arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}