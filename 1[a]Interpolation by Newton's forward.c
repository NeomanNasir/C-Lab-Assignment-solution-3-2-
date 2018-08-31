#include<stdio.h>
///from https://www.geeksforgeeks.org/newton-forward-backward-interpolation/
///try to solve example-4 from titas book 139 page.

double u_cal(double u, int n)
{
    double temp = u;
    int j;
    for(j = 1; j < n; j++)
        temp *= (u-j);
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

    ///calculating the forward difference table
    for(i = 1; i < n ; i++)
    {
        for(j = 0; j < n-i; j++)
        {
            y[j][i] = y[j+1][i-1] - y[j][i-1];
        }
    }
    ///Displaying the forward difference table
    for(i = 0; i < n; i++)
    {
        printf("%.4lf\t", x[i]);
        for(j = 0; j < n-i; j++)
        {
            printf("%.4lf\t",y[i][j]);
        }
        printf("\n");
    }

    ///initializing u and sum
    double u, sum;
    sum = y[0][0];
    u = (a - x[0])/(x[1]-x[0]);
    for(i = 1; i < n; i++)
    {
        sum += (u_cal(u,i)*y[0][i])/fact(i);
    }
    printf("\nValue at %f is %lf\n", a, sum);

    return 0;
}
