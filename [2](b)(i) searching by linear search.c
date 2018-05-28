#include<stdio.h>
///Time Complexity: O(n)
///first elements position is zero.
int main()
{
    int n, i, key, check = 0, x;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int ara[n];
    for(i = 0; i < n; i++)
        scanf("%d", &ara[i]);

    printf("Enter searching key: ");
    scanf("%d", &key);

    for(i = 0; i < n; i++)
    {
        if(ara[i] == key)
        {
            check = 1;
            x = i;
            break;
        }
    }

    if(check == 1) printf("\n%d is found in this array and it's position is %d.\n", key, x);
    else printf("\n%d is not found in this array.\n", key);

    return 0;
}
