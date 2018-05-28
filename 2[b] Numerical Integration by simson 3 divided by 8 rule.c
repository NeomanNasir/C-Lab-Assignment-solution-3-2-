#include<stdio.h>
#define f(x) 1/(1+x*x);

int main()
{
    double l_lim, u_lim;
    int n = 6, i, j;
    printf("Enter lower limit and upper limit of the integral:\n");
    scanf("%lf %lf", &l_lim, &u_lim);

    double h = (u_lim - l_lim)/n;
    double x[10], y[10];

    ///calculating value of x and y
    for(i = 0; i <= n; i++)
    {
        x[i] = l_lim + i*h;
        y[i] = f(x[i]);
    }

    ///Calculating result
    double res = 0;
    for(i = 0; i <= n; i++)
    {
        if(i==0 || i==n) res += y[i];
        else if(i%3 == 0) res += 2*y[i];
        else res += 3*y[i];
    }
    res = (3*h/8)*res;

    printf("\nIntegration obtained by simpson 3/8 rule is %lf\n", res);
    return 0;
}

