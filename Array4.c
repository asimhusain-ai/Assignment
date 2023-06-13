//Input 2D matrix elements and print the elements
#include<stdio.h>
int main(){
    int arr[3][3],i,j;
    printf("Enter The Elements of 3 * 3 Matrix :- ");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("  %d", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}