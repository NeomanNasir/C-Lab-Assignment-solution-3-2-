#include<stdio.h>

int main()
{
    int n1, m1, n2, m2, i, j, k, pdt;
    printf("Enter the first Matrix row and column sizes n1 and m1: ");
    scanf("%d %d", &n1, &m1);
    int Mat1[n1][m1];
    printf("Enter Your first Matrix:\n");
    for(i = 0; i < n1 ; i++)
    {
        for(j = 0; j < m1; j++)
        {
            scanf("%d", &Mat1[i][j]);
        }
    }

    printf("Remind that, Column size of first Matrix must be equal to the row size of second Matrix.\n");
    printf("Enter the second Matrix row and column sizes n2 and m2: ");
    scanf("%d %d", &n2, &m2);
    int Mat2[n2][m2];
    printf("Enter Your second Matrix:\n");
    for(i = 0; i < n2 ; i++)
    {
        for(j = 0; j < m2; j++)
        {
            scanf("%d", &Mat2[i][j]);
        }
    }

    printf("\nMultiplication of Given Two Matrices:\n");
    for(i = 0; i < n1; i++)
    {
        for(j = 0; j < m2; j++)
        {
            pdt = 0;
            for(k = 0; k < n2; k++)
            {
                pdt += Mat1[i][k]*Mat2[k][j];
            }
            printf("%d ", pdt);
        }
        printf("\n");
    }

    return 0;
}
