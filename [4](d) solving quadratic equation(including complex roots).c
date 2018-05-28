#include<stdio.h>
#include<math.h>
int main()
{
    double a, b, c, root1, root2, D, x, real_part, imaginary_part;
    printf("Enter the values coefficients a, b, c:\n");
    scanf("%lf %lf %lf", &a, &b, &c);

    D = (b*b) - 4*a*c;

    if(D < 0)
    {
        real_part = -b/(2.0*a);
        imaginary_part = sqrt(-D)/(2.0*a);
        printf("\nHere roots are complex number.\n");
        printf("root1 = %.1lf + %.1lf i\n", real_part, imaginary_part);
        printf("root1 = %.1lf - %.1lf i\n", real_part, imaginary_part);
    }
    else
    {
        root1 = (-b + sqrt(D))/(2.0*a);
        root2 = (-b - sqrt(D))/(2.0*a);
        printf("\nRoot1 = %.1lf\tRoot2 = %.1lf\n", root1, root2);
    }

    return 0;
}

