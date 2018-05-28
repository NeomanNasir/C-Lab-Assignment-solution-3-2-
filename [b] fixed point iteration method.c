#include<stdio.h>
#include<math.h>
///http://numericalmethodstutorials.readthedocs.io/en/latest/fixed.html?highlight=Iteration%20method
#define f(x) (x*x*x +x*x -1)
#define g(x) (1/sqrt(1+x))
#define gd(x) (0.5/pow((x+1),1.5))

int main()
{
    double x0 , x1, error = 0;
    char iffound = 0;
    printf("Please enter the initial value: ");
    scanf("%lf", &x0);

    if(gd(x0) > 1) printf("\nThe equation is not convergent!\n");
    else
    {
        do{
            x1 = g(x0);
            error = fabs(x1-x0);

            x0 = x1;
        }while(error > 0.0005);

        printf("\nThe required root is: %lf\n", x0);
    }

    return 0;
}
