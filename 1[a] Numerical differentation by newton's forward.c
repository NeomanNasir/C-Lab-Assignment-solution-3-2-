#include<stdio.h>
///Calculating First derivate by using newton's forward method.
///U can solve titas or Sastry book maths.
///http://www.nptel.ac.in/courses/122104018/node117.html

int fact(int n)
{
    int f = 1, i;
    for(i = 2; i <= n; i++) f *= i;
    return f;
}

int main()
{
    int n, i, j, k;
    printf("Enter the value of n:\n");
    scanf("%d", &n);
    double x[n], y[n][n], a;
    printf("\nEnter the values in form x,y:\n");
    for(i = 0; i < n; i++)
        scanf("%lf %lf", &x[i], &y[i][0]);

    printf("\nEnter the value of 'a' for which the value of y is wanted and put the position of 'a' from the given data: \n");
    scanf("%lf %d", &a, &k);

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

    double h = x[1]-x[0];
    double sum = 0, ans;
    k = k-1;
    for(i = 1; i < (n-k); i++)
    {
        sum += pow(-1,i-1)*(y[k][i])/(double)fact(i);
    }

    ans = (1/h)*sum;

    printf("\nFirst Derivate at %.0lf is %.4lf\n", a, ans);

    return 0;
}
