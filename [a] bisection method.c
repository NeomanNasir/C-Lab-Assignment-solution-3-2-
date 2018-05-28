#include<stdio.h>
///http://numericalmethodstutorials.readthedocs.io/en/latest/bisection.html
///exit(0) indicates that the program terminated without errors.
///exit(1) indicates that there were an error.
#define f(x) (x*x*x - 18)

int main()
{
    double a, b, error = 0, m = 0, m_prvs;
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
        m_prvs = m;
        m = (a+b)/2;
        if(f(m) == 0) break;
        else if(f(a)*f(m) < 0) b = m;
        else a = m;

        error = fabs(m-m_prvs);
    }while(error > 0.0005);

    printf("Approximate Root is %lf\n", m);
    return 0;
}
