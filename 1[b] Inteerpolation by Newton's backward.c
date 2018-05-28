#include<stdio.h>
///from https://www.geeksforgeeks.org/newton-forward-backward-interpolation/
///try to solve example-4 from titas book 139 page.

double u_cal(double u, int n)
{
    double temp = u;
    int j;
    for(j = 1; j < n; j++)
        temp *= (u+j);
    return temp;
}

int fact(int n)
{
    int f = 1, i;
    for(i = 2; i <= n; i++) f *= i;
    return f;
}

int main() ///program works from the main function
{
    int n, i, j;
    printf("Enter the value of n:\n");
    scanf("%d", &n);
    double x[n], y[n][n], a;
    printf("\nEnter the values in form x,y:\n");
    for(i = 0; i < n; i++)
        scanf("%lf %lf", &x[i], &y[i][0]);

    printf("\nEnter the value of a for which the value of y is wanted: \n");
    scanf("%lf", &a);

    ///calculating the backward difference table
    for(i = 1; i < n ; i++)
    {
        for(j = n-1; j >= i; j--)
        {
            y[j][i] = y[j][i-1] - y[j-1][i-1];
        }
    }
    ///Displaying the backward difference table
    for(i = 0; i < n; i++)
    {
        printf("%.0lf\t", x[i]);
        for(j = 0; j <= i; j++)
        {
            printf("%.4lf\t",y[i][j]);
        }
        printf("\n");
    }

    ///initializing u and sum
    double u, sum;
    sum = y[n-1][0];
    u = (a - x[n-1])/(x[1]-x[0]);
    for(i = 1; i < n; i++)
    {
        sum += (u_cal(u,i)*y[n-1][i])/fact(i);
    }
    printf("\nValue at %.0lf is %lf\n", a, sum);

    return 0;
}

