//Sum of rows of 2D matrix of Array
#include<stdio.h>
int main()
{
int arr[3][3],i,j,sum=0;
printf("Insert elements of matrix:- ");
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        scanf("%d",&arr[i][j]);
}
}
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        sum = sum + arr[j][i];
}
printf("Sum of %d Col:- %d\n",i,sum);
sum=0;      
}
return 0;
}