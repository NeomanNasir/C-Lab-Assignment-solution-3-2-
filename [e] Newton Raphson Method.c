#include<stdio.h>
///http://numericalmethodstutorials.readthedocs.io/en/latest/nr.html
#define f(x) (2*x*x*x - 3*x - 6)
#define fd(x) (6*x*x - 3)
#define fdd(x) 12*x
int main()
{
    double x0, x1, error, converge;
    printf("Input the approximation : ");
    scanf("%lf", &x0);
    converge= (f(x0)*fdd(x0))/(fd(x0)*fd(x0));
    if(converge >1) exit(1);

    do{
        x1 = x0 - (f(x0)/fd(x0));
        if(f(x1) == 0) break;

        error = fabs(x1 - x0);
        x0 = x1;
    }while(error > 0.00005);

    printf("Root is %lf\n", x0);
    return 0;
}
