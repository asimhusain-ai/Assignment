//Program to find length of a string
#include <stdio.h> 
#include<stdlib.h>
int main(){ 
    char str[50]; 
    int l; 
    printf("Input the string : "); 
    scanf("%s",&str); 
    l=strlen(str); 
    printf("The length of string is : %d\n", l); 
    return 0;  
    }