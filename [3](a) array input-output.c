#include<stdio.h>

int main()
{
    int n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int num[n];
    for(i = 0; i < n; i++)
        scanf("%d", &num[i]);

    printf("\nGiven array: \n");
    for(i = 0; i < n; i++)
        printf("%d ", num[i]);

    return 0;
}
