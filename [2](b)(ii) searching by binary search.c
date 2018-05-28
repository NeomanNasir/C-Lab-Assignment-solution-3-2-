#include<stdio.h>
///Time Complexity: O(log n)
///from http://cpbook.subeen.com/2011/08/binary-search.html
///first element position is zero
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

    int low_index = 0, high_index = n-1, mid_index;
    while (low_index <= high_index)
    {
         mid_index = (low_index + high_index) / 2;
         if (key == ara[mid_index]) break;

         if (key < ara[mid_index]) high_index = mid_index - 1;
         else low_index = mid_index + 1;
     }

     if (low_index > high_index)
         printf("\n%d is not found the array.\n", key);
     else
         printf("\n%d is found in this array and it's position is %d.\n", key, mid_index);


    return 0;
}
