#include<stdio.h>

int main()
{
    int n, i, check = 1;
    printf("Enter n: ");
    scanf("%d", &n);

    if(n == 1) check = 0;
    else
    {
        for(i = 2; i <= n/2; i++)
        {
            if(n % i == 0)
            {
                check = 0;
                break;
            }
        }
    }

    if(check == 1) printf("\n%d is a prime number.\n", n);
    else printf("\n%d is not a prime number.\n", n);

    return 0;
}
