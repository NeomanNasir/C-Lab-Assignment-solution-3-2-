#include<stdio.h>

int main()
{
    int i, j, n, m;

    printf("Enter Your Matrix Size: ");
    scanf("%d %d", &n, &m);
    int x, Transpose[m][n];
    printf("Enter Your Matrix:\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            scanf("%d", &x);
            Transpose[j][i] = x;
        }
    }

    printf("\nThe transpose of the given matrix is:\n");
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%d ", Transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}

