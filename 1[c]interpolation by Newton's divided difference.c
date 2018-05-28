#include<stdio.h>
///www.geeksforgeeks.org/newtons-divided-difference-interpolation-formula/
///try to solve example-4 from titas book 139 page.

///Function to find the product term
double pdt_term(int i, double a, double x[])
{
    double pdt = 1;
    int j;
    for(j = 0; j < i; j++)
        pdt *= (a - x[j]);
    return pdt;
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

    printf("\nEnter the value of 'a' for which the value of y is wanted: \n");
    scanf("%lf", &a);

    ///calculating the divided difference table
    for(i = 1; i < n; i++)
    {
        for(j = 0; j < n-i; j++)
        {
            y[j][i] = (y[j+1][i-1]-y[j][i-1])/(x[i+j]-x[j]);
        }
    }
    ///Displaying the divided difference table
    for(i = 0; i < n; i++)
    {
        printf("%.0lf\t", x[i]);
        for(j = 0; j < n-i; j++)
        {
            printf("%.4lf\t",y[i][j]);
        }
        printf("\n");
    }

    double sum = y[0][0];
    for(i = 1; i < n; i++)
        sum += (pdt_term(i, a, x) * y[0][i]);

    printf("\nValue at %.0lf is %lf\n", a, sum);

    return 0;
}

