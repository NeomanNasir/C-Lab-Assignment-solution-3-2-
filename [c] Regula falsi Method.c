#include<stdio.h>
///http://numericalmethodstutorials.readthedocs.io/en/latest/regula.html
#define f(x) (x*x*x - 4*x + 1)

int main()
{
    double a, b, error = 0, c, c_prvs;
    printf("Input Interval: ");
    scanf("%lf %lf", &a, &b);
    if(f(a)*f(b) > 0)
    {
        printf("Invalid Interval Exit!");
        exit(1);
    }
    else if(f(a)==0 || f(b)==0)
    {
        printf("Root is one interval bounds. Root is %lf\n", f(a)==0?a:b);
        exit(0);
    }

    do{
        c_prvs = c;
        c = (a*f(b) - b*f(a))/(f(b)-f(a));
        if(f(c) == 0) break;
        else if(f(a)*f(c) < 0) b = c;
        else a = c;

        error = fabs(c - c_prvs);
    }while(error > 0.0005);

    printf("Approximate Root is %lf\n", c);
    return 0;
}
