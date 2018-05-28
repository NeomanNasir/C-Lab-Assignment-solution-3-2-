#include<stdio.h>

int ara[50][50]; ///Global array. all position contains at first zero.
int main()
{
    int n, i, j, k;
    printf("Enter number of row: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        ara[i][1] = 1;
        for(j = 2; j <= n; j++)
            ara[i][j] = ara[i-1][j-1] + ara[i-1][j];

        for(k = n; k > i; k--) printf("    "); ///4 arbitrary spaces

        for(j = 1; j <= i; j++)
            printf("%d       ", ara[i][j]);  ///7 arbitrary spaces

        printf("\n");
    }

    return 0;
}
