#include<stdio.h>

int factorial(int n) ///a user-defined function using recursion
{
    if(n == 0 || n == 1) return 1;
    else return n*factorial(n-1);
}
int main()
{
    int n, i, facto;
    printf("Enter n: ");
    scanf("%d", &n);

    facto = factorial(n);

    printf("\n%d! = %d\n", n, facto);

    return 0;
}
