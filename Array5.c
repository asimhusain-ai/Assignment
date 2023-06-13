//Sum of 2D Array
#include <stdio.h>
int main()
{
    int arr[3][3], m, n, sum = 0;
    printf("Enter The Size Of Array:- ");
    scanf("%d %d", &n, &m);
    printf("Enter The Element of Array:- ");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
            sum = sum + arr[i][j];
        }
    }
    printf("The Sum is :- %d\n", sum);
    return 0;
}
