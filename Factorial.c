//Program to find factorial of a number
#include <stdio.h>
int main() {
    int n,i,factorial = 1;
    
    printf("Enter an integer: ");
    scanf("%d", &n);
    
    for (i = 1; i <= n; ++i) {
        factorial=factorial* i;
    }
    
    printf("Factorial is %d" ,factorial);
    
    return 0;
}
