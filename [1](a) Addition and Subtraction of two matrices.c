#include<stdio.h>

int main()
{
    int n, m, i, j;
    printf("Enter Your Matrices row and column Sizes n and m: ");
    scanf("%d %d", &n, &m);

    int Mat1[n][m], Mat2[n][m]; ///for addition or subtraction matrices must be equal in size
    printf("Enter Your first Matrix:\n");
    for(i = 0; i < n ; i++)
    {
        for(j = 0; j < m; j++)
        {
            scanf("%d", &Mat1[i][j]);
        }
    }
    printf("Enter Your Second Matrix:\n");
    for(i = 0; i < n ; i++)
    {
        for(j = 0; j < m; j++)
        {
            scanf("%d", &Mat2[i][j]);
        }
    }

    printf("Addition of given two Matrices:\n");
    for(i = 0; i < n ; i++)
    {
        for(j = 0; j < m; j++)
        {
            printf("%d ", Mat1[i][j]+Mat2[i][j]);
        }
        printf("\n");
    }

    printf("Subtraction of given two Matrices:\n");
    for(i = 0; i < n ; i++)
    {
        for(j = 0; j < m; j++)
        {
            printf("%d ", Mat1[i][j]-Mat2[i][j]);
        }
        printf("\n");
    }

    return 0;
}
