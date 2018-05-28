#include<stdio.h>

int main()
{
    int n, sum = 0, i;
    double AM, GM, HM, isum = 0.0, pdt = 1.0, X, Variance;
    printf("Enter number of elements n: ");
    scanf("%d", &n);
    int elements[n];
    printf("Enter all elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &elements[i]);
        sum += elements[i];
        pdt *= elements[i];
        isum += 1.0/elements[i];
    }

    AM = sum/(double)n;
    GM = pow(pdt, (1.0/n));
    HM = n / isum; /// HM = n divided by summation of all elements inverse

    isum = 0;
    for(i = 0; i < n; i++)
    {
        X = elements[i] - AM;
        isum += X*X;
    }
    Variance = isum / n; ///The average of the summation of the squared differences from the mean

    printf("\nArithmetic Mean = %.2lf\n", AM);
    printf("Geometric Mean = %.2lf\n", GM);
    printf("Harmonic Mean = %.2lf\n", HM);
    printf("Variance = %.2lf\n", Variance);

    return 0;
}
