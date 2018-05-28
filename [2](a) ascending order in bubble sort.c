#include<stdio.h>

int main()
{
    int n, i, j, x;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int num[n];
    for(i = 0; i < n; i++)
        scanf("%d", &num[i]);

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n-1; j++)
        {
            if(num[j + 1] < num[j])
            {
                x = num[j];
                num[j] = num[j+1];
                num[j+1] = x;
            }
        }
    }

    printf("\nascending order of given numbers:\n");//lower to higher
    for(i = 0; i < n; i++)
        printf("%d ", num[i]);

    printf("\n");

    return 0;
}



