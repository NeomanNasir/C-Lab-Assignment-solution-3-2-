#include<stdio.h>
///www.geeksforgeeks.org/lagranges-interpolation/
///U can solve titas book maths from 168 or 169 page.

int main() ///program works from the main function
{
    int n, i, j;
    printf("Enter the value of n:\n");
    scanf("%d", &n);
    double x[n], y[n], a;
    printf("\nEnter the values in form x,y:\n");
    for(i = 0; i < n; i++)
        scanf("%lf %lf", &x[i], &y[i]);

    printf("\nEnter the value of a for which the value of y is wanted: \n");
    scanf("%lf", &a);

    double sum = 0, term;
    for(i = 0; i < n; i++)
    {
        term = y[i];
        for(j = 0; j < n; j++)
        {
            if(j != i)
                term = term*(a-x[j])/(x[i]-x[j]);
        }
        sum += term;
    }

    printf("\nValue at %.0lf is %lf\n", a, sum);

    return 0;
}

