//Program to find area and parameter.
#include<stdio.h>
int main(){
    int len, br,area,parameter;
    printf("Enter the length and breadth:- ");
    scanf("%d %d", &len, &br);
    area=len*br;
    parameter=2*br+2*len;
    printf("Area:- %d cm\n", area);
    printf("Parameter:- %d cm", parameter);
    return 0;
}