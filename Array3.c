//Sum of five elements of Array
#include <stdio.h>
int main()
{
    int arr[5], sum = 0;
    printf("Enter 5 Elements Of Array:- ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }
    printf("The Sum is :- %d\n", sum);
    return 0;
}
