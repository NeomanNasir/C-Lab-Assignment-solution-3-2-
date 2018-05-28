#include<stdio.h>

int sum(int a, int b)
{
    return a+b;
}
int main()
{
    int a, b, x;
    printf("Enter a and b:\n");
    scanf("%d %d", &a, &b);

    x = sum(a, b);

    printf("sum = %d\n", x);
    return 0;
}

