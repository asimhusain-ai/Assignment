//Program to find rightmost digit 
#include <stdio.h>
#include <math.h>
int main() {
    float num;
    int integral;
    printf("Enter a floating-point number: ");
    scanf("%f", &num);
    integral = (int)num;
    int rightmost_digit = integral % 10;
    printf("The rightmost digit is:- %d\n", rightmost_digit);
    return 0;
}
