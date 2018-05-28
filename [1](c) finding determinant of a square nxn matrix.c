#include<stdio.h>
///from https://study-for-exam.blogspot.com/2013/04/write-c-progrm-to-find-determinant-of.html

int A[20][20], n;
int determinant(int X[20][20], int k);
int main()
{
    int i, j;
    printf("\n\nEnter order of matrix: ");
    scanf("%d", &n);
    printf("\nEnter the elements of matrix:\n");
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    printf("\n\n---------- Matrix A is --------------\n");
    for(i = 1; i <= n; i++)
    {
        printf("\n");
        for(j = 1; j <= n; j++)
        {
            printf("\t%d \t",A[i][j]);
        }
    }
    printf("\n \n");
    printf("\n Determinant of Matrix A is %d.\n\n",determinant(A,n));
    return 0;
}

int determinant(int X[20][20], int k)
{
    int det = 0, i, p, q, r, s, t, pr;
    int Y[20][20], Z[20];
    if(k == 2)
    {
        det = (X[1][1]*X[2][2]) - (X[1][2]*X[2][1]);
        return det;
    }
    else
    {
        for(i = 1; i <= k; i++)///dividing matrix into n-1 submatrix
        {
            int r = 1, s = 1;
            for(p = 1; p <= k; p++) ///row
            {
                for(q = 1; q <= k; q++)///column
                {
                    if(p!=1 && q!=i) ///we don't input element of row-1 and touching column in new submatrix
                    {
                        Y[r][s] = X[p][q];
                        s++;
                        if(s > k-1) r++, s = 1;
                    }
                }
            }
            for(t=1,pr=1; t <= (1+i); t++) pr=(-1)*pr;
            Z[i] = pr*determinant(Y, k-1);
        }
        for(i=1,det=0; i <= k; i++)
            det += (X[1][i]*Z[i]);

        return det;
    }
}
