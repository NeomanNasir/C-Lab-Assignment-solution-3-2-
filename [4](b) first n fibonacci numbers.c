#include<stdio.h>

int main()
{
    int n, fib2 = 1, fib3 = 1, fib, i;
    printf("Enter n: ");
    scanf("%d", &n);

    printf("\nfirst n fibonacci numbers are given below: \n");
    for(i = 0; i < n; i++)
    {
        if(i == 0) fib = 0;
        else if(i == 1 || i == 2) fib = 1;
        else
        {
            fib = fib2+fib3;
            fib2 = fib3;
            fib3 = fib;
        }
        printf("%d ", fib);
    }
    printf("\n");

    return 0;
}
