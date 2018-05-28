#include<stdio.h>
///http://www.math.ohiou.edu/courses/math3600/lecture6.pdf
#define f(x) (x*x*x - 18)
int main()
{
    double x0, x1, x2, error;
    int i = 0;
    printf("Input two approximations: ");
    scanf("%lf %lf", &x0, &x1);

    do{
        x2 = ((x0*f(x1) - x1*f(x0))/(f(x1) - f(x0)));
        error = fabs(x2 - x1);

        x0 = x1;
        x1 = x2;
    }while(error > 0.00005);

    printf("Approximation root is %lf\n", x0);
    return 0;
}
